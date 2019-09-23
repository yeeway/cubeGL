/*
 * @Author: YuWei 
 * @Date: 2019-09-10 16:34:26 
 * @Last Modified by: YuWei
 * @Last Modified time: 2019-09-10 16:55:36
 */

#include "cubegl.h"
#include "entry_points/gles_2_0.h"

extern "C"
{
    void GL_APIENTRY glActiveTexture(GLenum texture)
    {
        gl::ActiveTexture(texture);
    }

    void GL_APIENTRY glAttachShader(GLuint program, GLuint shader)
    {
        
    }

    void GL_APIENTRY glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
    {
    }

    void GL_APIENTRY glBindBuffer(GLenum target, GLuint buffer)
    {
        return gl::BindBuffer(target, buffer);
    }

    void GL_APIENTRY glBindFramebuffer(GLenum target, GLuint framebuffer)
    {
        return gl::BindFramebuffer(target, framebuffer);
    }

    void GL_APIENTRY glBindRenderbuffer(GLenum target, GLuint renderbuffer)
    {
        return gl::BindRenderbuffer(target, renderbuffer);
    }

    void GL_APIENTRY glBindTexture(GLenum target, GLuint texture)
    {
        return gl::BindTexture(target, texture);
    }

    void GL_APIENTRY glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
    {
        return gl::BlendColor(red, green, blue, alpha);
    }

    void GL_APIENTRY glBlendEquation(GLenum mode)
    {
        return gl::BlendEquation(mode);
    }

    void GL_APIENTRY glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
    {
        return gl::BlendEquationSeparate(modeRGB, modeAlpha);
    }

    void GL_APIENTRY glBlendFunc(GLenum sfactor, GLenum dfactor)
    {
        return gl::BlendFunc(sfactor, dfactor);
    }

    void GL_APIENTRY glBlendFuncSeparate(GLenum sfactorRGB,
                                         GLenum dfactorRGB,
                                         GLenum sfactorAlpha,
                                         GLenum dfactorAlpha)
    {
        return gl::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    }

    void GL_APIENTRY glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage)
    {
        return gl::BufferData(target, size, data, usage);
    }

    void GL_APIENTRY glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
    {
        return gl::BufferSubData(target, offset, size, data);
    }

    GLenum GL_APIENTRY glCheckFramebufferStatus(GLenum target)
    {
        return gl::CheckFramebufferStatus(target);
    }

    void GL_APIENTRY glClear(GLbitfield mask)
    {
        return gl::Clear(mask);
    }

    void GL_APIENTRY glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
    {
        return gl::ClearColor(red, green, blue, alpha);
    }

    void GL_APIENTRY glClearDepthf(GLfloat d)
    {
        return gl::ClearDepthf(d);
    }

    void GL_APIENTRY glClearStencil(GLint s)
    {
        return gl::ClearStencil(s);
    }

    void GL_APIENTRY glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
    {
        return gl::ColorMask(red, green, blue, alpha);
    }

    void GL_APIENTRY glCompileShader(GLuint shader)
    {
        return gl::CompileShader(shader);
    }

    void GL_APIENTRY glCompressedTexImage2D(GLenum target,
                                            GLint level,
                                            GLenum internalformat,
                                            GLsizei width,
                                            GLsizei height,
                                            GLint border,
                                            GLsizei imageSize,
                                            const void *data)
    {
        return gl::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize,
                                        data);
    }

    void GL_APIENTRY glCompressedTexSubImage2D(GLenum target,
                                               GLint level,
                                               GLint xoffset,
                                               GLint yoffset,
                                               GLsizei width,
                                               GLsizei height,
                                               GLenum format,
                                               GLsizei imageSize,
                                               const void *data)
    {
        return gl::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format,
                                           imageSize, data);
    }

    void GL_APIENTRY glCopyTexImage2D(GLenum target,
                                      GLint level,
                                      GLenum internalformat,
                                      GLint x,
                                      GLint y,
                                      GLsizei width,
                                      GLsizei height,
                                      GLint border)
    {
        return gl::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
    }

    void GL_APIENTRY glCopyTexSubImage2D(GLenum target,
                                         GLint level,
                                         GLint xoffset,
                                         GLint yoffset,
                                         GLint x,
                                         GLint y,
                                         GLsizei width,
                                         GLsizei height)
    {
        return gl::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    }

    GLuint GL_APIENTRY glCreateProgram()
    {
        return gl::CreateProgram();
    }

    GLuint GL_APIENTRY glCreateShader(GLenum type)
    {
        return gl::CreateShader(type);
    }

    void GL_APIENTRY glCullFace(GLenum mode)
    {
        return gl::CullFace(mode);
    }

    void GL_APIENTRY glDeleteBuffers(GLsizei n, const GLuint *buffers)
    {
        return gl::DeleteBuffers(n, buffers);
    }

    void GL_APIENTRY glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers)
    {
        return gl::DeleteFramebuffers(n, framebuffers);
    }

    void GL_APIENTRY glDeleteProgram(GLuint program)
    {
        return gl::DeleteProgram(program);
    }

    void GL_APIENTRY glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
    {
        return gl::DeleteRenderbuffers(n, renderbuffers);
    }

    void GL_APIENTRY glDeleteShader(GLuint shader)
    {
        return gl::DeleteShader(shader);
    }

    void GL_APIENTRY glDeleteTextures(GLsizei n, const GLuint *textures)
    {
        return gl::DeleteTextures(n, textures);
    }

    void GL_APIENTRY glDepthFunc(GLenum func)
    {
        return gl::DepthFunc(func);
    }

    void GL_APIENTRY glDepthMask(GLboolean flag)
    {
        return gl::DepthMask(flag);
    }

    void GL_APIENTRY glDepthRangef(GLfloat n, GLfloat f)
    {
        return gl::DepthRangef(n, f);
    }

    void GL_APIENTRY glDetachShader(GLuint program, GLuint shader)
    {
        return gl::DetachShader(program, shader);
    }

    void GL_APIENTRY glDisable(GLenum cap)
    {
        return gl::Disable(cap);
    }

    void GL_APIENTRY glDisableVertexAttribArray(GLuint index)
    {
        return gl::DisableVertexAttribArray(index);
    }

    void GL_APIENTRY glDrawArrays(GLenum mode, GLint first, GLsizei count)
    {
        return gl::DrawArrays(mode, first, count);
    }

    void GL_APIENTRY glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices)
    {
        return gl::DrawElements(mode, count, type, indices);
    }

    void GL_APIENTRY glEnable(GLenum cap)
    {
        return gl::Enable(cap);
    }

    void GL_APIENTRY glEnableVertexAttribArray(GLuint index)
    {
        return gl::EnableVertexAttribArray(index);
    }

    void GL_APIENTRY glFinish()
    {
        return gl::Finish();
    }

    void GL_APIENTRY glFlush()
    {
        return gl::Flush();
    }

    void GL_APIENTRY glFramebufferRenderbuffer(GLenum target,
                                               GLenum attachment,
                                               GLenum renderbuffertarget,
                                               GLuint renderbuffer)
    {
        return gl::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
    }

    void GL_APIENTRY glFramebufferTexture2D(GLenum target,
                                            GLenum attachment,
                                            GLenum textarget,
                                            GLuint texture,
                                            GLint level)
    {
        return gl::FramebufferTexture2D(target, attachment, textarget, texture, level);
    }

    void GL_APIENTRY glFrontFace(GLenum mode)
    {
        return gl::FrontFace(mode);
    }

    void GL_APIENTRY glGenBuffers(GLsizei n, GLuint *buffers)
    {
        return gl::GenBuffers(n, buffers);
    }

    void GL_APIENTRY glGenFramebuffers(GLsizei n, GLuint *framebuffers)
    {
        return gl::GenFramebuffers(n, framebuffers);
    }

    void GL_APIENTRY glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
    {
        return gl::GenRenderbuffers(n, renderbuffers);
    }

    void GL_APIENTRY glGenTextures(GLsizei n, GLuint *textures)
    {
        return gl::GenTextures(n, textures);
    }

    void GL_APIENTRY glGenerateMipmap(GLenum target)
    {
        return gl::GenerateMipmap(target);
    }

    void GL_APIENTRY glGetActiveAttrib(GLuint program,
                                       GLuint index,
                                       GLsizei bufSize,
                                       GLsizei *length,
                                       GLint *size,
                                       GLenum *type,
                                       GLchar *name)
    {
        return gl::GetActiveAttrib(program, index, bufSize, length, size, type, name);
    }

    void GL_APIENTRY glGetActiveUniform(GLuint program,
                                        GLuint index,
                                        GLsizei bufSize,
                                        GLsizei *length,
                                        GLint *size,
                                        GLenum *type,
                                        GLchar *name)
    {
        return gl::GetActiveUniform(program, index, bufSize, length, size, type, name);
    }

    void GL_APIENTRY glGetAttachedShaders(GLuint program,
                                          GLsizei maxCount,
                                          GLsizei *count,
                                          GLuint *shaders)
    {
        return gl::GetAttachedShaders(program, maxCount, count, shaders);
    }

    GLint GL_APIENTRY glGetAttribLocation(GLuint program, const GLchar *name)
    {
        return gl::GetAttribLocation(program, name);
    }

    void GL_APIENTRY glGetBooleanv(GLenum pname, GLboolean *data)
    {
        return gl::GetBooleanv(pname, data);
    }

    void GL_APIENTRY glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetBufferParameteriv(target, pname, params);
    }

    GLenum GL_APIENTRY glGetError()
    {
        return gl::GetError();
    }

    void GL_APIENTRY glGetFloatv(GLenum pname, GLfloat *data)
    {
        return gl::GetFloatv(pname, data);
    }

    void GL_APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target,
                                                           GLenum attachment,
                                                           GLenum pname,
                                                           GLint *params)
    {
        return gl::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
    }

    void GL_APIENTRY glGetIntegerv(GLenum pname, GLint *data)
    {
        return gl::GetIntegerv(pname, data);
    }

    void GL_APIENTRY glGetProgramInfoLog(GLuint program,
                                         GLsizei bufSize,
                                         GLsizei *length,
                                         GLchar *infoLog)
    {
        return gl::GetProgramInfoLog(program, bufSize, length, infoLog);
    }

    void GL_APIENTRY glGetProgramiv(GLuint program, GLenum pname, GLint *params)
    {
        return gl::GetProgramiv(program, pname, params);
    }

    void GL_APIENTRY glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetRenderbufferParameteriv(target, pname, params);
    }

    void GL_APIENTRY glGetShaderInfoLog(GLuint shader,
                                        GLsizei bufSize,
                                        GLsizei *length,
                                        GLchar *infoLog)
    {
        return gl::GetShaderInfoLog(shader, bufSize, length, infoLog);
    }

    void GL_APIENTRY glGetShaderPrecisionFormat(GLenum shadertype,
                                                GLenum precisiontype,
                                                GLint *range,
                                                GLint *precision)
    {
        return gl::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
    }

    void GL_APIENTRY glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
    {
        return gl::GetShaderSource(shader, bufSize, length, source);
    }

    void GL_APIENTRY glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
    {
        return gl::GetShaderiv(shader, pname, params);
    }

    const GLubyte *GL_APIENTRY glGetString(GLenum name)
    {
        return gl::GetString(name);
    }

    void GL_APIENTRY glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
    {
        return gl::GetTexParameterfv(target, pname, params);
    }

    void GL_APIENTRY glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetTexParameteriv(target, pname, params);
    }

    GLint GL_APIENTRY glGetUniformLocation(GLuint program, const GLchar *name)
    {
        return gl::GetUniformLocation(program, name);
    }

    void GL_APIENTRY glGetUniformfv(GLuint program, GLint location, GLfloat *params)
    {
        return gl::GetUniformfv(program, location, params);
    }

    void GL_APIENTRY glGetUniformiv(GLuint program, GLint location, GLint *params)
    {
        return gl::GetUniformiv(program, location, params);
    }

    void GL_APIENTRY glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer)
    {
        return gl::GetVertexAttribPointerv(index, pname, pointer);
    }

    void GL_APIENTRY glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
    {
        return gl::GetVertexAttribfv(index, pname, params);
    }

    void GL_APIENTRY glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
    {
        return gl::GetVertexAttribiv(index, pname, params);
    }

    void GL_APIENTRY glHint(GLenum target, GLenum mode)
    {
        return gl::Hint(target, mode);
    }

    GLboolean GL_APIENTRY glIsBuffer(GLuint buffer)
    {
        return gl::IsBuffer(buffer);
    }

    GLboolean GL_APIENTRY glIsEnabled(GLenum cap)
    {
        return gl::IsEnabled(cap);
    }

    GLboolean GL_APIENTRY glIsFramebuffer(GLuint framebuffer)
    {
        return gl::IsFramebuffer(framebuffer);
    }

    GLboolean GL_APIENTRY glIsProgram(GLuint program)
    {
        return gl::IsProgram(program);
    }

    GLboolean GL_APIENTRY glIsRenderbuffer(GLuint renderbuffer)
    {
        return gl::IsRenderbuffer(renderbuffer);
    }

    GLboolean GL_APIENTRY glIsShader(GLuint shader)
    {
        return gl::IsShader(shader);
    }

    GLboolean GL_APIENTRY glIsTexture(GLuint texture)
    {
        return gl::IsTexture(texture);
    }

    void GL_APIENTRY glLineWidth(GLfloat width)
    {
        return gl::LineWidth(width);
    }

    void GL_APIENTRY glLinkProgram(GLuint program)
    {
        return gl::LinkProgram(program);
    }

    void GL_APIENTRY glPixelStorei(GLenum pname, GLint param)
    {
        return gl::PixelStorei(pname, param);
    }

    void GL_APIENTRY glPolygonOffset(GLfloat factor, GLfloat units)
    {
        return gl::PolygonOffset(factor, units);
    }

    void GL_APIENTRY glReadPixels(GLint x,
                                  GLint y,
                                  GLsizei width,
                                  GLsizei height,
                                  GLenum format,
                                  GLenum type,
                                  void *pixels)
    {
        return gl::ReadPixels(x, y, width, height, format, type, pixels);
    }

    void GL_APIENTRY glReleaseShaderCompiler()
    {
        return gl::ReleaseShaderCompiler();
    }

    void GL_APIENTRY glRenderbufferStorage(GLenum target,
                                           GLenum internalformat,
                                           GLsizei width,
                                           GLsizei height)
    {
        return gl::RenderbufferStorage(target, internalformat, width, height);
    }

    void GL_APIENTRY glSampleCoverage(GLfloat value, GLboolean invert)
    {
        return gl::SampleCoverage(value, invert);
    }

    void GL_APIENTRY glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
    {
        return gl::Scissor(x, y, width, height);
    }

    void GL_APIENTRY glShaderBinary(GLsizei count,
                                    const GLuint *shaders,
                                    GLenum binaryformat,
                                    const void *binary,
                                    GLsizei length)
    {
        return gl::ShaderBinary(count, shaders, binaryformat, binary, length);
    }

    void GL_APIENTRY glShaderSource(GLuint shader,
                                    GLsizei count,
                                    const GLchar *const *string,
                                    const GLint *length)
    {
        return gl::ShaderSource(shader, count, string, length);
    }

    void GL_APIENTRY glStencilFunc(GLenum func, GLint ref, GLuint mask)
    {
        return gl::StencilFunc(func, ref, mask);
    }

    void GL_APIENTRY glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
    {
        return gl::StencilFuncSeparate(face, func, ref, mask);
    }

    void GL_APIENTRY glStencilMask(GLuint mask)
    {
        return gl::StencilMask(mask);
    }

    void GL_APIENTRY glStencilMaskSeparate(GLenum face, GLuint mask)
    {
        return gl::StencilMaskSeparate(face, mask);
    }

    void GL_APIENTRY glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
    {
        return gl::StencilOp(fail, zfail, zpass);
    }

    void GL_APIENTRY glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
    {
        return gl::StencilOpSeparate(face, sfail, dpfail, dppass);
    }

    void GL_APIENTRY glTexImage2D(GLenum target,
                                  GLint level,
                                  GLint internalformat,
                                  GLsizei width,
                                  GLsizei height,
                                  GLint border,
                                  GLenum format,
                                  GLenum type,
                                  const void *pixels)
    {
        return gl::TexImage2D(target, level, internalformat, width, height, border, format, type,
                              pixels);
    }

    void GL_APIENTRY glTexParameterf(GLenum target, GLenum pname, GLfloat param)
    {
        return gl::TexParameterf(target, pname, param);
    }

    void GL_APIENTRY glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
    {
        return gl::TexParameterfv(target, pname, params);
    }

    void GL_APIENTRY glTexParameteri(GLenum target, GLenum pname, GLint param)
    {
        return gl::TexParameteri(target, pname, param);
    }

    void GL_APIENTRY glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
    {
        return gl::TexParameteriv(target, pname, params);
    }

    void GL_APIENTRY glTexSubImage2D(GLenum target,
                                     GLint level,
                                     GLint xoffset,
                                     GLint yoffset,
                                     GLsizei width,
                                     GLsizei height,
                                     GLenum format,
                                     GLenum type,
                                     const void *pixels)
    {
        return gl::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
    }

    void GL_APIENTRY glUniform1f(GLint location, GLfloat v0)
    {
        return gl::Uniform1f(location, v0);
    }

    void GL_APIENTRY glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
    {
        return gl::Uniform1fv(location, count, value);
    }

    void GL_APIENTRY glUniform1i(GLint location, GLint v0)
    {
        return gl::Uniform1i(location, v0);
    }

    void GL_APIENTRY glUniform1iv(GLint location, GLsizei count, const GLint *value)
    {
        return gl::Uniform1iv(location, count, value);
    }

    void GL_APIENTRY glUniform2f(GLint location, GLfloat v0, GLfloat v1)
    {
        return gl::Uniform2f(location, v0, v1);
    }

    void GL_APIENTRY glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
    {
        return gl::Uniform2fv(location, count, value);
    }

    void GL_APIENTRY glUniform2i(GLint location, GLint v0, GLint v1)
    {
        return gl::Uniform2i(location, v0, v1);
    }

    void GL_APIENTRY glUniform2iv(GLint location, GLsizei count, const GLint *value)
    {
        return gl::Uniform2iv(location, count, value);
    }

    void GL_APIENTRY glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
    {
        return gl::Uniform3f(location, v0, v1, v2);
    }

    void GL_APIENTRY glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
    {
        return gl::Uniform3fv(location, count, value);
    }

    void GL_APIENTRY glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
    {
        return gl::Uniform3i(location, v0, v1, v2);
    }

    void GL_APIENTRY glUniform3iv(GLint location, GLsizei count, const GLint *value)
    {
        return gl::Uniform3iv(location, count, value);
    }

    void GL_APIENTRY glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
    {
        return gl::Uniform4f(location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
    {
        return gl::Uniform4fv(location, count, value);
    }

    void GL_APIENTRY glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
    {
        return gl::Uniform4i(location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glUniform4iv(GLint location, GLsizei count, const GLint *value)
    {
        return gl::Uniform4iv(location, count, value);
    }

    void GL_APIENTRY glUniformMatrix2fv(GLint location,
                                        GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value)
    {
        return gl::UniformMatrix2fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix3fv(GLint location,
                                        GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value)
    {
        return gl::UniformMatrix3fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix4fv(GLint location,
                                        GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value)
    {
        return gl::UniformMatrix4fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUseProgram(GLuint program)
    {
        return gl::UseProgram(program);
    }

    void GL_APIENTRY glValidateProgram(GLuint program)
    {
        return gl::ValidateProgram(program);
    }

    void GL_APIENTRY glVertexAttrib1f(GLuint index, GLfloat x)
    {
        return gl::VertexAttrib1f(index, x);
    }

    void GL_APIENTRY glVertexAttrib1fv(GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib1fv(index, v);
    }

    void GL_APIENTRY glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
    {
        return gl::VertexAttrib2f(index, x, y);
    }

    void GL_APIENTRY glVertexAttrib2fv(GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib2fv(index, v);
    }

    void GL_APIENTRY glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::VertexAttrib3f(index, x, y, z);
    }

    void GL_APIENTRY glVertexAttrib3fv(GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib3fv(index, v);
    }

    void GL_APIENTRY glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
    {
        return gl::VertexAttrib4f(index, x, y, z, w);
    }

    void GL_APIENTRY glVertexAttrib4fv(GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib4fv(index, v);
    }

    void GL_APIENTRY glVertexAttribPointer(GLuint index,
                                           GLint size,
                                           GLenum type,
                                           GLboolean normalized,
                                           GLsizei stride,
                                           const void *pointer)
    {
        return gl::VertexAttribPointer(index, size, type, normalized, stride, pointer);
    }

    void GL_APIENTRY glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
    {
        return gl::Viewport(x, y, width, height);
    }

    // OpenGL ES 3.0
    void GL_APIENTRY glBeginQuery(GLenum target, GLuint id)
    {
        return gl::BeginQuery(target, id);
    }

    void GL_APIENTRY glBeginTransformFeedback(GLenum primitiveMode)
    {
        return gl::BeginTransformFeedback(primitiveMode);
    }

    void GL_APIENTRY glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
    {
        return gl::BindBufferBase(target, index, buffer);
    }

    void GL_APIENTRY
    glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
    {
        return gl::BindBufferRange(target, index, buffer, offset, size);
    }

    void GL_APIENTRY glBindSampler(GLuint unit, GLuint sampler)
    {
        return gl::BindSampler(unit, sampler);
    }

    void GL_APIENTRY glBindTransformFeedback(GLenum target, GLuint id)
    {
        return gl::BindTransformFeedback(target, id);
    }

    void GL_APIENTRY glBindVertexArray(GLuint array)
    {
        return gl::BindVertexArray(array);
    }

    void GL_APIENTRY glBlitFramebuffer(GLint srcX0,
                                       GLint srcY0,
                                       GLint srcX1,
                                       GLint srcY1,
                                       GLint dstX0,
                                       GLint dstY0,
                                       GLint dstX1,
                                       GLint dstY1,
                                       GLbitfield mask,
                                       GLenum filter)
    {
        return gl::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask,
                                   filter);
    }

    void GL_APIENTRY glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
    {
        return gl::ClearBufferfi(buffer, drawbuffer, depth, stencil);
    }

    void GL_APIENTRY glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value)
    {
        return gl::ClearBufferfv(buffer, drawbuffer, value);
    }

    void GL_APIENTRY glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value)
    {
        return gl::ClearBufferiv(buffer, drawbuffer, value);
    }

    void GL_APIENTRY glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value)
    {
        return gl::ClearBufferuiv(buffer, drawbuffer, value);
    }

    GLenum GL_APIENTRY glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
    {
        return gl::ClientWaitSync(sync, flags, timeout);
    }

    void GL_APIENTRY glCompressedTexImage3D(GLenum target,
                                            GLint level,
                                            GLenum internalformat,
                                            GLsizei width,
                                            GLsizei height,
                                            GLsizei depth,
                                            GLint border,
                                            GLsizei imageSize,
                                            const void *data)
    {
        return gl::CompressedTexImage3D(target, level, internalformat, width, height, depth, border,
                                        imageSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage3D(GLenum target,
                                               GLint level,
                                               GLint xoffset,
                                               GLint yoffset,
                                               GLint zoffset,
                                               GLsizei width,
                                               GLsizei height,
                                               GLsizei depth,
                                               GLenum format,
                                               GLsizei imageSize,
                                               const void *data)
    {
        return gl::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height,
                                           depth, format, imageSize, data);
    }

    void GL_APIENTRY glCopyBufferSubData(GLenum readTarget,
                                         GLenum writeTarget,
                                         GLintptr readOffset,
                                         GLintptr writeOffset,
                                         GLsizeiptr size)
    {
        return gl::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
    }

    void GL_APIENTRY glCopyTexSubImage3D(GLenum target,
                                         GLint level,
                                         GLint xoffset,
                                         GLint yoffset,
                                         GLint zoffset,
                                         GLint x,
                                         GLint y,
                                         GLsizei width,
                                         GLsizei height)
    {
        return gl::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }

    void GL_APIENTRY glDeleteQueries(GLsizei n, const GLuint *ids)
    {
        return gl::DeleteQueries(n, ids);
    }

    void GL_APIENTRY glDeleteSamplers(GLsizei count, const GLuint *samplers)
    {
        return gl::DeleteSamplers(count, samplers);
    }

    void GL_APIENTRY glDeleteSync(GLsync sync)
    {
        return gl::DeleteSync(sync);
    }

    void GL_APIENTRY glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids)
    {
        return gl::DeleteTransformFeedbacks(n, ids);
    }

    void GL_APIENTRY glDeleteVertexArrays(GLsizei n, const GLuint *arrays)
    {
        return gl::DeleteVertexArrays(n, arrays);
    }

    void GL_APIENTRY glDrawArraysInstanced(GLenum mode,
                                           GLint first,
                                           GLsizei count,
                                           GLsizei instancecount)
    {
        return gl::DrawArraysInstanced(mode, first, count, instancecount);
    }

    void GL_APIENTRY glDrawBuffers(GLsizei n, const GLenum *bufs)
    {
        return gl::DrawBuffers(n, bufs);
    }

    void GL_APIENTRY glDrawElementsInstanced(GLenum mode,
                                             GLsizei count,
                                             GLenum type,
                                             const void *indices,
                                             GLsizei instancecount)
    {
        return gl::DrawElementsInstanced(mode, count, type, indices, instancecount);
    }

    void GL_APIENTRY glDrawRangeElements(GLenum mode,
                                         GLuint start,
                                         GLuint end,
                                         GLsizei count,
                                         GLenum type,
                                         const void *indices)
    {
        return gl::DrawRangeElements(mode, start, end, count, type, indices);
    }

    void GL_APIENTRY glEndQuery(GLenum target)
    {
        return gl::EndQuery(target);
    }

    void GL_APIENTRY glEndTransformFeedback()
    {
        return gl::EndTransformFeedback();
    }

    GLsync GL_APIENTRY glFenceSync(GLenum condition, GLbitfield flags)
    {
        return gl::FenceSync(condition, flags);
    }

    void GL_APIENTRY glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
    {
        return gl::FlushMappedBufferRange(target, offset, length);
    }

    void GL_APIENTRY glFramebufferTextureLayer(GLenum target,
                                               GLenum attachment,
                                               GLuint texture,
                                               GLint level,
                                               GLint layer)
    {
        return gl::FramebufferTextureLayer(target, attachment, texture, level, layer);
    }

    void GL_APIENTRY glGenQueries(GLsizei n, GLuint *ids)
    {
        return gl::GenQueries(n, ids);
    }

    void GL_APIENTRY glGenSamplers(GLsizei count, GLuint *samplers)
    {
        return gl::GenSamplers(count, samplers);
    }

    void GL_APIENTRY glGenTransformFeedbacks(GLsizei n, GLuint *ids)
    {
        return gl::GenTransformFeedbacks(n, ids);
    }

    void GL_APIENTRY glGenVertexArrays(GLsizei n, GLuint *arrays)
    {
        return gl::GenVertexArrays(n, arrays);
    }

    void GL_APIENTRY glGetActiveUniformBlockName(GLuint program,
                                                 GLuint uniformBlockIndex,
                                                 GLsizei bufSize,
                                                 GLsizei *length,
                                                 GLchar *uniformBlockName)
    {
        return gl::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length,
                                             uniformBlockName);
    }

    void GL_APIENTRY glGetActiveUniformBlockiv(GLuint program,
                                               GLuint uniformBlockIndex,
                                               GLenum pname,
                                               GLint *params)
    {
        return gl::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
    }

    void GL_APIENTRY glGetActiveUniformsiv(GLuint program,
                                           GLsizei uniformCount,
                                           const GLuint *uniformIndices,
                                           GLenum pname,
                                           GLint *params)
    {
        return gl::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
    }

    void GL_APIENTRY glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params)
    {
        return gl::GetBufferParameteri64v(target, pname, params);
    }

    void GL_APIENTRY glGetBufferPointerv(GLenum target, GLenum pname, void **params)
    {
        return gl::GetBufferPointerv(target, pname, params);
    }

    GLint GL_APIENTRY glGetFragDataLocation(GLuint program, const GLchar *name)
    {
        return gl::GetFragDataLocation(program, name);
    }

    void GL_APIENTRY glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data)
    {
        return gl::GetInteger64i_v(target, index, data);
    }

    void GL_APIENTRY glGetInteger64v(GLenum pname, GLint64 *data)
    {
        return gl::GetInteger64v(pname, data);
    }

    void GL_APIENTRY glGetIntegeri_v(GLenum target, GLuint index, GLint *data)
    {
        return gl::GetIntegeri_v(target, index, data);
    }

    void GL_APIENTRY glGetInternalformativ(GLenum target,
                                           GLenum internalformat,
                                           GLenum pname,
                                           GLsizei bufSize,
                                           GLint *params)
    {
        return gl::GetInternalformativ(target, internalformat, pname, bufSize, params);
    }

    void GL_APIENTRY glGetProgramBinary(GLuint program,
                                        GLsizei bufSize,
                                        GLsizei *length,
                                        GLenum *binaryFormat,
                                        void *binary)
    {
        return gl::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
    }

    void GL_APIENTRY glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
    {
        return gl::GetQueryObjectuiv(id, pname, params);
    }

    void GL_APIENTRY glGetQueryiv(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetQueryiv(target, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params)
    {
        return gl::GetSamplerParameterfv(sampler, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params)
    {
        return gl::GetSamplerParameteriv(sampler, pname, params);
    }

    const GLubyte *GL_APIENTRY glGetStringi(GLenum name, GLuint index)
    {
        return gl::GetStringi(name, index);
    }

    void GL_APIENTRY
    glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values)
    {
        return gl::GetSynciv(sync, pname, bufSize, length, values);
    }

    void GL_APIENTRY glGetTransformFeedbackVarying(GLuint program,
                                                   GLuint index,
                                                   GLsizei bufSize,
                                                   GLsizei *length,
                                                   GLsizei *size,
                                                   GLenum *type,
                                                   GLchar *name)
    {
        return gl::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
    }

    GLuint GL_APIENTRY glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName)
    {
        return gl::GetUniformBlockIndex(program, uniformBlockName);
    }

    void GL_APIENTRY glGetUniformIndices(GLuint program,
                                         GLsizei uniformCount,
                                         const GLchar *const *uniformNames,
                                         GLuint *uniformIndices)
    {
        return gl::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
    }

    void GL_APIENTRY glGetUniformuiv(GLuint program, GLint location, GLuint *params)
    {
        return gl::GetUniformuiv(program, location, params);
    }

    void GL_APIENTRY glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params)
    {
        return gl::GetVertexAttribIiv(index, pname, params);
    }

    void GL_APIENTRY glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params)
    {
        return gl::GetVertexAttribIuiv(index, pname, params);
    }

    void GL_APIENTRY glInvalidateFramebuffer(GLenum target,
                                             GLsizei numAttachments,
                                             const GLenum *attachments)
    {
        return gl::InvalidateFramebuffer(target, numAttachments, attachments);
    }

    void GL_APIENTRY glInvalidateSubFramebuffer(GLenum target,
                                                GLsizei numAttachments,
                                                const GLenum *attachments,
                                                GLint x,
                                                GLint y,
                                                GLsizei width,
                                                GLsizei height)
    {
        return gl::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
    }

    GLboolean GL_APIENTRY glIsQuery(GLuint id)
    {
        return gl::IsQuery(id);
    }

    GLboolean GL_APIENTRY glIsSampler(GLuint sampler)
    {
        return gl::IsSampler(sampler);
    }

    GLboolean GL_APIENTRY glIsSync(GLsync sync)
    {
        return gl::IsSync(sync);
    }

    GLboolean GL_APIENTRY glIsTransformFeedback(GLuint id)
    {
        return gl::IsTransformFeedback(id);
    }

    GLboolean GL_APIENTRY glIsVertexArray(GLuint array)
    {
        return gl::IsVertexArray(array);
    }

    void *GL_APIENTRY glMapBufferRange(GLenum target,
                                       GLintptr offset,
                                       GLsizeiptr length,
                                       GLbitfield access)
    {
        return gl::MapBufferRange(target, offset, length, access);
    }

    void GL_APIENTRY glPauseTransformFeedback()
    {
        return gl::PauseTransformFeedback();
    }

    void GL_APIENTRY glProgramBinary(GLuint program,
                                     GLenum binaryFormat,
                                     const void *binary,
                                     GLsizei length)
    {
        return gl::ProgramBinary(program, binaryFormat, binary, length);
    }

    void GL_APIENTRY glProgramParameteri(GLuint program, GLenum pname, GLint value)
    {
        return gl::ProgramParameteri(program, pname, value);
    }

    void GL_APIENTRY glReadBuffer(GLenum src)
    {
        return gl::ReadBuffer(src);
    }

    void GL_APIENTRY glRenderbufferStorageMultisample(GLenum target,
                                                      GLsizei samples,
                                                      GLenum internalformat,
                                                      GLsizei width,
                                                      GLsizei height)
    {
        return gl::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
    }

    void GL_APIENTRY glResumeTransformFeedback()
    {
        return gl::ResumeTransformFeedback();
    }

    void GL_APIENTRY glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
    {
        return gl::SamplerParameterf(sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param)
    {
        return gl::SamplerParameterfv(sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
    {
        return gl::SamplerParameteri(sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param)
    {
        return gl::SamplerParameteriv(sampler, pname, param);
    }

    void GL_APIENTRY glTexImage3D(GLenum target,
                                  GLint level,
                                  GLint internalformat,
                                  GLsizei width,
                                  GLsizei height,
                                  GLsizei depth,
                                  GLint border,
                                  GLenum format,
                                  GLenum type,
                                  const void *pixels)
    {
        return gl::TexImage3D(target, level, internalformat, width, height, depth, border, format, type,
                              pixels);
    }

    void GL_APIENTRY
    glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
    {
        return gl::TexStorage2D(target, levels, internalformat, width, height);
    }

    void GL_APIENTRY glTexStorage3D(GLenum target,
                                    GLsizei levels,
                                    GLenum internalformat,
                                    GLsizei width,
                                    GLsizei height,
                                    GLsizei depth)
    {
        return gl::TexStorage3D(target, levels, internalformat, width, height, depth);
    }

    void GL_APIENTRY glTexSubImage3D(GLenum target,
                                     GLint level,
                                     GLint xoffset,
                                     GLint yoffset,
                                     GLint zoffset,
                                     GLsizei width,
                                     GLsizei height,
                                     GLsizei depth,
                                     GLenum format,
                                     GLenum type,
                                     const void *pixels)
    {
        return gl::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format,
                                 type, pixels);
    }

    void GL_APIENTRY glTransformFeedbackVaryings(GLuint program,
                                                 GLsizei count,
                                                 const GLchar *const *varyings,
                                                 GLenum bufferMode)
    {
        return gl::TransformFeedbackVaryings(program, count, varyings, bufferMode);
    }

    void GL_APIENTRY glUniform1ui(GLint location, GLuint v0)
    {
        return gl::Uniform1ui(location, v0);
    }

    void GL_APIENTRY glUniform1uiv(GLint location, GLsizei count, const GLuint *value)
    {
        return gl::Uniform1uiv(location, count, value);
    }

    void GL_APIENTRY glUniform2ui(GLint location, GLuint v0, GLuint v1)
    {
        return gl::Uniform2ui(location, v0, v1);
    }

    void GL_APIENTRY glUniform2uiv(GLint location, GLsizei count, const GLuint *value)
    {
        return gl::Uniform2uiv(location, count, value);
    }

    void GL_APIENTRY glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
    {
        return gl::Uniform3ui(location, v0, v1, v2);
    }

    void GL_APIENTRY glUniform3uiv(GLint location, GLsizei count, const GLuint *value)
    {
        return gl::Uniform3uiv(location, count, value);
    }

    void GL_APIENTRY glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
    {
        return gl::Uniform4ui(location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glUniform4uiv(GLint location, GLsizei count, const GLuint *value)
    {
        return gl::Uniform4uiv(location, count, value);
    }

    void GL_APIENTRY glUniformBlockBinding(GLuint program,
                                           GLuint uniformBlockIndex,
                                           GLuint uniformBlockBinding)
    {
        return gl::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
    }

    void GL_APIENTRY glUniformMatrix2x3fv(GLint location,
                                          GLsizei count,
                                          GLboolean transpose,
                                          const GLfloat *value)
    {
        return gl::UniformMatrix2x3fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix2x4fv(GLint location,
                                          GLsizei count,
                                          GLboolean transpose,
                                          const GLfloat *value)
    {
        return gl::UniformMatrix2x4fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix3x2fv(GLint location,
                                          GLsizei count,
                                          GLboolean transpose,
                                          const GLfloat *value)
    {
        return gl::UniformMatrix3x2fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix3x4fv(GLint location,
                                          GLsizei count,
                                          GLboolean transpose,
                                          const GLfloat *value)
    {
        return gl::UniformMatrix3x4fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix4x2fv(GLint location,
                                          GLsizei count,
                                          GLboolean transpose,
                                          const GLfloat *value)
    {
        return gl::UniformMatrix4x2fv(location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix4x3fv(GLint location,
                                          GLsizei count,
                                          GLboolean transpose,
                                          const GLfloat *value)
    {
        return gl::UniformMatrix4x3fv(location, count, transpose, value);
    }

    GLboolean GL_APIENTRY glUnmapBuffer(GLenum target)
    {
        return gl::UnmapBuffer(target);
    }

    void GL_APIENTRY glVertexAttribDivisor(GLuint index, GLuint divisor)
    {
        return gl::VertexAttribDivisor(index, divisor);
    }

    void GL_APIENTRY glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
    {
        return gl::VertexAttribI4i(index, x, y, z, w);
    }

    void GL_APIENTRY glVertexAttribI4iv(GLuint index, const GLint *v)
    {
        return gl::VertexAttribI4iv(index, v);
    }

    void GL_APIENTRY glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
    {
        return gl::VertexAttribI4ui(index, x, y, z, w);
    }

    void GL_APIENTRY glVertexAttribI4uiv(GLuint index, const GLuint *v)
    {
        return gl::VertexAttribI4uiv(index, v);
    }

    void GL_APIENTRY
    glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::VertexAttribIPointer(index, size, type, stride, pointer);
    }

    void GL_APIENTRY glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
    {
        return gl::WaitSync(sync, flags, timeout);
    }

    // OpenGL ES 3.1
    void GL_APIENTRY glActiveShaderProgram(GLuint pipeline, GLuint program)
    {
        return gl::ActiveShaderProgram(pipeline, program);
    }

    void GL_APIENTRY glBindImageTexture(GLuint unit,
                                        GLuint texture,
                                        GLint level,
                                        GLboolean layered,
                                        GLint layer,
                                        GLenum access,
                                        GLenum format)
    {
        return gl::BindImageTexture(unit, texture, level, layered, layer, access, format);
    }

    void GL_APIENTRY glBindProgramPipeline(GLuint pipeline)
    {
        return gl::BindProgramPipeline(pipeline);
    }

    void GL_APIENTRY glBindVertexBuffer(GLuint bindingindex,
                                        GLuint buffer,
                                        GLintptr offset,
                                        GLsizei stride)
    {
        return gl::BindVertexBuffer(bindingindex, buffer, offset, stride);
    }

    GLuint GL_APIENTRY glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const *strings)
    {
        return gl::CreateShaderProgramv(type, count, strings);
    }

    void GL_APIENTRY glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines)
    {
        return gl::DeleteProgramPipelines(n, pipelines);
    }

    void GL_APIENTRY glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
    {
        return gl::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
    }

    void GL_APIENTRY glDispatchComputeIndirect(GLintptr indirect)
    {
        return gl::DispatchComputeIndirect(indirect);
    }

    void GL_APIENTRY glDrawArraysIndirect(GLenum mode, const void *indirect)
    {
        return gl::DrawArraysIndirect(mode, indirect);
    }

    void GL_APIENTRY glDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect)
    {
        return gl::DrawElementsIndirect(mode, type, indirect);
    }

    void GL_APIENTRY glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
    {
        return gl::FramebufferParameteri(target, pname, param);
    }

    void GL_APIENTRY glGenProgramPipelines(GLsizei n, GLuint *pipelines)
    {
        return gl::GenProgramPipelines(n, pipelines);
    }

    void GL_APIENTRY glGetBooleani_v(GLenum target, GLuint index, GLboolean *data)
    {
        return gl::GetBooleani_v(target, index, data);
    }

    void GL_APIENTRY glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetFramebufferParameteriv(target, pname, params);
    }

    void GL_APIENTRY glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val)
    {
        return gl::GetMultisamplefv(pname, index, val);
    }

    void GL_APIENTRY glGetProgramInterfaceiv(GLuint program,
                                             GLenum programInterface,
                                             GLenum pname,
                                             GLint *params)
    {
        return gl::GetProgramInterfaceiv(program, programInterface, pname, params);
    }

    void GL_APIENTRY glGetProgramPipelineInfoLog(GLuint pipeline,
                                                 GLsizei bufSize,
                                                 GLsizei *length,
                                                 GLchar *infoLog)
    {
        return gl::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
    }

    void GL_APIENTRY glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params)
    {
        return gl::GetProgramPipelineiv(pipeline, pname, params);
    }

    GLuint GL_APIENTRY glGetProgramResourceIndex(GLuint program,
                                                 GLenum programInterface,
                                                 const GLchar *name)
    {
        return gl::GetProgramResourceIndex(program, programInterface, name);
    }

    GLint GL_APIENTRY glGetProgramResourceLocation(GLuint program,
                                                   GLenum programInterface,
                                                   const GLchar *name)
    {
        return gl::GetProgramResourceLocation(program, programInterface, name);
    }

    void GL_APIENTRY glGetProgramResourceName(GLuint program,
                                              GLenum programInterface,
                                              GLuint index,
                                              GLsizei bufSize,
                                              GLsizei *length,
                                              GLchar *name)
    {
        return gl::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
    }

    void GL_APIENTRY glGetProgramResourceiv(GLuint program,
                                            GLenum programInterface,
                                            GLuint index,
                                            GLsizei propCount,
                                            const GLenum *props,
                                            GLsizei bufSize,
                                            GLsizei *length,
                                            GLint *params)
    {
        return gl::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize,
                                        length, params);
    }

    void GL_APIENTRY glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params)
    {
        return gl::GetTexLevelParameterfv(target, level, pname, params);
    }

    void GL_APIENTRY glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params)
    {
        return gl::GetTexLevelParameteriv(target, level, pname, params);
    }

    GLboolean GL_APIENTRY glIsProgramPipeline(GLuint pipeline)
    {
        return gl::IsProgramPipeline(pipeline);
    }

    void GL_APIENTRY glMemoryBarrier(GLbitfield barriers)
    {
        return gl::MemoryBarrier(barriers);
    }

    void GL_APIENTRY glMemoryBarrierByRegion(GLbitfield barriers)
    {
        return gl::MemoryBarrierByRegion(barriers);
    }

    void GL_APIENTRY glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
    {
        return gl::ProgramUniform1f(program, location, v0);
    }

    void GL_APIENTRY glProgramUniform1fv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLfloat *value)
    {
        return gl::ProgramUniform1fv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform1i(GLuint program, GLint location, GLint v0)
    {
        return gl::ProgramUniform1i(program, location, v0);
    }

    void GL_APIENTRY glProgramUniform1iv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLint *value)
    {
        return gl::ProgramUniform1iv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
    {
        return gl::ProgramUniform1ui(program, location, v0);
    }

    void GL_APIENTRY glProgramUniform1uiv(GLuint program,
                                          GLint location,
                                          GLsizei count,
                                          const GLuint *value)
    {
        return gl::ProgramUniform1uiv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
    {
        return gl::ProgramUniform2f(program, location, v0, v1);
    }

    void GL_APIENTRY glProgramUniform2fv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLfloat *value)
    {
        return gl::ProgramUniform2fv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
    {
        return gl::ProgramUniform2i(program, location, v0, v1);
    }

    void GL_APIENTRY glProgramUniform2iv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLint *value)
    {
        return gl::ProgramUniform2iv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
    {
        return gl::ProgramUniform2ui(program, location, v0, v1);
    }

    void GL_APIENTRY glProgramUniform2uiv(GLuint program,
                                          GLint location,
                                          GLsizei count,
                                          const GLuint *value)
    {
        return gl::ProgramUniform2uiv(program, location, count, value);
    }

    void GL_APIENTRY
    glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
    {
        return gl::ProgramUniform3f(program, location, v0, v1, v2);
    }

    void GL_APIENTRY glProgramUniform3fv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLfloat *value)
    {
        return gl::ProgramUniform3fv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
    {
        return gl::ProgramUniform3i(program, location, v0, v1, v2);
    }

    void GL_APIENTRY glProgramUniform3iv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLint *value)
    {
        return gl::ProgramUniform3iv(program, location, count, value);
    }

    void GL_APIENTRY
    glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
    {
        return gl::ProgramUniform3ui(program, location, v0, v1, v2);
    }

    void GL_APIENTRY glProgramUniform3uiv(GLuint program,
                                          GLint location,
                                          GLsizei count,
                                          const GLuint *value)
    {
        return gl::ProgramUniform3uiv(program, location, count, value);
    }

    void GL_APIENTRY
    glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
    {
        return gl::ProgramUniform4f(program, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glProgramUniform4fv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLfloat *value)
    {
        return gl::ProgramUniform4fv(program, location, count, value);
    }

    void GL_APIENTRY
    glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
    {
        return gl::ProgramUniform4i(program, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glProgramUniform4iv(GLuint program,
                                         GLint location,
                                         GLsizei count,
                                         const GLint *value)
    {
        return gl::ProgramUniform4iv(program, location, count, value);
    }

    void GL_APIENTRY
    glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
    {
        return gl::ProgramUniform4ui(program, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glProgramUniform4uiv(GLuint program,
                                          GLint location,
                                          GLsizei count,
                                          const GLuint *value)
    {
        return gl::ProgramUniform4uiv(program, location, count, value);
    }

    void GL_APIENTRY glProgramUniformMatrix2fv(GLuint program,
                                               GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value)
    {
        return gl::ProgramUniformMatrix2fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix2x3fv(GLuint program,
                                                 GLint location,
                                                 GLsizei count,
                                                 GLboolean transpose,
                                                 const GLfloat *value)
    {
        return gl::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix2x4fv(GLuint program,
                                                 GLint location,
                                                 GLsizei count,
                                                 GLboolean transpose,
                                                 const GLfloat *value)
    {
        return gl::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix3fv(GLuint program,
                                               GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value)
    {
        return gl::ProgramUniformMatrix3fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix3x2fv(GLuint program,
                                                 GLint location,
                                                 GLsizei count,
                                                 GLboolean transpose,
                                                 const GLfloat *value)
    {
        return gl::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix3x4fv(GLuint program,
                                                 GLint location,
                                                 GLsizei count,
                                                 GLboolean transpose,
                                                 const GLfloat *value)
    {
        return gl::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix4fv(GLuint program,
                                               GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value)
    {
        return gl::ProgramUniformMatrix4fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix4x2fv(GLuint program,
                                                 GLint location,
                                                 GLsizei count,
                                                 GLboolean transpose,
                                                 const GLfloat *value)
    {
        return gl::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix4x3fv(GLuint program,
                                                 GLint location,
                                                 GLsizei count,
                                                 GLboolean transpose,
                                                 const GLfloat *value)
    {
        return gl::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
    }

    void GL_APIENTRY glSampleMaski(GLuint maskNumber, GLbitfield mask)
    {
        return gl::SampleMaski(maskNumber, mask);
    }

    void GL_APIENTRY glTexStorage2DMultisample(GLenum target,
                                               GLsizei samples,
                                               GLenum internalformat,
                                               GLsizei width,
                                               GLsizei height,
                                               GLboolean fixedsamplelocations)
    {
        return gl::TexStorage2DMultisample(target, samples, internalformat, width, height,
                                           fixedsamplelocations);
    }

    void GL_APIENTRY glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
    {
        return gl::UseProgramStages(pipeline, stages, program);
    }

    void GL_APIENTRY glValidateProgramPipeline(GLuint pipeline)
    {
        return gl::ValidateProgramPipeline(pipeline);
    }

    void GL_APIENTRY glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
    {
        return gl::VertexAttribBinding(attribindex, bindingindex);
    }

    void GL_APIENTRY glVertexAttribFormat(GLuint attribindex,
                                          GLint size,
                                          GLenum type,
                                          GLboolean normalized,
                                          GLuint relativeoffset)
    {
        return gl::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
    }

    void GL_APIENTRY glVertexAttribIFormat(GLuint attribindex,
                                           GLint size,
                                           GLenum type,
                                           GLuint relativeoffset)
    {
        return gl::VertexAttribIFormat(attribindex, size, type, relativeoffset);
    }

    void GL_APIENTRY glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
    {
        return gl::VertexBindingDivisor(bindingindex, divisor);
    }

    // OpenGL ES 1.0
    void GL_APIENTRY glAlphaFunc(GLenum func, GLfloat ref)
    {
        return gl::AlphaFunc(func, ref);
    }

    void GL_APIENTRY glAlphaFuncx(GLenum func, GLfixed ref)
    {
        return gl::AlphaFuncx(func, ref);
    }

    void GL_APIENTRY glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
    {
        return gl::ClearColorx(red, green, blue, alpha);
    }

    void GL_APIENTRY glClearDepthx(GLfixed depth)
    {
        return gl::ClearDepthx(depth);
    }

    void GL_APIENTRY glClientActiveTexture(GLenum texture)
    {
        return gl::ClientActiveTexture(texture);
    }

    void GL_APIENTRY glClipPlanef(GLenum p, const GLfloat *eqn)
    {
        return gl::ClipPlanef(p, eqn);
    }

    void GL_APIENTRY glClipPlanex(GLenum plane, const GLfixed *equation)
    {
        return gl::ClipPlanex(plane, equation);
    }

    void GL_APIENTRY glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
    {
        return gl::Color4f(red, green, blue, alpha);
    }

    void GL_APIENTRY glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
    {
        return gl::Color4ub(red, green, blue, alpha);
    }

    void GL_APIENTRY glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
    {
        return gl::Color4x(red, green, blue, alpha);
    }

    void GL_APIENTRY glColorPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::ColorPointer(size, type, stride, pointer);
    }

    void GL_APIENTRY glDepthRangex(GLfixed n, GLfixed f)
    {
        return gl::DepthRangex(n, f);
    }

    void GL_APIENTRY glDisableClientState(GLenum array)
    {
        return gl::DisableClientState(array);
    }

    void GL_APIENTRY glEnableClientState(GLenum array)
    {
        return gl::EnableClientState(array);
    }

    void GL_APIENTRY glFogf(GLenum pname, GLfloat param)
    {
        return gl::Fogf(pname, param);
    }

    void GL_APIENTRY glFogfv(GLenum pname, const GLfloat *params)
    {
        return gl::Fogfv(pname, params);
    }

    void GL_APIENTRY glFogx(GLenum pname, GLfixed param)
    {
        return gl::Fogx(pname, param);
    }

    void GL_APIENTRY glFogxv(GLenum pname, const GLfixed *param)
    {
        return gl::Fogxv(pname, param);
    }

    void GL_APIENTRY glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
    {
        return gl::Frustumf(l, r, b, t, n, f);
    }

    void GL_APIENTRY glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
    {
        return gl::Frustumx(l, r, b, t, n, f);
    }

    void GL_APIENTRY glGetClipPlanef(GLenum plane, GLfloat *equation)
    {
        return gl::GetClipPlanef(plane, equation);
    }

    void GL_APIENTRY glGetClipPlanex(GLenum plane, GLfixed *equation)
    {
        return gl::GetClipPlanex(plane, equation);
    }

    void GL_APIENTRY glGetFixedv(GLenum pname, GLfixed *params)
    {
        return gl::GetFixedv(pname, params);
    }

    void GL_APIENTRY glGetLightfv(GLenum light, GLenum pname, GLfloat *params)
    {
        return gl::GetLightfv(light, pname, params);
    }

    void GL_APIENTRY glGetLightxv(GLenum light, GLenum pname, GLfixed *params)
    {
        return gl::GetLightxv(light, pname, params);
    }

    void GL_APIENTRY glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
    {
        return gl::GetMaterialfv(face, pname, params);
    }

    void GL_APIENTRY glGetMaterialxv(GLenum face, GLenum pname, GLfixed *params)
    {
        return gl::GetMaterialxv(face, pname, params);
    }

    void GL_APIENTRY glGetPointerv(GLenum pname, void **params)
    {
        return gl::GetPointerv(pname, params);
    }

    void GL_APIENTRY glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params)
    {
        return gl::GetTexEnvfv(target, pname, params);
    }

    void GL_APIENTRY glGetTexEnviv(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetTexEnviv(target, pname, params);
    }

    void GL_APIENTRY glGetTexEnvxv(GLenum target, GLenum pname, GLfixed *params)
    {
        return gl::GetTexEnvxv(target, pname, params);
    }

    void GL_APIENTRY glGetTexParameterxv(GLenum target, GLenum pname, GLfixed *params)
    {
        return gl::GetTexParameterxv(target, pname, params);
    }

    void GL_APIENTRY glLightModelf(GLenum pname, GLfloat param)
    {
        return gl::LightModelf(pname, param);
    }

    void GL_APIENTRY glLightModelfv(GLenum pname, const GLfloat *params)
    {
        return gl::LightModelfv(pname, params);
    }

    void GL_APIENTRY glLightModelx(GLenum pname, GLfixed param)
    {
        return gl::LightModelx(pname, param);
    }

    void GL_APIENTRY glLightModelxv(GLenum pname, const GLfixed *param)
    {
        return gl::LightModelxv(pname, param);
    }

    void GL_APIENTRY glLightf(GLenum light, GLenum pname, GLfloat param)
    {
        return gl::Lightf(light, pname, param);
    }

    void GL_APIENTRY glLightfv(GLenum light, GLenum pname, const GLfloat *params)
    {
        return gl::Lightfv(light, pname, params);
    }

    void GL_APIENTRY glLightx(GLenum light, GLenum pname, GLfixed param)
    {
        return gl::Lightx(light, pname, param);
    }

    void GL_APIENTRY glLightxv(GLenum light, GLenum pname, const GLfixed *params)
    {
        return gl::Lightxv(light, pname, params);
    }

    void GL_APIENTRY glLineWidthx(GLfixed width)
    {
        return gl::LineWidthx(width);
    }

    void GL_APIENTRY glLoadIdentity()
    {
        return gl::LoadIdentity();
    }

    void GL_APIENTRY glLoadMatrixf(const GLfloat *m)
    {
        return gl::LoadMatrixf(m);
    }

    void GL_APIENTRY glLoadMatrixx(const GLfixed *m)
    {
        return gl::LoadMatrixx(m);
    }

    void GL_APIENTRY glLogicOp(GLenum opcode)
    {
        return gl::LogicOp(opcode);
    }

    void GL_APIENTRY glMaterialf(GLenum face, GLenum pname, GLfloat param)
    {
        return gl::Materialf(face, pname, param);
    }

    void GL_APIENTRY glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)
    {
        return gl::Materialfv(face, pname, params);
    }

    void GL_APIENTRY glMaterialx(GLenum face, GLenum pname, GLfixed param)
    {
        return gl::Materialx(face, pname, param);
    }

    void GL_APIENTRY glMaterialxv(GLenum face, GLenum pname, const GLfixed *param)
    {
        return gl::Materialxv(face, pname, param);
    }

    void GL_APIENTRY glMatrixMode(GLenum mode)
    {
        return gl::MatrixMode(mode);
    }

    void GL_APIENTRY glMultMatrixf(const GLfloat *m)
    {
        return gl::MultMatrixf(m);
    }

    void GL_APIENTRY glMultMatrixx(const GLfixed *m)
    {
        return gl::MultMatrixx(m);
    }

    void GL_APIENTRY glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
    {
        return gl::MultiTexCoord4f(target, s, t, r, q);
    }

    void GL_APIENTRY glMultiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
    {
        return gl::MultiTexCoord4x(texture, s, t, r, q);
    }

    void GL_APIENTRY glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
    {
        return gl::Normal3f(nx, ny, nz);
    }

    void GL_APIENTRY glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
    {
        return gl::Normal3x(nx, ny, nz);
    }

    void GL_APIENTRY glNormalPointer(GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::NormalPointer(type, stride, pointer);
    }

    void GL_APIENTRY glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
    {
        return gl::Orthof(l, r, b, t, n, f);
    }

    void GL_APIENTRY glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
    {
        return gl::Orthox(l, r, b, t, n, f);
    }

    void GL_APIENTRY glPointParameterf(GLenum pname, GLfloat param)
    {
        return gl::PointParameterf(pname, param);
    }

    void GL_APIENTRY glPointParameterfv(GLenum pname, const GLfloat *params)
    {
        return gl::PointParameterfv(pname, params);
    }

    void GL_APIENTRY glPointParameterx(GLenum pname, GLfixed param)
    {
        return gl::PointParameterx(pname, param);
    }

    void GL_APIENTRY glPointParameterxv(GLenum pname, const GLfixed *params)
    {
        return gl::PointParameterxv(pname, params);
    }

    void GL_APIENTRY glPointSize(GLfloat size)
    {
        return gl::PointSize(size);
    }

    void GL_APIENTRY glPointSizex(GLfixed size)
    {
        return gl::PointSizex(size);
    }

    void GL_APIENTRY glPolygonOffsetx(GLfixed factor, GLfixed units)
    {
        return gl::PolygonOffsetx(factor, units);
    }

    void GL_APIENTRY glPopMatrix()
    {
        return gl::PopMatrix();
    }

    void GL_APIENTRY glPushMatrix()
    {
        return gl::PushMatrix();
    }

    void GL_APIENTRY glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::Rotatef(angle, x, y, z);
    }

    void GL_APIENTRY glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
    {
        return gl::Rotatex(angle, x, y, z);
    }

    void GL_APIENTRY glSampleCoveragex(GLclampx value, GLboolean invert)
    {
        return gl::SampleCoveragex(value, invert);
    }

    void GL_APIENTRY glScalef(GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::Scalef(x, y, z);
    }

    void GL_APIENTRY glScalex(GLfixed x, GLfixed y, GLfixed z)
    {
        return gl::Scalex(x, y, z);
    }

    void GL_APIENTRY glShadeModel(GLenum mode)
    {
        return gl::ShadeModel(mode);
    }

    void GL_APIENTRY glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::TexCoordPointer(size, type, stride, pointer);
    }

    void GL_APIENTRY glTexEnvf(GLenum target, GLenum pname, GLfloat param)
    {
        return gl::TexEnvf(target, pname, param);
    }

    void GL_APIENTRY glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params)
    {
        return gl::TexEnvfv(target, pname, params);
    }

    void GL_APIENTRY glTexEnvi(GLenum target, GLenum pname, GLint param)
    {
        return gl::TexEnvi(target, pname, param);
    }

    void GL_APIENTRY glTexEnviv(GLenum target, GLenum pname, const GLint *params)
    {
        return gl::TexEnviv(target, pname, params);
    }

    void GL_APIENTRY glTexEnvx(GLenum target, GLenum pname, GLfixed param)
    {
        return gl::TexEnvx(target, pname, param);
    }

    void GL_APIENTRY glTexEnvxv(GLenum target, GLenum pname, const GLfixed *params)
    {
        return gl::TexEnvxv(target, pname, params);
    }

    void GL_APIENTRY glTexParameterx(GLenum target, GLenum pname, GLfixed param)
    {
        return gl::TexParameterx(target, pname, param);
    }

    void GL_APIENTRY glTexParameterxv(GLenum target, GLenum pname, const GLfixed *params)
    {
        return gl::TexParameterxv(target, pname, params);
    }

    void GL_APIENTRY glTranslatef(GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::Translatef(x, y, z);
    }

    void GL_APIENTRY glTranslatex(GLfixed x, GLfixed y, GLfixed z)
    {
        return gl::Translatex(x, y, z);
    }

    void GL_APIENTRY glVertexPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::VertexPointer(size, type, stride, pointer);
    }

    // GL_ANGLE_base_vertex_base_instance
    void GL_APIENTRY glDrawArraysInstancedBaseInstanceANGLE(GLenum mode,
                                                            GLint first,
                                                            GLsizei count,
                                                            GLsizei instanceCount,
                                                            GLuint baseInstance)
    {
        return gl::DrawArraysInstancedBaseInstanceANGLE(mode, first, count, instanceCount,
                                                        baseInstance);
    }

    void GL_APIENTRY glDrawElementsInstancedBaseVertexBaseInstanceANGLE(GLenum mode,
                                                                        GLsizei count,
                                                                        GLenum type,
                                                                        const GLvoid *indices,
                                                                        GLsizei instanceCounts,
                                                                        GLint baseVertex,
                                                                        GLuint baseInstance)
    {
        return gl::DrawElementsInstancedBaseVertexBaseInstanceANGLE(
            mode, count, type, indices, instanceCounts, baseVertex, baseInstance);
    }

    void GL_APIENTRY glMultiDrawArraysInstancedBaseInstanceANGLE(GLenum mode,
                                                                 GLsizei drawcount,
                                                                 const GLsizei *counts,
                                                                 const GLsizei *instanceCounts,
                                                                 const GLint *firsts,
                                                                 const GLuint *baseInstances)
    {
        return gl::MultiDrawArraysInstancedBaseInstanceANGLE(mode, drawcount, counts, instanceCounts,
                                                             firsts, baseInstances);
    }

    void GL_APIENTRY
    glMultiDrawElementsInstancedBaseVertexBaseInstanceANGLE(GLenum mode,
                                                            GLenum type,
                                                            GLsizei drawcount,
                                                            const GLsizei *counts,
                                                            const GLsizei *instanceCounts,
                                                            const GLvoid *const *indices,
                                                            const GLint *baseVertices,
                                                            const GLuint *baseInstances)
    {
        return gl::MultiDrawElementsInstancedBaseVertexBaseInstanceANGLE(
            mode, type, drawcount, counts, instanceCounts, indices, baseVertices, baseInstances);
    }

    // GL_ANGLE_copy_texture_3d
    void GL_APIENTRY glCopyTexture3DANGLE(GLuint sourceId,
                                          GLint sourceLevel,
                                          GLenum destTarget,
                                          GLuint destId,
                                          GLint destLevel,
                                          GLint internalFormat,
                                          GLenum destType,
                                          GLboolean unpackFlipY,
                                          GLboolean unpackPremultiplyAlpha,
                                          GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopyTexture3DANGLE(sourceId, sourceLevel, destTarget, destId, destLevel,
                                      internalFormat, destType, unpackFlipY, unpackPremultiplyAlpha,
                                      unpackUnmultiplyAlpha);
    }

    void GL_APIENTRY glCopySubTexture3DANGLE(GLuint sourceId,
                                             GLint sourceLevel,
                                             GLenum destTarget,
                                             GLuint destId,
                                             GLint destLevel,
                                             GLint xoffset,
                                             GLint yoffset,
                                             GLint zoffset,
                                             GLint x,
                                             GLint y,
                                             GLint z,
                                             GLint width,
                                             GLint height,
                                             GLint depth,
                                             GLboolean unpackFlipY,
                                             GLboolean unpackPremultiplyAlpha,
                                             GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopySubTexture3DANGLE(sourceId, sourceLevel, destTarget, destId, destLevel, xoffset,
                                         yoffset, zoffset, x, y, z, width, height, depth, unpackFlipY,
                                         unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
    }

    // GL_ANGLE_framebuffer_blit
    void GL_APIENTRY glBlitFramebufferANGLE(GLint srcX0,
                                            GLint srcY0,
                                            GLint srcX1,
                                            GLint srcY1,
                                            GLint dstX0,
                                            GLint dstY0,
                                            GLint dstX1,
                                            GLint dstY1,
                                            GLbitfield mask,
                                            GLenum filter)
    {
        return gl::BlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask,
                                        filter);
    }

    // GL_ANGLE_framebuffer_multisample
    void GL_APIENTRY glRenderbufferStorageMultisampleANGLE(GLenum target,
                                                           GLsizei samples,
                                                           GLenum internalformat,
                                                           GLsizei width,
                                                           GLsizei height)
    {
        return gl::RenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
    }

    // GL_ANGLE_instanced_arrays
    void GL_APIENTRY glDrawArraysInstancedANGLE(GLenum mode,
                                                GLint first,
                                                GLsizei count,
                                                GLsizei primcount)
    {
        return gl::DrawArraysInstancedANGLE(mode, first, count, primcount);
    }

    void GL_APIENTRY glDrawElementsInstancedANGLE(GLenum mode,
                                                  GLsizei count,
                                                  GLenum type,
                                                  const void *indices,
                                                  GLsizei primcount)
    {
        return gl::DrawElementsInstancedANGLE(mode, count, type, indices, primcount);
    }

    void GL_APIENTRY glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
    {
        return gl::VertexAttribDivisorANGLE(index, divisor);
    }

    // GL_ANGLE_multi_draw
    void GL_APIENTRY glMultiDrawArraysANGLE(GLenum mode,
                                            const GLint *firsts,
                                            const GLsizei *counts,
                                            GLsizei drawcount)
    {
        return gl::MultiDrawArraysANGLE(mode, firsts, counts, drawcount);
    }

    void GL_APIENTRY glMultiDrawArraysInstancedANGLE(GLenum mode,
                                                     const GLint *firsts,
                                                     const GLsizei *counts,
                                                     const GLsizei *instanceCounts,
                                                     GLsizei drawcount)
    {
        return gl::MultiDrawArraysInstancedANGLE(mode, firsts, counts, instanceCounts, drawcount);
    }

    void GL_APIENTRY glMultiDrawElementsANGLE(GLenum mode,
                                              const GLsizei *counts,
                                              GLenum type,
                                              const GLvoid *const *indices,
                                              GLsizei drawcount)
    {
        return gl::MultiDrawElementsANGLE(mode, counts, type, indices, drawcount);
    }

    void GL_APIENTRY glMultiDrawElementsInstancedANGLE(GLenum mode,
                                                       const GLsizei *counts,
                                                       GLenum type,
                                                       const GLvoid *const *indices,
                                                       const GLsizei *instanceCounts,
                                                       GLsizei drawcount)
    {
        return gl::MultiDrawElementsInstancedANGLE(mode, counts, type, indices, instanceCounts,
                                                   drawcount);
    }

    // GL_ANGLE_program_binary

    // GL_ANGLE_provoking_vertex
    void GL_APIENTRY glProvokingVertexANGLE(GLenum mode)
    {
        return gl::ProvokingVertexANGLE(mode);
    }

    // GL_ANGLE_request_extension
    void GL_APIENTRY glRequestExtensionANGLE(const GLchar *name)
    {
        return gl::RequestExtensionANGLE(name);
    }

    // GL_ANGLE_robust_client_memory
    void GL_APIENTRY glGetBooleanvRobustANGLE(GLenum pname,
                                              GLsizei bufSize,
                                              GLsizei *length,
                                              GLboolean *params)
    {
        return gl::GetBooleanvRobustANGLE(pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetBufferParameterivRobustANGLE(GLenum target,
                                                       GLenum pname,
                                                       GLsizei bufSize,
                                                       GLsizei *length,
                                                       GLint *params)
    {
        return gl::GetBufferParameterivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetFloatvRobustANGLE(GLenum pname,
                                            GLsizei bufSize,
                                            GLsizei *length,
                                            GLfloat *params)
    {
        return gl::GetFloatvRobustANGLE(pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetFramebufferAttachmentParameterivRobustANGLE(GLenum target,
                                                                      GLenum attachment,
                                                                      GLenum pname,
                                                                      GLsizei bufSize,
                                                                      GLsizei *length,
                                                                      GLint *params)
    {
        return gl::GetFramebufferAttachmentParameterivRobustANGLE(target, attachment, pname, bufSize,
                                                                  length, params);
    }

    void GL_APIENTRY glGetIntegervRobustANGLE(GLenum pname,
                                              GLsizei bufSize,
                                              GLsizei *length,
                                              GLint *data)
    {
        return gl::GetIntegervRobustANGLE(pname, bufSize, length, data);
    }

    void GL_APIENTRY glGetProgramivRobustANGLE(GLuint program,
                                               GLenum pname,
                                               GLsizei bufSize,
                                               GLsizei *length,
                                               GLint *params)
    {
        return gl::GetProgramivRobustANGLE(program, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetRenderbufferParameterivRobustANGLE(GLenum target,
                                                             GLenum pname,
                                                             GLsizei bufSize,
                                                             GLsizei *length,
                                                             GLint *params)
    {
        return gl::GetRenderbufferParameterivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetShaderivRobustANGLE(GLuint shader,
                                              GLenum pname,
                                              GLsizei bufSize,
                                              GLsizei *length,
                                              GLint *params)
    {
        return gl::GetShaderivRobustANGLE(shader, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetTexParameterfvRobustANGLE(GLenum target,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLfloat *params)
    {
        return gl::GetTexParameterfvRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetTexParameterivRobustANGLE(GLenum target,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLint *params)
    {
        return gl::GetTexParameterivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetUniformfvRobustANGLE(GLuint program,
                                               GLint location,
                                               GLsizei bufSize,
                                               GLsizei *length,
                                               GLfloat *params)
    {
        return gl::GetUniformfvRobustANGLE(program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetUniformivRobustANGLE(GLuint program,
                                               GLint location,
                                               GLsizei bufSize,
                                               GLsizei *length,
                                               GLint *params)
    {
        return gl::GetUniformivRobustANGLE(program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribfvRobustANGLE(GLuint index,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLfloat *params)
    {
        return gl::GetVertexAttribfvRobustANGLE(index, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribivRobustANGLE(GLuint index,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLint *params)
    {
        return gl::GetVertexAttribivRobustANGLE(index, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribPointervRobustANGLE(GLuint index,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          void **pointer)
    {
        return gl::GetVertexAttribPointervRobustANGLE(index, pname, bufSize, length, pointer);
    }

    void GL_APIENTRY glReadPixelsRobustANGLE(GLint x,
                                             GLint y,
                                             GLsizei width,
                                             GLsizei height,
                                             GLenum format,
                                             GLenum type,
                                             GLsizei bufSize,
                                             GLsizei *length,
                                             GLsizei *columns,
                                             GLsizei *rows,
                                             void *pixels)
    {
        return gl::ReadPixelsRobustANGLE(x, y, width, height, format, type, bufSize, length, columns,
                                         rows, pixels);
    }

    void GL_APIENTRY glTexImage2DRobustANGLE(GLenum target,
                                             GLint level,
                                             GLint internalformat,
                                             GLsizei width,
                                             GLsizei height,
                                             GLint border,
                                             GLenum format,
                                             GLenum type,
                                             GLsizei bufSize,
                                             const void *pixels)
    {
        return gl::TexImage2DRobustANGLE(target, level, internalformat, width, height, border, format,
                                         type, bufSize, pixels);
    }

    void GL_APIENTRY glTexParameterfvRobustANGLE(GLenum target,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 const GLfloat *params)
    {
        return gl::TexParameterfvRobustANGLE(target, pname, bufSize, params);
    }

    void GL_APIENTRY glTexParameterivRobustANGLE(GLenum target,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 const GLint *params)
    {
        return gl::TexParameterivRobustANGLE(target, pname, bufSize, params);
    }

    void GL_APIENTRY glTexSubImage2DRobustANGLE(GLenum target,
                                                GLint level,
                                                GLint xoffset,
                                                GLint yoffset,
                                                GLsizei width,
                                                GLsizei height,
                                                GLenum format,
                                                GLenum type,
                                                GLsizei bufSize,
                                                const void *pixels)
    {
        return gl::TexSubImage2DRobustANGLE(target, level, xoffset, yoffset, width, height, format,
                                            type, bufSize, pixels);
    }

    void GL_APIENTRY glTexImage3DRobustANGLE(GLenum target,
                                             GLint level,
                                             GLint internalformat,
                                             GLsizei width,
                                             GLsizei height,
                                             GLsizei depth,
                                             GLint border,
                                             GLenum format,
                                             GLenum type,
                                             GLsizei bufSize,
                                             const void *pixels)
    {
        return gl::TexImage3DRobustANGLE(target, level, internalformat, width, height, depth, border,
                                         format, type, bufSize, pixels);
    }

    void GL_APIENTRY glTexSubImage3DRobustANGLE(GLenum target,
                                                GLint level,
                                                GLint xoffset,
                                                GLint yoffset,
                                                GLint zoffset,
                                                GLsizei width,
                                                GLsizei height,
                                                GLsizei depth,
                                                GLenum format,
                                                GLenum type,
                                                GLsizei bufSize,
                                                const void *pixels)
    {
        return gl::TexSubImage3DRobustANGLE(target, level, xoffset, yoffset, zoffset, width, height,
                                            depth, format, type, bufSize, pixels);
    }

    void GL_APIENTRY glCompressedTexImage2DRobustANGLE(GLenum target,
                                                       GLint level,
                                                       GLenum internalformat,
                                                       GLsizei width,
                                                       GLsizei height,
                                                       GLint border,
                                                       GLsizei imageSize,
                                                       GLsizei dataSize,
                                                       const GLvoid *data)
    {
        return gl::CompressedTexImage2DRobustANGLE(target, level, internalformat, width, height, border,
                                                   imageSize, dataSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage2DRobustANGLE(GLenum target,
                                                          GLint level,
                                                          GLsizei xoffset,
                                                          GLsizei yoffset,
                                                          GLsizei width,
                                                          GLsizei height,
                                                          GLenum format,
                                                          GLsizei imageSize,
                                                          GLsizei dataSize,
                                                          const GLvoid *data)
    {
        return gl::CompressedTexSubImage2DRobustANGLE(target, level, xoffset, yoffset, width, height,
                                                      format, imageSize, dataSize, data);
    }

    void GL_APIENTRY glCompressedTexImage3DRobustANGLE(GLenum target,
                                                       GLint level,
                                                       GLenum internalformat,
                                                       GLsizei width,
                                                       GLsizei height,
                                                       GLsizei depth,
                                                       GLint border,
                                                       GLsizei imageSize,
                                                       GLsizei dataSize,
                                                       const GLvoid *data)
    {
        return gl::CompressedTexImage3DRobustANGLE(target, level, internalformat, width, height, depth,
                                                   border, imageSize, dataSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage3DRobustANGLE(GLenum target,
                                                          GLint level,
                                                          GLint xoffset,
                                                          GLint yoffset,
                                                          GLint zoffset,
                                                          GLsizei width,
                                                          GLsizei height,
                                                          GLsizei depth,
                                                          GLenum format,
                                                          GLsizei imageSize,
                                                          GLsizei dataSize,
                                                          const GLvoid *data)
    {
        return gl::CompressedTexSubImage3DRobustANGLE(target, level, xoffset, yoffset, zoffset, width,
                                                      height, depth, format, imageSize, dataSize, data);
    }

    void GL_APIENTRY glGetQueryivRobustANGLE(GLenum target,
                                             GLenum pname,
                                             GLsizei bufSize,
                                             GLsizei *length,
                                             GLint *params)
    {
        return gl::GetQueryivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjectuivRobustANGLE(GLuint id,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLuint *params)
    {
        return gl::GetQueryObjectuivRobustANGLE(id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetBufferPointervRobustANGLE(GLenum target,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    void **params)
    {
        return gl::GetBufferPointervRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetIntegeri_vRobustANGLE(GLenum target,
                                                GLuint index,
                                                GLsizei bufSize,
                                                GLsizei *length,
                                                GLint *data)
    {
        return gl::GetIntegeri_vRobustANGLE(target, index, bufSize, length, data);
    }

    void GL_APIENTRY glGetInternalformativRobustANGLE(GLenum target,
                                                      GLenum internalformat,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei *length,
                                                      GLint *params)
    {
        return gl::GetInternalformativRobustANGLE(target, internalformat, pname, bufSize, length,
                                                  params);
    }

    void GL_APIENTRY glGetVertexAttribIivRobustANGLE(GLuint index,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     GLsizei *length,
                                                     GLint *params)
    {
        return gl::GetVertexAttribIivRobustANGLE(index, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribIuivRobustANGLE(GLuint index,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei *length,
                                                      GLuint *params)
    {
        return gl::GetVertexAttribIuivRobustANGLE(index, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetUniformuivRobustANGLE(GLuint program,
                                                GLint location,
                                                GLsizei bufSize,
                                                GLsizei *length,
                                                GLuint *params)
    {
        return gl::GetUniformuivRobustANGLE(program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetActiveUniformBlockivRobustANGLE(GLuint program,
                                                          GLuint uniformBlockIndex,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLint *params)
    {
        return gl::GetActiveUniformBlockivRobustANGLE(program, uniformBlockIndex, pname, bufSize,
                                                      length, params);
    }

    void GL_APIENTRY glGetInteger64vRobustANGLE(GLenum pname,
                                                GLsizei bufSize,
                                                GLsizei *length,
                                                GLint64 *data)
    {
        return gl::GetInteger64vRobustANGLE(pname, bufSize, length, data);
    }

    void GL_APIENTRY glGetInteger64i_vRobustANGLE(GLenum target,
                                                  GLuint index,
                                                  GLsizei bufSize,
                                                  GLsizei *length,
                                                  GLint64 *data)
    {
        return gl::GetInteger64i_vRobustANGLE(target, index, bufSize, length, data);
    }

    void GL_APIENTRY glGetBufferParameteri64vRobustANGLE(GLenum target,
                                                         GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLint64 *params)
    {
        return gl::GetBufferParameteri64vRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glSamplerParameterivRobustANGLE(GLuint sampler,
                                                     GLuint pname,
                                                     GLsizei bufSize,
                                                     const GLint *param)
    {
        return gl::SamplerParameterivRobustANGLE(sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glSamplerParameterfvRobustANGLE(GLuint sampler,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     const GLfloat *param)
    {
        return gl::SamplerParameterfvRobustANGLE(sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glGetSamplerParameterivRobustANGLE(GLuint sampler,
                                                        GLenum pname,
                                                        GLsizei bufSize,
                                                        GLsizei *length,
                                                        GLint *params)
    {
        return gl::GetSamplerParameterivRobustANGLE(sampler, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetSamplerParameterfvRobustANGLE(GLuint sampler,
                                                        GLenum pname,
                                                        GLsizei bufSize,
                                                        GLsizei *length,
                                                        GLfloat *params)
    {
        return gl::GetSamplerParameterfvRobustANGLE(sampler, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetFramebufferParameterivRobustANGLE(GLenum target,
                                                            GLenum pname,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLint *params)
    {
        return gl::GetFramebufferParameterivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetProgramInterfaceivRobustANGLE(GLuint program,
                                                        GLenum programInterface,
                                                        GLenum pname,
                                                        GLsizei bufSize,
                                                        GLsizei *length,
                                                        GLint *params)
    {
        return gl::GetProgramInterfaceivRobustANGLE(program, programInterface, pname, bufSize, length,
                                                    params);
    }

    void GL_APIENTRY glGetBooleani_vRobustANGLE(GLenum target,
                                                GLuint index,
                                                GLsizei bufSize,
                                                GLsizei *length,
                                                GLboolean *data)
    {
        return gl::GetBooleani_vRobustANGLE(target, index, bufSize, length, data);
    }

    void GL_APIENTRY glGetMultisamplefvRobustANGLE(GLenum pname,
                                                   GLuint index,
                                                   GLsizei bufSize,
                                                   GLsizei *length,
                                                   GLfloat *val)
    {
        return gl::GetMultisamplefvRobustANGLE(pname, index, bufSize, length, val);
    }

    void GL_APIENTRY glGetTexLevelParameterivRobustANGLE(GLenum target,
                                                         GLint level,
                                                         GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLint *params)
    {
        return gl::GetTexLevelParameterivRobustANGLE(target, level, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetTexLevelParameterfvRobustANGLE(GLenum target,
                                                         GLint level,
                                                         GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLfloat *params)
    {
        return gl::GetTexLevelParameterfvRobustANGLE(target, level, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetPointervRobustANGLERobustANGLE(GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         void **params)
    {
        return gl::GetPointervRobustANGLERobustANGLE(pname, bufSize, length, params);
    }

    void GL_APIENTRY glReadnPixelsRobustANGLE(GLint x,
                                              GLint y,
                                              GLsizei width,
                                              GLsizei height,
                                              GLenum format,
                                              GLenum type,
                                              GLsizei bufSize,
                                              GLsizei *length,
                                              GLsizei *columns,
                                              GLsizei *rows,
                                              void *data)
    {
        return gl::ReadnPixelsRobustANGLE(x, y, width, height, format, type, bufSize, length, columns,
                                          rows, data);
    }

    void GL_APIENTRY glGetnUniformfvRobustANGLE(GLuint program,
                                                GLint location,
                                                GLsizei bufSize,
                                                GLsizei *length,
                                                GLfloat *params)
    {
        return gl::GetnUniformfvRobustANGLE(program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetnUniformivRobustANGLE(GLuint program,
                                                GLint location,
                                                GLsizei bufSize,
                                                GLsizei *length,
                                                GLint *params)
    {
        return gl::GetnUniformivRobustANGLE(program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetnUniformuivRobustANGLE(GLuint program,
                                                 GLint location,
                                                 GLsizei bufSize,
                                                 GLsizei *length,
                                                 GLuint *params)
    {
        return gl::GetnUniformuivRobustANGLE(program, location, bufSize, length, params);
    }

    void GL_APIENTRY glTexParameterIivRobustANGLE(GLenum target,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  const GLint *params)
    {
        return gl::TexParameterIivRobustANGLE(target, pname, bufSize, params);
    }

    void GL_APIENTRY glTexParameterIuivRobustANGLE(GLenum target,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   const GLuint *params)
    {
        return gl::TexParameterIuivRobustANGLE(target, pname, bufSize, params);
    }

    void GL_APIENTRY glGetTexParameterIivRobustANGLE(GLenum target,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     GLsizei *length,
                                                     GLint *params)
    {
        return gl::GetTexParameterIivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetTexParameterIuivRobustANGLE(GLenum target,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei *length,
                                                      GLuint *params)
    {
        return gl::GetTexParameterIuivRobustANGLE(target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glSamplerParameterIivRobustANGLE(GLuint sampler,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      const GLint *param)
    {
        return gl::SamplerParameterIivRobustANGLE(sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glSamplerParameterIuivRobustANGLE(GLuint sampler,
                                                       GLenum pname,
                                                       GLsizei bufSize,
                                                       const GLuint *param)
    {
        return gl::SamplerParameterIuivRobustANGLE(sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glGetSamplerParameterIivRobustANGLE(GLuint sampler,
                                                         GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLint *params)
    {
        return gl::GetSamplerParameterIivRobustANGLE(sampler, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetSamplerParameterIuivRobustANGLE(GLuint sampler,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLuint *params)
    {
        return gl::GetSamplerParameterIuivRobustANGLE(sampler, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjectivRobustANGLE(GLuint id,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   GLsizei *length,
                                                   GLint *params)
    {
        return gl::GetQueryObjectivRobustANGLE(id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjecti64vRobustANGLE(GLuint id,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     GLsizei *length,
                                                     GLint64 *params)
    {
        return gl::GetQueryObjecti64vRobustANGLE(id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjectui64vRobustANGLE(GLuint id,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei *length,
                                                      GLuint64 *params)
    {
        return gl::GetQueryObjectui64vRobustANGLE(id, pname, bufSize, length, params);
    }

    // GL_ANGLE_texture_external_update
    void GL_APIENTRY glTexImage2DExternalANGLE(GLenum target,
                                               GLint level,
                                               GLint internalformat,
                                               GLsizei width,
                                               GLsizei height,
                                               GLint border,
                                               GLenum format,
                                               GLenum type)
    {
        return gl::TexImage2DExternalANGLE(target, level, internalformat, width, height, border, format,
                                           type);
    }

    void GL_APIENTRY glInvalidateTextureANGLE(GLenum target)
    {
        return gl::InvalidateTextureANGLE(target);
    }

    // GL_ANGLE_texture_multisample
    void GL_APIENTRY glTexStorage2DMultisampleANGLE(GLenum target,
                                                    GLsizei samples,
                                                    GLenum internalformat,
                                                    GLsizei width,
                                                    GLsizei height,
                                                    GLboolean fixedsamplelocations)
    {
        return gl::TexStorage2DMultisampleANGLE(target, samples, internalformat, width, height,
                                                fixedsamplelocations);
    }

    void GL_APIENTRY glGetTexLevelParameterivANGLE(GLenum target,
                                                   GLint level,
                                                   GLenum pname,
                                                   GLint *params)
    {
        return gl::GetTexLevelParameterivANGLE(target, level, pname, params);
    }

    void GL_APIENTRY glGetTexLevelParameterfvANGLE(GLenum target,
                                                   GLint level,
                                                   GLenum pname,
                                                   GLfloat *params)
    {
        return gl::GetTexLevelParameterfvANGLE(target, level, pname, params);
    }

    void GL_APIENTRY glGetMultisamplefvANGLE(GLenum pname, GLuint index, GLfloat *val)
    {
        return gl::GetMultisamplefvANGLE(pname, index, val);
    }

    void GL_APIENTRY glSampleMaskiANGLE(GLuint maskNumber, GLbitfield mask)
    {
        return gl::SampleMaskiANGLE(maskNumber, mask);
    }

    // GL_ANGLE_translated_shader_source
    void GL_APIENTRY glGetTranslatedShaderSourceANGLE(GLuint shader,
                                                      GLsizei bufsize,
                                                      GLsizei *length,
                                                      GLchar *source)
    {
        return gl::GetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
    }

    // GL_CHROMIUM_bind_uniform_location
    void GL_APIENTRY glBindUniformLocationCHROMIUM(GLuint program, GLint location, const GLchar *name)
    {
        return gl::BindUniformLocationCHROMIUM(program, location, name);
    }

    // GL_CHROMIUM_copy_compressed_texture
    void GL_APIENTRY glCompressedCopyTextureCHROMIUM(GLuint sourceId, GLuint destId)
    {
        return gl::CompressedCopyTextureCHROMIUM(sourceId, destId);
    }

    // GL_CHROMIUM_copy_texture
    void GL_APIENTRY glCopyTextureCHROMIUM(GLuint sourceId,
                                           GLint sourceLevel,
                                           GLenum destTarget,
                                           GLuint destId,
                                           GLint destLevel,
                                           GLint internalFormat,
                                           GLenum destType,
                                           GLboolean unpackFlipY,
                                           GLboolean unpackPremultiplyAlpha,
                                           GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopyTextureCHROMIUM(sourceId, sourceLevel, destTarget, destId, destLevel,
                                       internalFormat, destType, unpackFlipY, unpackPremultiplyAlpha,
                                       unpackUnmultiplyAlpha);
    }

    void GL_APIENTRY glCopySubTextureCHROMIUM(GLuint sourceId,
                                              GLint sourceLevel,
                                              GLenum destTarget,
                                              GLuint destId,
                                              GLint destLevel,
                                              GLint xoffset,
                                              GLint yoffset,
                                              GLint x,
                                              GLint y,
                                              GLint width,
                                              GLint height,
                                              GLboolean unpackFlipY,
                                              GLboolean unpackPremultiplyAlpha,
                                              GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopySubTextureCHROMIUM(sourceId, sourceLevel, destTarget, destId, destLevel, xoffset,
                                          yoffset, x, y, width, height, unpackFlipY,
                                          unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
    }

    // GL_CHROMIUM_framebuffer_mixed_samples
    void GL_APIENTRY glCoverageModulationCHROMIUM(GLenum components)
    {
        return gl::CoverageModulationCHROMIUM(components);
    }

    void GL_APIENTRY glMatrixLoadfCHROMIUM(GLenum matrixMode, const GLfloat *matrix)
    {
        return gl::MatrixLoadfCHROMIUM(matrixMode, matrix);
    }

    void GL_APIENTRY glMatrixLoadIdentityCHROMIUM(GLenum matrixMode)
    {
        return gl::MatrixLoadIdentityCHROMIUM(matrixMode);
    }

    // GL_CHROMIUM_lose_context
    void GL_APIENTRY glLoseContextCHROMIUM(GLenum current, GLenum other)
    {
        return gl::LoseContextCHROMIUM(current, other);
    }

    // GL_CHROMIUM_path_rendering
    GLuint GL_APIENTRY glGenPathsCHROMIUM(GLsizei range)
    {
        return gl::GenPathsCHROMIUM(range);
    }

    void GL_APIENTRY glDeletePathsCHROMIUM(GLuint first, GLsizei range)
    {
        return gl::DeletePathsCHROMIUM(first, range);
    }

    GLboolean GL_APIENTRY glIsPathCHROMIUM(GLuint path)
    {
        return gl::IsPathCHROMIUM(path);
    }

    void GL_APIENTRY glPathCommandsCHROMIUM(GLuint path,
                                            GLsizei numCommands,
                                            const GLubyte *commands,
                                            GLsizei numCoords,
                                            GLenum coordType,
                                            const void *coords)
    {
        return gl::PathCommandsCHROMIUM(path, numCommands, commands, numCoords, coordType, coords);
    }

    void GL_APIENTRY glPathParameterfCHROMIUM(GLuint path, GLenum pname, GLfloat value)
    {
        return gl::PathParameterfCHROMIUM(path, pname, value);
    }

    void GL_APIENTRY glPathParameteriCHROMIUM(GLuint path, GLenum pname, GLint value)
    {
        return gl::PathParameteriCHROMIUM(path, pname, value);
    }

    void GL_APIENTRY glGetPathParameterfvCHROMIUM(GLuint path, GLenum pname, GLfloat *value)
    {
        return gl::GetPathParameterfvCHROMIUM(path, pname, value);
    }

    void GL_APIENTRY glGetPathParameterivCHROMIUM(GLuint path, GLenum pname, GLint *value)
    {
        return gl::GetPathParameterivCHROMIUM(path, pname, value);
    }

    void GL_APIENTRY glPathStencilFuncCHROMIUM(GLenum func, GLint ref, GLuint mask)
    {
        return gl::PathStencilFuncCHROMIUM(func, ref, mask);
    }

    void GL_APIENTRY glStencilFillPathCHROMIUM(GLuint path, GLenum fillMode, GLuint mask)
    {
        return gl::StencilFillPathCHROMIUM(path, fillMode, mask);
    }

    void GL_APIENTRY glStencilStrokePathCHROMIUM(GLuint path, GLint reference, GLuint mask)
    {
        return gl::StencilStrokePathCHROMIUM(path, reference, mask);
    }

    void GL_APIENTRY glCoverFillPathCHROMIUM(GLuint path, GLenum coverMode)
    {
        return gl::CoverFillPathCHROMIUM(path, coverMode);
    }

    void GL_APIENTRY glCoverStrokePathCHROMIUM(GLuint path, GLenum coverMode)
    {
        return gl::CoverStrokePathCHROMIUM(path, coverMode);
    }

    void GL_APIENTRY glStencilThenCoverFillPathCHROMIUM(GLuint path,
                                                        GLenum fillMode,
                                                        GLuint mask,
                                                        GLenum coverMode)
    {
        return gl::StencilThenCoverFillPathCHROMIUM(path, fillMode, mask, coverMode);
    }

    void GL_APIENTRY glStencilThenCoverStrokePathCHROMIUM(GLuint path,
                                                          GLint reference,
                                                          GLuint mask,
                                                          GLenum coverMode)
    {
        return gl::StencilThenCoverStrokePathCHROMIUM(path, reference, mask, coverMode);
    }

    void GL_APIENTRY glCoverFillPathInstancedCHROMIUM(GLsizei numPath,
                                                      GLenum pathNameType,
                                                      const void *paths,
                                                      GLuint pathBase,
                                                      GLenum coverMode,
                                                      GLenum transformType,
                                                      const GLfloat *transformValues)
    {
        return gl::CoverFillPathInstancedCHROMIUM(numPath, pathNameType, paths, pathBase, coverMode,
                                                  transformType, transformValues);
    }

    void GL_APIENTRY glCoverStrokePathInstancedCHROMIUM(GLsizei numPath,
                                                        GLenum pathNameType,
                                                        const void *paths,
                                                        GLuint pathBase,
                                                        GLenum coverMode,
                                                        GLenum transformType,
                                                        const GLfloat *transformValues)
    {
        return gl::CoverStrokePathInstancedCHROMIUM(numPath, pathNameType, paths, pathBase, coverMode,
                                                    transformType, transformValues);
    }

    void GL_APIENTRY glStencilStrokePathInstancedCHROMIUM(GLsizei numPath,
                                                          GLenum pathNameType,
                                                          const void *paths,
                                                          GLuint pathBase,
                                                          GLint reference,
                                                          GLuint mask,
                                                          GLenum transformType,
                                                          const GLfloat *transformValues)
    {
        return gl::StencilStrokePathInstancedCHROMIUM(numPath, pathNameType, paths, pathBase, reference,
                                                      mask, transformType, transformValues);
    }

    void GL_APIENTRY glStencilFillPathInstancedCHROMIUM(GLsizei numPaths,
                                                        GLenum pathNameType,
                                                        const void *paths,
                                                        GLuint pathBase,
                                                        GLenum fillMode,
                                                        GLuint mask,
                                                        GLenum transformType,
                                                        const GLfloat *transformValues)
    {
        return gl::StencilFillPathInstancedCHROMIUM(numPaths, pathNameType, paths, pathBase, fillMode,
                                                    mask, transformType, transformValues);
    }

    void GL_APIENTRY glStencilThenCoverFillPathInstancedCHROMIUM(GLsizei numPaths,
                                                                 GLenum pathNameType,
                                                                 const void *paths,
                                                                 GLuint pathBase,
                                                                 GLenum fillMode,
                                                                 GLuint mask,
                                                                 GLenum coverMode,
                                                                 GLenum transformType,
                                                                 const GLfloat *transformValues)
    {
        return gl::StencilThenCoverFillPathInstancedCHROMIUM(numPaths, pathNameType, paths, pathBase,
                                                             fillMode, mask, coverMode, transformType,
                                                             transformValues);
    }

    void GL_APIENTRY glStencilThenCoverStrokePathInstancedCHROMIUM(GLsizei numPaths,
                                                                   GLenum pathNameType,
                                                                   const void *paths,
                                                                   GLuint pathBase,
                                                                   GLint reference,
                                                                   GLuint mask,
                                                                   GLenum coverMode,
                                                                   GLenum transformType,
                                                                   const GLfloat *transformValues)
    {
        return gl::StencilThenCoverStrokePathInstancedCHROMIUM(numPaths, pathNameType, paths, pathBase,
                                                               reference, mask, coverMode,
                                                               transformType, transformValues);
    }

    void GL_APIENTRY glBindFragmentInputLocationCHROMIUM(GLuint programs,
                                                         GLint location,
                                                         const GLchar *name)
    {
        return gl::BindFragmentInputLocationCHROMIUM(programs, location, name);
    }

    void GL_APIENTRY glProgramPathFragmentInputGenCHROMIUM(GLuint program,
                                                           GLint location,
                                                           GLenum genMode,
                                                           GLint components,
                                                           const GLfloat *coeffs)
    {
        return gl::ProgramPathFragmentInputGenCHROMIUM(program, location, genMode, components, coeffs);
    }

    // GL_EXT_blend_func_extended
    void GL_APIENTRY glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar *name)
    {
        return gl::BindFragDataLocationEXT(program, color, name);
    }

    void GL_APIENTRY glBindFragDataLocationIndexedEXT(GLuint program,
                                                      GLuint colorNumber,
                                                      GLuint index,
                                                      const GLchar *name)
    {
        return gl::BindFragDataLocationIndexedEXT(program, colorNumber, index, name);
    }

    GLint GL_APIENTRY glGetFragDataIndexEXT(GLuint program, const GLchar *name)
    {
        return gl::GetFragDataIndexEXT(program, name);
    }

    GLint GL_APIENTRY glGetProgramResourceLocationIndexEXT(GLuint program,
                                                           GLenum programInterface,
                                                           const GLchar *name)
    {
        return gl::GetProgramResourceLocationIndexEXT(program, programInterface, name);
    }

    // GL_EXT_debug_marker
    void GL_APIENTRY glInsertEventMarkerEXT(GLsizei length, const GLchar *marker)
    {
        return gl::InsertEventMarkerEXT(length, marker);
    }

    void GL_APIENTRY glPopGroupMarkerEXT()
    {
        return gl::PopGroupMarkerEXT();
    }

    void GL_APIENTRY glPushGroupMarkerEXT(GLsizei length, const GLchar *marker)
    {
        return gl::PushGroupMarkerEXT(length, marker);
    }

    // GL_EXT_discard_framebuffer
    void GL_APIENTRY glDiscardFramebufferEXT(GLenum target,
                                             GLsizei numAttachments,
                                             const GLenum *attachments)
    {
        return gl::DiscardFramebufferEXT(target, numAttachments, attachments);
    }

    // GL_EXT_disjoint_timer_query
    void GL_APIENTRY glBeginQueryEXT(GLenum target, GLuint id)
    {
        return gl::BeginQueryEXT(target, id);
    }

    void GL_APIENTRY glDeleteQueriesEXT(GLsizei n, const GLuint *ids)
    {
        return gl::DeleteQueriesEXT(n, ids);
    }

    void GL_APIENTRY glEndQueryEXT(GLenum target)
    {
        return gl::EndQueryEXT(target);
    }

    void GL_APIENTRY glGenQueriesEXT(GLsizei n, GLuint *ids)
    {
        return gl::GenQueriesEXT(n, ids);
    }

    void GL_APIENTRY glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 *params)
    {
        return gl::GetQueryObjecti64vEXT(id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint *params)
    {
        return gl::GetQueryObjectivEXT(id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 *params)
    {
        return gl::GetQueryObjectui64vEXT(id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params)
    {
        return gl::GetQueryObjectuivEXT(id, pname, params);
    }

    void GL_APIENTRY glGetQueryivEXT(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetQueryivEXT(target, pname, params);
    }

    GLboolean GL_APIENTRY glIsQueryEXT(GLuint id)
    {
        return gl::IsQueryEXT(id);
    }

    void GL_APIENTRY glQueryCounterEXT(GLuint id, GLenum target)
    {
        return gl::QueryCounterEXT(id, target);
    }

    // GL_EXT_draw_buffers
    void GL_APIENTRY glDrawBuffersEXT(GLsizei n, const GLenum *bufs)
    {
        return gl::DrawBuffersEXT(n, bufs);
    }

    // GL_EXT_geometry_shader
    void GL_APIENTRY glFramebufferTextureEXT(GLenum target,
                                             GLenum attachment,
                                             GLuint texture,
                                             GLint level)
    {
        return gl::FramebufferTextureEXT(target, attachment, texture, level);
    }

    // GL_EXT_instanced_arrays
    void GL_APIENTRY glDrawArraysInstancedEXT(GLenum mode,
                                              GLint start,
                                              GLsizei count,
                                              GLsizei primcount)
    {
        return gl::DrawArraysInstancedEXT(mode, start, count, primcount);
    }

    void GL_APIENTRY glDrawElementsInstancedEXT(GLenum mode,
                                                GLsizei count,
                                                GLenum type,
                                                const void *indices,
                                                GLsizei primcount)
    {
        return gl::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
    }

    void GL_APIENTRY glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
    {
        return gl::VertexAttribDivisorEXT(index, divisor);
    }

    // GL_EXT_map_buffer_range
    void GL_APIENTRY glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
    {
        return gl::FlushMappedBufferRangeEXT(target, offset, length);
    }

    void *GL_APIENTRY glMapBufferRangeEXT(GLenum target,
                                          GLintptr offset,
                                          GLsizeiptr length,
                                          GLbitfield access)
    {
        return gl::MapBufferRangeEXT(target, offset, length, access);
    }

    // GL_EXT_memory_object
    void GL_APIENTRY glBufferStorageMemEXT(GLenum target,
                                           GLsizeiptr size,
                                           GLuint memory,
                                           GLuint64 offset)
    {
        return gl::BufferStorageMemEXT(target, size, memory, offset);
    }

    void GL_APIENTRY glCreateMemoryObjectsEXT(GLsizei n, GLuint *memoryObjects)
    {
        return gl::CreateMemoryObjectsEXT(n, memoryObjects);
    }

    void GL_APIENTRY glDeleteMemoryObjectsEXT(GLsizei n, const GLuint *memoryObjects)
    {
        return gl::DeleteMemoryObjectsEXT(n, memoryObjects);
    }

    void GL_APIENTRY glGetMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, GLint *params)
    {
        return gl::GetMemoryObjectParameterivEXT(memoryObject, pname, params);
    }

    void GL_APIENTRY glGetUnsignedBytevEXT(GLenum pname, GLubyte *data)
    {
        return gl::GetUnsignedBytevEXT(pname, data);
    }

    void GL_APIENTRY glGetUnsignedBytei_vEXT(GLenum target, GLuint index, GLubyte *data)
    {
        return gl::GetUnsignedBytei_vEXT(target, index, data);
    }

    GLboolean GL_APIENTRY glIsMemoryObjectEXT(GLuint memoryObject)
    {
        return gl::IsMemoryObjectEXT(memoryObject);
    }

    void GL_APIENTRY glMemoryObjectParameterivEXT(GLuint memoryObject,
                                                  GLenum pname,
                                                  const GLint *params)
    {
        return gl::MemoryObjectParameterivEXT(memoryObject, pname, params);
    }

    void GL_APIENTRY glTexStorageMem2DEXT(GLenum target,
                                          GLsizei levels,
                                          GLenum internalFormat,
                                          GLsizei width,
                                          GLsizei height,
                                          GLuint memory,
                                          GLuint64 offset)
    {
        return gl::TexStorageMem2DEXT(target, levels, internalFormat, width, height, memory, offset);
    }

    void GL_APIENTRY glTexStorageMem2DMultisampleEXT(GLenum target,
                                                     GLsizei samples,
                                                     GLenum internalFormat,
                                                     GLsizei width,
                                                     GLsizei height,
                                                     GLboolean fixedSampleLocations,
                                                     GLuint memory,
                                                     GLuint64 offset)
    {
        return gl::TexStorageMem2DMultisampleEXT(target, samples, internalFormat, width, height,
                                                 fixedSampleLocations, memory, offset);
    }

    void GL_APIENTRY glTexStorageMem3DEXT(GLenum target,
                                          GLsizei levels,
                                          GLenum internalFormat,
                                          GLsizei width,
                                          GLsizei height,
                                          GLsizei depth,
                                          GLuint memory,
                                          GLuint64 offset)
    {
        return gl::TexStorageMem3DEXT(target, levels, internalFormat, width, height, depth, memory,
                                      offset);
    }

    void GL_APIENTRY glTexStorageMem3DMultisampleEXT(GLenum target,
                                                     GLsizei samples,
                                                     GLenum internalFormat,
                                                     GLsizei width,
                                                     GLsizei height,
                                                     GLsizei depth,
                                                     GLboolean fixedSampleLocations,
                                                     GLuint memory,
                                                     GLuint64 offset)
    {
        return gl::TexStorageMem3DMultisampleEXT(target, samples, internalFormat, width, height, depth,
                                                 fixedSampleLocations, memory, offset);
    }

    // GL_EXT_memory_object_fd
    void GL_APIENTRY glImportMemoryFdEXT(GLuint memory, GLuint64 size, GLenum handleType, GLint fd)
    {
        return gl::ImportMemoryFdEXT(memory, size, handleType, fd);
    }

    // GL_EXT_multisampled_render_to_texture
    void GL_APIENTRY glFramebufferTexture2DMultisampleEXT(GLenum target,
                                                          GLenum attachment,
                                                          GLenum textarget,
                                                          GLuint texture,
                                                          GLint level,
                                                          GLsizei samples)
    {
        return gl::FramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level,
                                                      samples);
    }

    void GL_APIENTRY glRenderbufferStorageMultisampleEXT(GLenum target,
                                                         GLsizei samples,
                                                         GLenum internalformat,
                                                         GLsizei width,
                                                         GLsizei height)
    {
        return gl::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
    }

    // GL_EXT_occlusion_query_boolean

    // GL_EXT_robustness
    GLenum GL_APIENTRY glGetGraphicsResetStatusEXT()
    {
        return gl::GetGraphicsResetStatusEXT();
    }

    void GL_APIENTRY glGetnUniformfvEXT(GLuint program,
                                        GLint location,
                                        GLsizei bufSize,
                                        GLfloat *params)
    {
        return gl::GetnUniformfvEXT(program, location, bufSize, params);
    }

    void GL_APIENTRY glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint *params)
    {
        return gl::GetnUniformivEXT(program, location, bufSize, params);
    }

    void GL_APIENTRY glReadnPixelsEXT(GLint x,
                                      GLint y,
                                      GLsizei width,
                                      GLsizei height,
                                      GLenum format,
                                      GLenum type,
                                      GLsizei bufSize,
                                      void *data)
    {
        return gl::ReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
    }

    // GL_EXT_semaphore
    void GL_APIENTRY glDeleteSemaphoresEXT(GLsizei n, const GLuint *semaphores)
    {
        return gl::DeleteSemaphoresEXT(n, semaphores);
    }

    void GL_APIENTRY glGenSemaphoresEXT(GLsizei n, GLuint *semaphores)
    {
        return gl::GenSemaphoresEXT(n, semaphores);
    }

    void GL_APIENTRY glGetSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, GLuint64 *params)
    {
        return gl::GetSemaphoreParameterui64vEXT(semaphore, pname, params);
    }

    GLboolean GL_APIENTRY glIsSemaphoreEXT(GLuint semaphore)
    {
        return gl::IsSemaphoreEXT(semaphore);
    }

    void GL_APIENTRY glSemaphoreParameterui64vEXT(GLuint semaphore,
                                                  GLenum pname,
                                                  const GLuint64 *params)
    {
        return gl::SemaphoreParameterui64vEXT(semaphore, pname, params);
    }

    void GL_APIENTRY glSignalSemaphoreEXT(GLuint semaphore,
                                          GLuint numBufferBarriers,
                                          const GLuint *buffers,
                                          GLuint numTextureBarriers,
                                          const GLuint *textures,
                                          const GLenum *dstLayouts)
    {
        return gl::SignalSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers,
                                      textures, dstLayouts);
    }

    void GL_APIENTRY glWaitSemaphoreEXT(GLuint semaphore,
                                        GLuint numBufferBarriers,
                                        const GLuint *buffers,
                                        GLuint numTextureBarriers,
                                        const GLuint *textures,
                                        const GLenum *srcLayouts)
    {
        return gl::WaitSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures,
                                    srcLayouts);
    }

    // GL_EXT_semaphore_fd
    void GL_APIENTRY glImportSemaphoreFdEXT(GLuint semaphore, GLenum handleType, GLint fd)
    {
        return gl::ImportSemaphoreFdEXT(semaphore, handleType, fd);
    }

    // GL_EXT_texture_storage
    void GL_APIENTRY glTexStorage1DEXT(GLenum target,
                                       GLsizei levels,
                                       GLenum internalformat,
                                       GLsizei width)
    {
        return gl::TexStorage1DEXT(target, levels, internalformat, width);
    }

    void GL_APIENTRY glTexStorage2DEXT(GLenum target,
                                       GLsizei levels,
                                       GLenum internalformat,
                                       GLsizei width,
                                       GLsizei height)
    {
        return gl::TexStorage2DEXT(target, levels, internalformat, width, height);
    }

    void GL_APIENTRY glTexStorage3DEXT(GLenum target,
                                       GLsizei levels,
                                       GLenum internalformat,
                                       GLsizei width,
                                       GLsizei height,
                                       GLsizei depth)
    {
        return gl::TexStorage3DEXT(target, levels, internalformat, width, height, depth);
    }

    // GL_KHR_debug
    void GL_APIENTRY glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void *userParam)
    {
        return gl::DebugMessageCallbackKHR(callback, userParam);
    }

    void GL_APIENTRY glDebugMessageControlKHR(GLenum source,
                                              GLenum type,
                                              GLenum severity,
                                              GLsizei count,
                                              const GLuint *ids,
                                              GLboolean enabled)
    {
        return gl::DebugMessageControlKHR(source, type, severity, count, ids, enabled);
    }

    void GL_APIENTRY glDebugMessageInsertKHR(GLenum source,
                                             GLenum type,
                                             GLuint id,
                                             GLenum severity,
                                             GLsizei length,
                                             const GLchar *buf)
    {
        return gl::DebugMessageInsertKHR(source, type, id, severity, length, buf);
    }

    GLuint GL_APIENTRY glGetDebugMessageLogKHR(GLuint count,
                                               GLsizei bufSize,
                                               GLenum *sources,
                                               GLenum *types,
                                               GLuint *ids,
                                               GLenum *severities,
                                               GLsizei *lengths,
                                               GLchar *messageLog)
    {
        return gl::GetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths,
                                         messageLog);
    }

    void GL_APIENTRY
    glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label)
    {
        return gl::GetObjectLabelKHR(identifier, name, bufSize, length, label);
    }

    void GL_APIENTRY glGetObjectPtrLabelKHR(const void *ptr,
                                            GLsizei bufSize,
                                            GLsizei *length,
                                            GLchar *label)
    {
        return gl::GetObjectPtrLabelKHR(ptr, bufSize, length, label);
    }

    void GL_APIENTRY glGetPointervKHR(GLenum pname, void **params)
    {
        return gl::GetPointervKHR(pname, params);
    }

    void GL_APIENTRY glObjectLabelKHR(GLenum identifier,
                                      GLuint name,
                                      GLsizei length,
                                      const GLchar *label)
    {
        return gl::ObjectLabelKHR(identifier, name, length, label);
    }

    void GL_APIENTRY glObjectPtrLabelKHR(const void *ptr, GLsizei length, const GLchar *label)
    {
        return gl::ObjectPtrLabelKHR(ptr, length, label);
    }

    void GL_APIENTRY glPopDebugGroupKHR()
    {
        return gl::PopDebugGroupKHR();
    }

    void GL_APIENTRY glPushDebugGroupKHR(GLenum source,
                                         GLuint id,
                                         GLsizei length,
                                         const GLchar *message)
    {
        return gl::PushDebugGroupKHR(source, id, length, message);
    }

    // GL_KHR_parallel_shader_compile
    void GL_APIENTRY glMaxShaderCompilerThreadsKHR(GLuint count)
    {
        return gl::MaxShaderCompilerThreadsKHR(count);
    }

    // GL_NV_fence
    void GL_APIENTRY glDeleteFencesNV(GLsizei n, const GLuint *fences)
    {
        return gl::DeleteFencesNV(n, fences);
    }

    void GL_APIENTRY glFinishFenceNV(GLuint fence)
    {
        return gl::FinishFenceNV(fence);
    }

    void GL_APIENTRY glGenFencesNV(GLsizei n, GLuint *fences)
    {
        return gl::GenFencesNV(n, fences);
    }

    void GL_APIENTRY glGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
    {
        return gl::GetFenceivNV(fence, pname, params);
    }

    GLboolean GL_APIENTRY glIsFenceNV(GLuint fence)
    {
        return gl::IsFenceNV(fence);
    }

    void GL_APIENTRY glSetFenceNV(GLuint fence, GLenum condition)
    {
        return gl::SetFenceNV(fence, condition);
    }

    GLboolean GL_APIENTRY glTestFenceNV(GLuint fence)
    {
        return gl::TestFenceNV(fence);
    }

    // GL_OES_EGL_image
    void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
    {
        return gl::EGLImageTargetRenderbufferStorageOES(target, image);
    }

    void GL_APIENTRY glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
    {
        return gl::EGLImageTargetTexture2DOES(target, image);
    }

    // GL_OES_draw_texture
    void GL_APIENTRY glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
    {
        return gl::DrawTexfOES(x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexfvOES(const GLfloat *coords)
    {
        return gl::DrawTexfvOES(coords);
    }

    void GL_APIENTRY glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
    {
        return gl::DrawTexiOES(x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexivOES(const GLint *coords)
    {
        return gl::DrawTexivOES(coords);
    }

    void GL_APIENTRY glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
    {
        return gl::DrawTexsOES(x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexsvOES(const GLshort *coords)
    {
        return gl::DrawTexsvOES(coords);
    }

    void GL_APIENTRY glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
    {
        return gl::DrawTexxOES(x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexxvOES(const GLfixed *coords)
    {
        return gl::DrawTexxvOES(coords);
    }

    // GL_OES_framebuffer_object
    void GL_APIENTRY glBindFramebufferOES(GLenum target, GLuint framebuffer)
    {
        return gl::BindFramebufferOES(target, framebuffer);
    }

    void GL_APIENTRY glBindRenderbufferOES(GLenum target, GLuint renderbuffer)
    {
        return gl::BindRenderbufferOES(target, renderbuffer);
    }

    GLenum GL_APIENTRY glCheckFramebufferStatusOES(GLenum target)
    {
        return gl::CheckFramebufferStatusOES(target);
    }

    void GL_APIENTRY glDeleteFramebuffersOES(GLsizei n, const GLuint *framebuffers)
    {
        return gl::DeleteFramebuffersOES(n, framebuffers);
    }

    void GL_APIENTRY glDeleteRenderbuffersOES(GLsizei n, const GLuint *renderbuffers)
    {
        return gl::DeleteRenderbuffersOES(n, renderbuffers);
    }

    void GL_APIENTRY glFramebufferRenderbufferOES(GLenum target,
                                                  GLenum attachment,
                                                  GLenum renderbuffertarget,
                                                  GLuint renderbuffer)
    {
        return gl::FramebufferRenderbufferOES(target, attachment, renderbuffertarget, renderbuffer);
    }

    void GL_APIENTRY glFramebufferTexture2DOES(GLenum target,
                                               GLenum attachment,
                                               GLenum textarget,
                                               GLuint texture,
                                               GLint level)
    {
        return gl::FramebufferTexture2DOES(target, attachment, textarget, texture, level);
    }

    void GL_APIENTRY glGenFramebuffersOES(GLsizei n, GLuint *framebuffers)
    {
        return gl::GenFramebuffersOES(n, framebuffers);
    }

    void GL_APIENTRY glGenRenderbuffersOES(GLsizei n, GLuint *renderbuffers)
    {
        return gl::GenRenderbuffersOES(n, renderbuffers);
    }

    void GL_APIENTRY glGenerateMipmapOES(GLenum target)
    {
        return gl::GenerateMipmapOES(target);
    }

    void GL_APIENTRY glGetFramebufferAttachmentParameterivOES(GLenum target,
                                                              GLenum attachment,
                                                              GLenum pname,
                                                              GLint *params)
    {
        return gl::GetFramebufferAttachmentParameterivOES(target, attachment, pname, params);
    }

    void GL_APIENTRY glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetRenderbufferParameterivOES(target, pname, params);
    }

    GLboolean GL_APIENTRY glIsFramebufferOES(GLuint framebuffer)
    {
        return gl::IsFramebufferOES(framebuffer);
    }

    GLboolean GL_APIENTRY glIsRenderbufferOES(GLuint renderbuffer)
    {
        return gl::IsRenderbufferOES(renderbuffer);
    }

    void GL_APIENTRY glRenderbufferStorageOES(GLenum target,
                                              GLenum internalformat,
                                              GLsizei width,
                                              GLsizei height)
    {
        return gl::RenderbufferStorageOES(target, internalformat, width, height);
    }

    // GL_OES_get_program_binary
    void GL_APIENTRY glGetProgramBinaryOES(GLuint program,
                                           GLsizei bufSize,
                                           GLsizei *length,
                                           GLenum *binaryFormat,
                                           void *binary)
    {
        return gl::GetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
    }

    void GL_APIENTRY glProgramBinaryOES(GLuint program,
                                        GLenum binaryFormat,
                                        const void *binary,
                                        GLint length)
    {
        return gl::ProgramBinaryOES(program, binaryFormat, binary, length);
    }

    // GL_OES_mapbuffer
    void GL_APIENTRY glGetBufferPointervOES(GLenum target, GLenum pname, void **params)
    {
        return gl::GetBufferPointervOES(target, pname, params);
    }

    void *GL_APIENTRY glMapBufferOES(GLenum target, GLenum access)
    {
        return gl::MapBufferOES(target, access);
    }

    GLboolean GL_APIENTRY glUnmapBufferOES(GLenum target)
    {
        return gl::UnmapBufferOES(target);
    }

    // GL_OES_matrix_palette
    void GL_APIENTRY glCurrentPaletteMatrixOES(GLuint matrixpaletteindex)
    {
        return gl::CurrentPaletteMatrixOES(matrixpaletteindex);
    }

    void GL_APIENTRY glLoadPaletteFromModelViewMatrixOES()
    {
        return gl::LoadPaletteFromModelViewMatrixOES();
    }

    void GL_APIENTRY glMatrixIndexPointerOES(GLint size,
                                             GLenum type,
                                             GLsizei stride,
                                             const void *pointer)
    {
        return gl::MatrixIndexPointerOES(size, type, stride, pointer);
    }

    void GL_APIENTRY glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::WeightPointerOES(size, type, stride, pointer);
    }

    // GL_OES_point_size_array
    void GL_APIENTRY glPointSizePointerOES(GLenum type, GLsizei stride, const void *pointer)
    {
        return gl::PointSizePointerOES(type, stride, pointer);
    }

    // GL_OES_query_matrix
    GLbitfield GL_APIENTRY glQueryMatrixxOES(GLfixed *mantissa, GLint *exponent)
    {
        return gl::QueryMatrixxOES(mantissa, exponent);
    }

    // GL_OES_texture_3D
    void GL_APIENTRY glCompressedTexImage3DOES(GLenum target,
                                               GLint level,
                                               GLenum internalformat,
                                               GLsizei width,
                                               GLsizei height,
                                               GLsizei depth,
                                               GLint border,
                                               GLsizei imageSize,
                                               const void *data)
    {
        return gl::CompressedTexImage3DOES(target, level, internalformat, width, height, depth, border,
                                           imageSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage3DOES(GLenum target,
                                                  GLint level,
                                                  GLint xoffset,
                                                  GLint yoffset,
                                                  GLint zoffset,
                                                  GLsizei width,
                                                  GLsizei height,
                                                  GLsizei depth,
                                                  GLenum format,
                                                  GLsizei imageSize,
                                                  const void *data)
    {
        return gl::CompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height,
                                              depth, format, imageSize, data);
    }

    void GL_APIENTRY glCopyTexSubImage3DOES(GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLint zoffset,
                                            GLint x,
                                            GLint y,
                                            GLsizei width,
                                            GLsizei height)
    {
        return gl::CopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
    }

    void GL_APIENTRY glFramebufferTexture3DOES(GLenum target,
                                               GLenum attachment,
                                               GLenum textarget,
                                               GLuint texture,
                                               GLint level,
                                               GLint zoffset)
    {
        return gl::FramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
    }

    void GL_APIENTRY glTexImage3DOES(GLenum target,
                                     GLint level,
                                     GLenum internalformat,
                                     GLsizei width,
                                     GLsizei height,
                                     GLsizei depth,
                                     GLint border,
                                     GLenum format,
                                     GLenum type,
                                     const void *pixels)
    {
        return gl::TexImage3DOES(target, level, internalformat, width, height, depth, border, format,
                                 type, pixels);
    }

    void GL_APIENTRY glTexSubImage3DOES(GLenum target,
                                        GLint level,
                                        GLint xoffset,
                                        GLint yoffset,
                                        GLint zoffset,
                                        GLsizei width,
                                        GLsizei height,
                                        GLsizei depth,
                                        GLenum format,
                                        GLenum type,
                                        const void *pixels)
    {
        return gl::TexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth,
                                    format, type, pixels);
    }

    // GL_OES_texture_border_clamp
    void GL_APIENTRY glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint *params)
    {
        return gl::GetSamplerParameterIivOES(sampler, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint *params)
    {
        return gl::GetSamplerParameterIuivOES(sampler, pname, params);
    }

    void GL_APIENTRY glGetTexParameterIivOES(GLenum target, GLenum pname, GLint *params)
    {
        return gl::GetTexParameterIivOES(target, pname, params);
    }

    void GL_APIENTRY glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint *params)
    {
        return gl::GetTexParameterIuivOES(target, pname, params);
    }

    void GL_APIENTRY glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint *param)
    {
        return gl::SamplerParameterIivOES(sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint *param)
    {
        return gl::SamplerParameterIuivOES(sampler, pname, param);
    }

    void GL_APIENTRY glTexParameterIivOES(GLenum target, GLenum pname, const GLint *params)
    {
        return gl::TexParameterIivOES(target, pname, params);
    }

    void GL_APIENTRY glTexParameterIuivOES(GLenum target, GLenum pname, const GLuint *params)
    {
        return gl::TexParameterIuivOES(target, pname, params);
    }

    // GL_OES_texture_cube_map
    void GL_APIENTRY glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat *params)
    {
        return gl::GetTexGenfvOES(coord, pname, params);
    }

    void GL_APIENTRY glGetTexGenivOES(GLenum coord, GLenum pname, GLint *params)
    {
        return gl::GetTexGenivOES(coord, pname, params);
    }

    void GL_APIENTRY glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed *params)
    {
        return gl::GetTexGenxvOES(coord, pname, params);
    }

    void GL_APIENTRY glTexGenfOES(GLenum coord, GLenum pname, GLfloat param)
    {
        return gl::TexGenfOES(coord, pname, param);
    }

    void GL_APIENTRY glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat *params)
    {
        return gl::TexGenfvOES(coord, pname, params);
    }

    void GL_APIENTRY glTexGeniOES(GLenum coord, GLenum pname, GLint param)
    {
        return gl::TexGeniOES(coord, pname, param);
    }

    void GL_APIENTRY glTexGenivOES(GLenum coord, GLenum pname, const GLint *params)
    {
        return gl::TexGenivOES(coord, pname, params);
    }

    void GL_APIENTRY glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
    {
        return gl::TexGenxOES(coord, pname, param);
    }

    void GL_APIENTRY glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed *params)
    {
        return gl::TexGenxvOES(coord, pname, params);
    }

    // GL_OES_texture_storage_multisample_2d_array
    void GL_APIENTRY glTexStorage3DMultisampleOES(GLenum target,
                                                  GLsizei samples,
                                                  GLenum internalformat,
                                                  GLsizei width,
                                                  GLsizei height,
                                                  GLsizei depth,
                                                  GLboolean fixedsamplelocations)
    {
        return gl::TexStorage3DMultisampleOES(target, samples, internalformat, width, height, depth,
                                              fixedsamplelocations);
    }

    // GL_OES_vertex_array_object
    void GL_APIENTRY glBindVertexArrayOES(GLuint array)
    {
        return gl::BindVertexArrayOES(array);
    }

    void GL_APIENTRY glDeleteVertexArraysOES(GLsizei n, const GLuint *arrays)
    {
        return gl::DeleteVertexArraysOES(n, arrays);
    }

    void GL_APIENTRY glGenVertexArraysOES(GLsizei n, GLuint *arrays)
    {
        return gl::GenVertexArraysOES(n, arrays);
    }

    GLboolean GL_APIENTRY glIsVertexArrayOES(GLuint array)
    {
        return gl::IsVertexArrayOES(array);
    }

    // GL_OVR_multiview
    void GL_APIENTRY glFramebufferTextureMultiviewOVR(GLenum target,
                                                      GLenum attachment,
                                                      GLuint texture,
                                                      GLint level,
                                                      GLint baseViewIndex,
                                                      GLsizei numViews)
    {
        return gl::FramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex,
                                                  numViews);
    }

    // GL_OVR_multiview2

    // EGL_ANGLE_explicit_context
    void GL_APIENTRY glActiveShaderProgramContextANGLE(GLeglContext ctx,
                                                       GLuint pipeline,
                                                       GLuint program)
    {
        return gl::ActiveShaderProgramContextANGLE(ctx, pipeline, program);
    }

    void GL_APIENTRY glActiveTextureContextANGLE(GLeglContext ctx, GLenum texture)
    {
        return gl::ActiveTextureContextANGLE(ctx, texture);
    }

    void GL_APIENTRY glAlphaFuncContextANGLE(GLeglContext ctx, GLenum func, GLfloat ref)
    {
        return gl::AlphaFuncContextANGLE(ctx, func, ref);
    }

    void GL_APIENTRY glAlphaFuncxContextANGLE(GLeglContext ctx, GLenum func, GLfixed ref)
    {
        return gl::AlphaFuncxContextANGLE(ctx, func, ref);
    }

    void GL_APIENTRY glAttachShaderContextANGLE(GLeglContext ctx, GLuint program, GLuint shader)
    {
        return gl::AttachShaderContextANGLE(ctx, program, shader);
    }

    void GL_APIENTRY glBeginQueryContextANGLE(GLeglContext ctx, GLenum target, GLuint id)
    {
        return gl::BeginQueryContextANGLE(ctx, target, id);
    }

    void GL_APIENTRY glBeginQueryEXTContextANGLE(GLeglContext ctx, GLenum target, GLuint id)
    {
        return gl::BeginQueryEXTContextANGLE(ctx, target, id);
    }

    void GL_APIENTRY glBeginTransformFeedbackContextANGLE(GLeglContext ctx, GLenum primitiveMode)
    {
        return gl::BeginTransformFeedbackContextANGLE(ctx, primitiveMode);
    }

    void GL_APIENTRY glBindAttribLocationContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      GLuint index,
                                                      const GLchar *name)
    {
        return gl::BindAttribLocationContextANGLE(ctx, program, index, name);
    }

    void GL_APIENTRY glBindBufferContextANGLE(GLeglContext ctx, GLenum target, GLuint buffer)
    {
        return gl::BindBufferContextANGLE(ctx, target, buffer);
    }

    void GL_APIENTRY glBindBufferBaseContextANGLE(GLeglContext ctx,
                                                  GLenum target,
                                                  GLuint index,
                                                  GLuint buffer)
    {
        return gl::BindBufferBaseContextANGLE(ctx, target, index, buffer);
    }

    void GL_APIENTRY glBindBufferRangeContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLuint index,
                                                   GLuint buffer,
                                                   GLintptr offset,
                                                   GLsizeiptr size)
    {
        return gl::BindBufferRangeContextANGLE(ctx, target, index, buffer, offset, size);
    }

    void GL_APIENTRY glBindFragDataLocationEXTContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLuint color,
                                                           const GLchar *name)
    {
        return gl::BindFragDataLocationEXTContextANGLE(ctx, program, color, name);
    }

    void GL_APIENTRY glBindFragDataLocationIndexedEXTContextANGLE(GLeglContext ctx,
                                                                  GLuint program,
                                                                  GLuint colorNumber,
                                                                  GLuint index,
                                                                  const GLchar *name)
    {
        return gl::BindFragDataLocationIndexedEXTContextANGLE(ctx, program, colorNumber, index, name);
    }

    void GL_APIENTRY glBindFramebufferContextANGLE(GLeglContext ctx, GLenum target, GLuint framebuffer)
    {
        return gl::BindFramebufferContextANGLE(ctx, target, framebuffer);
    }

    void GL_APIENTRY glBindFramebufferOESContextANGLE(GLeglContext ctx,
                                                      GLenum target,
                                                      GLuint framebuffer)
    {
        return gl::BindFramebufferOESContextANGLE(ctx, target, framebuffer);
    }

    void GL_APIENTRY glBindImageTextureContextANGLE(GLeglContext ctx,
                                                    GLuint unit,
                                                    GLuint texture,
                                                    GLint level,
                                                    GLboolean layered,
                                                    GLint layer,
                                                    GLenum access,
                                                    GLenum format)
    {
        return gl::BindImageTextureContextANGLE(ctx, unit, texture, level, layered, layer, access,
                                                format);
    }

    void GL_APIENTRY glBindProgramPipelineContextANGLE(GLeglContext ctx, GLuint pipeline)
    {
        return gl::BindProgramPipelineContextANGLE(ctx, pipeline);
    }

    void GL_APIENTRY glBindRenderbufferContextANGLE(GLeglContext ctx,
                                                    GLenum target,
                                                    GLuint renderbuffer)
    {
        return gl::BindRenderbufferContextANGLE(ctx, target, renderbuffer);
    }

    void GL_APIENTRY glBindRenderbufferOESContextANGLE(GLeglContext ctx,
                                                       GLenum target,
                                                       GLuint renderbuffer)
    {
        return gl::BindRenderbufferOESContextANGLE(ctx, target, renderbuffer);
    }

    void GL_APIENTRY glBindSamplerContextANGLE(GLeglContext ctx, GLuint unit, GLuint sampler)
    {
        return gl::BindSamplerContextANGLE(ctx, unit, sampler);
    }

    void GL_APIENTRY glBindTextureContextANGLE(GLeglContext ctx, GLenum target, GLuint texture)
    {
        return gl::BindTextureContextANGLE(ctx, target, texture);
    }

    void GL_APIENTRY glBindTransformFeedbackContextANGLE(GLeglContext ctx, GLenum target, GLuint id)
    {
        return gl::BindTransformFeedbackContextANGLE(ctx, target, id);
    }

    void GL_APIENTRY glBindVertexArrayContextANGLE(GLeglContext ctx, GLuint array)
    {
        return gl::BindVertexArrayContextANGLE(ctx, array);
    }

    void GL_APIENTRY glBindVertexArrayOESContextANGLE(GLeglContext ctx, GLuint array)
    {
        return gl::BindVertexArrayOESContextANGLE(ctx, array);
    }

    void GL_APIENTRY glBindVertexBufferContextANGLE(GLeglContext ctx,
                                                    GLuint bindingindex,
                                                    GLuint buffer,
                                                    GLintptr offset,
                                                    GLsizei stride)
    {
        return gl::BindVertexBufferContextANGLE(ctx, bindingindex, buffer, offset, stride);
    }

    void GL_APIENTRY
    glBlendColorContextANGLE(GLeglContext ctx, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
    {
        return gl::BlendColorContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY glBlendEquationContextANGLE(GLeglContext ctx, GLenum mode)
    {
        return gl::BlendEquationContextANGLE(ctx, mode);
    }

    void GL_APIENTRY glBlendEquationSeparateContextANGLE(GLeglContext ctx,
                                                         GLenum modeRGB,
                                                         GLenum modeAlpha)
    {
        return gl::BlendEquationSeparateContextANGLE(ctx, modeRGB, modeAlpha);
    }

    void GL_APIENTRY glBlendFuncContextANGLE(GLeglContext ctx, GLenum sfactor, GLenum dfactor)
    {
        return gl::BlendFuncContextANGLE(ctx, sfactor, dfactor);
    }

    void GL_APIENTRY glBlendFuncSeparateContextANGLE(GLeglContext ctx,
                                                     GLenum sfactorRGB,
                                                     GLenum dfactorRGB,
                                                     GLenum sfactorAlpha,
                                                     GLenum dfactorAlpha)
    {
        return gl::BlendFuncSeparateContextANGLE(ctx, sfactorRGB, dfactorRGB, sfactorAlpha,
                                                 dfactorAlpha);
    }

    void GL_APIENTRY glBlitFramebufferContextANGLE(GLeglContext ctx,
                                                   GLint srcX0,
                                                   GLint srcY0,
                                                   GLint srcX1,
                                                   GLint srcY1,
                                                   GLint dstX0,
                                                   GLint dstY0,
                                                   GLint dstX1,
                                                   GLint dstY1,
                                                   GLbitfield mask,
                                                   GLenum filter)
    {
        return gl::BlitFramebufferContextANGLE(ctx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1,
                                               dstY1, mask, filter);
    }

    void GL_APIENTRY glBlitFramebufferANGLEContextANGLE(GLeglContext ctx,
                                                        GLint srcX0,
                                                        GLint srcY0,
                                                        GLint srcX1,
                                                        GLint srcY1,
                                                        GLint dstX0,
                                                        GLint dstY0,
                                                        GLint dstX1,
                                                        GLint dstY1,
                                                        GLbitfield mask,
                                                        GLenum filter)
    {
        return gl::BlitFramebufferANGLEContextANGLE(ctx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0,
                                                    dstX1, dstY1, mask, filter);
    }

    void GL_APIENTRY glBufferDataContextANGLE(GLeglContext ctx,
                                              GLenum target,
                                              GLsizeiptr size,
                                              const void *data,
                                              GLenum usage)
    {
        return gl::BufferDataContextANGLE(ctx, target, size, data, usage);
    }

    void GL_APIENTRY glBufferStorageMemEXTContextANGLE(GLeglContext ctx,
                                                       GLenum target,
                                                       GLsizeiptr size,
                                                       GLuint memory,
                                                       GLuint64 offset)
    {
        return gl::BufferStorageMemEXTContextANGLE(ctx, target, size, memory, offset);
    }

    void GL_APIENTRY glBufferSubDataContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLintptr offset,
                                                 GLsizeiptr size,
                                                 const void *data)
    {
        return gl::BufferSubDataContextANGLE(ctx, target, offset, size, data);
    }

    GLenum GL_APIENTRY glCheckFramebufferStatusContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::CheckFramebufferStatusContextANGLE(ctx, target);
    }

    GLenum GL_APIENTRY glCheckFramebufferStatusOESContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::CheckFramebufferStatusOESContextANGLE(ctx, target);
    }

    void GL_APIENTRY glClearContextANGLE(GLeglContext ctx, GLbitfield mask)
    {
        return gl::ClearContextANGLE(ctx, mask);
    }

    void GL_APIENTRY glClearBufferfiContextANGLE(GLeglContext ctx,
                                                 GLenum buffer,
                                                 GLint drawbuffer,
                                                 GLfloat depth,
                                                 GLint stencil)
    {
        return gl::ClearBufferfiContextANGLE(ctx, buffer, drawbuffer, depth, stencil);
    }

    void GL_APIENTRY glClearBufferfvContextANGLE(GLeglContext ctx,
                                                 GLenum buffer,
                                                 GLint drawbuffer,
                                                 const GLfloat *value)
    {
        return gl::ClearBufferfvContextANGLE(ctx, buffer, drawbuffer, value);
    }

    void GL_APIENTRY glClearBufferivContextANGLE(GLeglContext ctx,
                                                 GLenum buffer,
                                                 GLint drawbuffer,
                                                 const GLint *value)
    {
        return gl::ClearBufferivContextANGLE(ctx, buffer, drawbuffer, value);
    }

    void GL_APIENTRY glClearBufferuivContextANGLE(GLeglContext ctx,
                                                  GLenum buffer,
                                                  GLint drawbuffer,
                                                  const GLuint *value)
    {
        return gl::ClearBufferuivContextANGLE(ctx, buffer, drawbuffer, value);
    }

    void GL_APIENTRY
    glClearColorContextANGLE(GLeglContext ctx, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
    {
        return gl::ClearColorContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY
    glClearColorxContextANGLE(GLeglContext ctx, GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
    {
        return gl::ClearColorxContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY glClearDepthfContextANGLE(GLeglContext ctx, GLfloat d)
    {
        return gl::ClearDepthfContextANGLE(ctx, d);
    }

    void GL_APIENTRY glClearDepthxContextANGLE(GLeglContext ctx, GLfixed depth)
    {
        return gl::ClearDepthxContextANGLE(ctx, depth);
    }

    void GL_APIENTRY glClearStencilContextANGLE(GLeglContext ctx, GLint s)
    {
        return gl::ClearStencilContextANGLE(ctx, s);
    }

    void GL_APIENTRY glClientActiveTextureContextANGLE(GLeglContext ctx, GLenum texture)
    {
        return gl::ClientActiveTextureContextANGLE(ctx, texture);
    }

    GLenum GL_APIENTRY glClientWaitSyncContextANGLE(GLeglContext ctx,
                                                    GLsync sync,
                                                    GLbitfield flags,
                                                    GLuint64 timeout)
    {
        return gl::ClientWaitSyncContextANGLE(ctx, sync, flags, timeout);
    }

    void GL_APIENTRY glClipPlanefContextANGLE(GLeglContext ctx, GLenum p, const GLfloat *eqn)
    {
        return gl::ClipPlanefContextANGLE(ctx, p, eqn);
    }

    void GL_APIENTRY glClipPlanexContextANGLE(GLeglContext ctx, GLenum plane, const GLfixed *equation)
    {
        return gl::ClipPlanexContextANGLE(ctx, plane, equation);
    }

    void GL_APIENTRY
    glColor4fContextANGLE(GLeglContext ctx, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
    {
        return gl::Color4fContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY
    glColor4ubContextANGLE(GLeglContext ctx, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
    {
        return gl::Color4ubContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY
    glColor4xContextANGLE(GLeglContext ctx, GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
    {
        return gl::Color4xContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY glColorMaskContextANGLE(GLeglContext ctx,
                                             GLboolean red,
                                             GLboolean green,
                                             GLboolean blue,
                                             GLboolean alpha)
    {
        return gl::ColorMaskContextANGLE(ctx, red, green, blue, alpha);
    }

    void GL_APIENTRY glColorPointerContextANGLE(GLeglContext ctx,
                                                GLint size,
                                                GLenum type,
                                                GLsizei stride,
                                                const void *pointer)
    {
        return gl::ColorPointerContextANGLE(ctx, size, type, stride, pointer);
    }

    void GL_APIENTRY glCompileShaderContextANGLE(GLeglContext ctx, GLuint shader)
    {
        return gl::CompileShaderContextANGLE(ctx, shader);
    }

    void GL_APIENTRY glCompressedTexImage2DContextANGLE(GLeglContext ctx,
                                                        GLenum target,
                                                        GLint level,
                                                        GLenum internalformat,
                                                        GLsizei width,
                                                        GLsizei height,
                                                        GLint border,
                                                        GLsizei imageSize,
                                                        const void *data)
    {
        return gl::CompressedTexImage2DContextANGLE(ctx, target, level, internalformat, width, height,
                                                    border, imageSize, data);
    }

    void GL_APIENTRY glCompressedTexImage3DContextANGLE(GLeglContext ctx,
                                                        GLenum target,
                                                        GLint level,
                                                        GLenum internalformat,
                                                        GLsizei width,
                                                        GLsizei height,
                                                        GLsizei depth,
                                                        GLint border,
                                                        GLsizei imageSize,
                                                        const void *data)
    {
        return gl::CompressedTexImage3DContextANGLE(ctx, target, level, internalformat, width, height,
                                                    depth, border, imageSize, data);
    }

    void GL_APIENTRY glCompressedTexImage3DOESContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLint level,
                                                           GLenum internalformat,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLsizei depth,
                                                           GLint border,
                                                           GLsizei imageSize,
                                                           const void *data)
    {
        return gl::CompressedTexImage3DOESContextANGLE(ctx, target, level, internalformat, width,
                                                       height, depth, border, imageSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage2DContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLint level,
                                                           GLint xoffset,
                                                           GLint yoffset,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLenum format,
                                                           GLsizei imageSize,
                                                           const void *data)
    {
        return gl::CompressedTexSubImage2DContextANGLE(ctx, target, level, xoffset, yoffset, width,
                                                       height, format, imageSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage3DContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLint level,
                                                           GLint xoffset,
                                                           GLint yoffset,
                                                           GLint zoffset,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLsizei depth,
                                                           GLenum format,
                                                           GLsizei imageSize,
                                                           const void *data)
    {
        return gl::CompressedTexSubImage3DContextANGLE(ctx, target, level, xoffset, yoffset, zoffset,
                                                       width, height, depth, format, imageSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage3DOESContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLint level,
                                                              GLint xoffset,
                                                              GLint yoffset,
                                                              GLint zoffset,
                                                              GLsizei width,
                                                              GLsizei height,
                                                              GLsizei depth,
                                                              GLenum format,
                                                              GLsizei imageSize,
                                                              const void *data)
    {
        return gl::CompressedTexSubImage3DOESContextANGLE(ctx, target, level, xoffset, yoffset, zoffset,
                                                          width, height, depth, format, imageSize,
                                                          data);
    }

    void GL_APIENTRY glCopyBufferSubDataContextANGLE(GLeglContext ctx,
                                                     GLenum readTarget,
                                                     GLenum writeTarget,
                                                     GLintptr readOffset,
                                                     GLintptr writeOffset,
                                                     GLsizeiptr size)
    {
        return gl::CopyBufferSubDataContextANGLE(ctx, readTarget, writeTarget, readOffset, writeOffset,
                                                 size);
    }

    void GL_APIENTRY glCopyTexImage2DContextANGLE(GLeglContext ctx,
                                                  GLenum target,
                                                  GLint level,
                                                  GLenum internalformat,
                                                  GLint x,
                                                  GLint y,
                                                  GLsizei width,
                                                  GLsizei height,
                                                  GLint border)
    {
        return gl::CopyTexImage2DContextANGLE(ctx, target, level, internalformat, x, y, width, height,
                                              border);
    }

    void GL_APIENTRY glCopyTexSubImage2DContextANGLE(GLeglContext ctx,
                                                     GLenum target,
                                                     GLint level,
                                                     GLint xoffset,
                                                     GLint yoffset,
                                                     GLint x,
                                                     GLint y,
                                                     GLsizei width,
                                                     GLsizei height)
    {
        return gl::CopyTexSubImage2DContextANGLE(ctx, target, level, xoffset, yoffset, x, y, width,
                                                 height);
    }

    void GL_APIENTRY glCopyTexSubImage3DContextANGLE(GLeglContext ctx,
                                                     GLenum target,
                                                     GLint level,
                                                     GLint xoffset,
                                                     GLint yoffset,
                                                     GLint zoffset,
                                                     GLint x,
                                                     GLint y,
                                                     GLsizei width,
                                                     GLsizei height)
    {
        return gl::CopyTexSubImage3DContextANGLE(ctx, target, level, xoffset, yoffset, zoffset, x, y,
                                                 width, height);
    }

    void GL_APIENTRY glCopyTexSubImage3DOESContextANGLE(GLeglContext ctx,
                                                        GLenum target,
                                                        GLint level,
                                                        GLint xoffset,
                                                        GLint yoffset,
                                                        GLint zoffset,
                                                        GLint x,
                                                        GLint y,
                                                        GLsizei width,
                                                        GLsizei height)
    {
        return gl::CopyTexSubImage3DOESContextANGLE(ctx, target, level, xoffset, yoffset, zoffset, x, y,
                                                    width, height);
    }

    void GL_APIENTRY glCreateMemoryObjectsEXTContextANGLE(GLeglContext ctx,
                                                          GLsizei n,
                                                          GLuint *memoryObjects)
    {
        return gl::CreateMemoryObjectsEXTContextANGLE(ctx, n, memoryObjects);
    }

    GLuint GL_APIENTRY glCreateProgramContextANGLE(GLeglContext ctx)
    {
        return gl::CreateProgramContextANGLE(ctx);
    }

    GLuint GL_APIENTRY glCreateShaderContextANGLE(GLeglContext ctx, GLenum type)
    {
        return gl::CreateShaderContextANGLE(ctx, type);
    }

    GLuint GL_APIENTRY glCreateShaderProgramvContextANGLE(GLeglContext ctx,
                                                          GLenum type,
                                                          GLsizei count,
                                                          const GLchar *const *strings)
    {
        return gl::CreateShaderProgramvContextANGLE(ctx, type, count, strings);
    }

    void GL_APIENTRY glCullFaceContextANGLE(GLeglContext ctx, GLenum mode)
    {
        return gl::CullFaceContextANGLE(ctx, mode);
    }

    void GL_APIENTRY glCurrentPaletteMatrixOESContextANGLE(GLeglContext ctx, GLuint matrixpaletteindex)
    {
        return gl::CurrentPaletteMatrixOESContextANGLE(ctx, matrixpaletteindex);
    }

    void GL_APIENTRY glDebugMessageCallbackKHRContextANGLE(GLeglContext ctx,
                                                           GLDEBUGPROCKHR callback,
                                                           const void *userParam)
    {
        return gl::DebugMessageCallbackKHRContextANGLE(ctx, callback, userParam);
    }

    void GL_APIENTRY glDebugMessageControlKHRContextANGLE(GLeglContext ctx,
                                                          GLenum source,
                                                          GLenum type,
                                                          GLenum severity,
                                                          GLsizei count,
                                                          const GLuint *ids,
                                                          GLboolean enabled)
    {
        return gl::DebugMessageControlKHRContextANGLE(ctx, source, type, severity, count, ids, enabled);
    }

    void GL_APIENTRY glDebugMessageInsertKHRContextANGLE(GLeglContext ctx,
                                                         GLenum source,
                                                         GLenum type,
                                                         GLuint id,
                                                         GLenum severity,
                                                         GLsizei length,
                                                         const GLchar *buf)
    {
        return gl::DebugMessageInsertKHRContextANGLE(ctx, source, type, id, severity, length, buf);
    }

    void GL_APIENTRY glDeleteBuffersContextANGLE(GLeglContext ctx, GLsizei n, const GLuint *buffers)
    {
        return gl::DeleteBuffersContextANGLE(ctx, n, buffers);
    }

    void GL_APIENTRY glDeleteFencesNVContextANGLE(GLeglContext ctx, GLsizei n, const GLuint *fences)
    {
        return gl::DeleteFencesNVContextANGLE(ctx, n, fences);
    }

    void GL_APIENTRY glDeleteFramebuffersContextANGLE(GLeglContext ctx,
                                                      GLsizei n,
                                                      const GLuint *framebuffers)
    {
        return gl::DeleteFramebuffersContextANGLE(ctx, n, framebuffers);
    }

    void GL_APIENTRY glDeleteFramebuffersOESContextANGLE(GLeglContext ctx,
                                                         GLsizei n,
                                                         const GLuint *framebuffers)
    {
        return gl::DeleteFramebuffersOESContextANGLE(ctx, n, framebuffers);
    }

    void GL_APIENTRY glDeleteMemoryObjectsEXTContextANGLE(GLeglContext ctx,
                                                          GLsizei n,
                                                          const GLuint *memoryObjects)
    {
        return gl::DeleteMemoryObjectsEXTContextANGLE(ctx, n, memoryObjects);
    }

    void GL_APIENTRY glDeleteProgramContextANGLE(GLeglContext ctx, GLuint program)
    {
        return gl::DeleteProgramContextANGLE(ctx, program);
    }

    void GL_APIENTRY glDeleteProgramPipelinesContextANGLE(GLeglContext ctx,
                                                          GLsizei n,
                                                          const GLuint *pipelines)
    {
        return gl::DeleteProgramPipelinesContextANGLE(ctx, n, pipelines);
    }

    void GL_APIENTRY glDeleteQueriesContextANGLE(GLeglContext ctx, GLsizei n, const GLuint *ids)
    {
        return gl::DeleteQueriesContextANGLE(ctx, n, ids);
    }

    void GL_APIENTRY glDeleteQueriesEXTContextANGLE(GLeglContext ctx, GLsizei n, const GLuint *ids)
    {
        return gl::DeleteQueriesEXTContextANGLE(ctx, n, ids);
    }

    void GL_APIENTRY glDeleteRenderbuffersContextANGLE(GLeglContext ctx,
                                                       GLsizei n,
                                                       const GLuint *renderbuffers)
    {
        return gl::DeleteRenderbuffersContextANGLE(ctx, n, renderbuffers);
    }

    void GL_APIENTRY glDeleteRenderbuffersOESContextANGLE(GLeglContext ctx,
                                                          GLsizei n,
                                                          const GLuint *renderbuffers)
    {
        return gl::DeleteRenderbuffersOESContextANGLE(ctx, n, renderbuffers);
    }

    void GL_APIENTRY glDeleteSamplersContextANGLE(GLeglContext ctx,
                                                  GLsizei count,
                                                  const GLuint *samplers)
    {
        return gl::DeleteSamplersContextANGLE(ctx, count, samplers);
    }

    void GL_APIENTRY glDeleteSemaphoresEXTContextANGLE(GLeglContext ctx,
                                                       GLsizei n,
                                                       const GLuint *semaphores)
    {
        return gl::DeleteSemaphoresEXTContextANGLE(ctx, n, semaphores);
    }

    void GL_APIENTRY glDeleteShaderContextANGLE(GLeglContext ctx, GLuint shader)
    {
        return gl::DeleteShaderContextANGLE(ctx, shader);
    }

    void GL_APIENTRY glDeleteSyncContextANGLE(GLeglContext ctx, GLsync sync)
    {
        return gl::DeleteSyncContextANGLE(ctx, sync);
    }

    void GL_APIENTRY glDeleteTexturesContextANGLE(GLeglContext ctx, GLsizei n, const GLuint *textures)
    {
        return gl::DeleteTexturesContextANGLE(ctx, n, textures);
    }

    void GL_APIENTRY glDeleteTransformFeedbacksContextANGLE(GLeglContext ctx,
                                                            GLsizei n,
                                                            const GLuint *ids)
    {
        return gl::DeleteTransformFeedbacksContextANGLE(ctx, n, ids);
    }

    void GL_APIENTRY glDeleteVertexArraysContextANGLE(GLeglContext ctx, GLsizei n, const GLuint *arrays)
    {
        return gl::DeleteVertexArraysContextANGLE(ctx, n, arrays);
    }

    void GL_APIENTRY glDeleteVertexArraysOESContextANGLE(GLeglContext ctx,
                                                         GLsizei n,
                                                         const GLuint *arrays)
    {
        return gl::DeleteVertexArraysOESContextANGLE(ctx, n, arrays);
    }

    void GL_APIENTRY glDepthFuncContextANGLE(GLeglContext ctx, GLenum func)
    {
        return gl::DepthFuncContextANGLE(ctx, func);
    }

    void GL_APIENTRY glDepthMaskContextANGLE(GLeglContext ctx, GLboolean flag)
    {
        return gl::DepthMaskContextANGLE(ctx, flag);
    }

    void GL_APIENTRY glDepthRangefContextANGLE(GLeglContext ctx, GLfloat n, GLfloat f)
    {
        return gl::DepthRangefContextANGLE(ctx, n, f);
    }

    void GL_APIENTRY glDepthRangexContextANGLE(GLeglContext ctx, GLfixed n, GLfixed f)
    {
        return gl::DepthRangexContextANGLE(ctx, n, f);
    }

    void GL_APIENTRY glDetachShaderContextANGLE(GLeglContext ctx, GLuint program, GLuint shader)
    {
        return gl::DetachShaderContextANGLE(ctx, program, shader);
    }

    void GL_APIENTRY glDisableContextANGLE(GLeglContext ctx, GLenum cap)
    {
        return gl::DisableContextANGLE(ctx, cap);
    }

    void GL_APIENTRY glDisableClientStateContextANGLE(GLeglContext ctx, GLenum array)
    {
        return gl::DisableClientStateContextANGLE(ctx, array);
    }

    void GL_APIENTRY glDisableVertexAttribArrayContextANGLE(GLeglContext ctx, GLuint index)
    {
        return gl::DisableVertexAttribArrayContextANGLE(ctx, index);
    }

    void GL_APIENTRY glDiscardFramebufferEXTContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLsizei numAttachments,
                                                         const GLenum *attachments)
    {
        return gl::DiscardFramebufferEXTContextANGLE(ctx, target, numAttachments, attachments);
    }

    void GL_APIENTRY glDispatchComputeContextANGLE(GLeglContext ctx,
                                                   GLuint num_groups_x,
                                                   GLuint num_groups_y,
                                                   GLuint num_groups_z)
    {
        return gl::DispatchComputeContextANGLE(ctx, num_groups_x, num_groups_y, num_groups_z);
    }

    void GL_APIENTRY glDispatchComputeIndirectContextANGLE(GLeglContext ctx, GLintptr indirect)
    {
        return gl::DispatchComputeIndirectContextANGLE(ctx, indirect);
    }

    void GL_APIENTRY glDrawArraysContextANGLE(GLeglContext ctx, GLenum mode, GLint first, GLsizei count)
    {
        return gl::DrawArraysContextANGLE(ctx, mode, first, count);
    }

    void GL_APIENTRY glDrawArraysIndirectContextANGLE(GLeglContext ctx,
                                                      GLenum mode,
                                                      const void *indirect)
    {
        return gl::DrawArraysIndirectContextANGLE(ctx, mode, indirect);
    }

    void GL_APIENTRY glDrawArraysInstancedContextANGLE(GLeglContext ctx,
                                                       GLenum mode,
                                                       GLint first,
                                                       GLsizei count,
                                                       GLsizei instancecount)
    {
        return gl::DrawArraysInstancedContextANGLE(ctx, mode, first, count, instancecount);
    }

    void GL_APIENTRY glDrawArraysInstancedANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum mode,
                                                            GLint first,
                                                            GLsizei count,
                                                            GLsizei primcount)
    {
        return gl::DrawArraysInstancedANGLEContextANGLE(ctx, mode, first, count, primcount);
    }

    void GL_APIENTRY glDrawArraysInstancedEXTContextANGLE(GLeglContext ctx,
                                                          GLenum mode,
                                                          GLint start,
                                                          GLsizei count,
                                                          GLsizei primcount)
    {
        return gl::DrawArraysInstancedEXTContextANGLE(ctx, mode, start, count, primcount);
    }

    void GL_APIENTRY glDrawBuffersContextANGLE(GLeglContext ctx, GLsizei n, const GLenum *bufs)
    {
        return gl::DrawBuffersContextANGLE(ctx, n, bufs);
    }

    void GL_APIENTRY glDrawBuffersEXTContextANGLE(GLeglContext ctx, GLsizei n, const GLenum *bufs)
    {
        return gl::DrawBuffersEXTContextANGLE(ctx, n, bufs);
    }

    void GL_APIENTRY glDrawElementsContextANGLE(GLeglContext ctx,
                                                GLenum mode,
                                                GLsizei count,
                                                GLenum type,
                                                const void *indices)
    {
        return gl::DrawElementsContextANGLE(ctx, mode, count, type, indices);
    }

    void GL_APIENTRY glDrawElementsIndirectContextANGLE(GLeglContext ctx,
                                                        GLenum mode,
                                                        GLenum type,
                                                        const void *indirect)
    {
        return gl::DrawElementsIndirectContextANGLE(ctx, mode, type, indirect);
    }

    void GL_APIENTRY glDrawElementsInstancedContextANGLE(GLeglContext ctx,
                                                         GLenum mode,
                                                         GLsizei count,
                                                         GLenum type,
                                                         const void *indices,
                                                         GLsizei instancecount)
    {
        return gl::DrawElementsInstancedContextANGLE(ctx, mode, count, type, indices, instancecount);
    }

    void GL_APIENTRY glDrawElementsInstancedANGLEContextANGLE(GLeglContext ctx,
                                                              GLenum mode,
                                                              GLsizei count,
                                                              GLenum type,
                                                              const void *indices,
                                                              GLsizei primcount)
    {
        return gl::DrawElementsInstancedANGLEContextANGLE(ctx, mode, count, type, indices, primcount);
    }

    void GL_APIENTRY glDrawElementsInstancedEXTContextANGLE(GLeglContext ctx,
                                                            GLenum mode,
                                                            GLsizei count,
                                                            GLenum type,
                                                            const void *indices,
                                                            GLsizei primcount)
    {
        return gl::DrawElementsInstancedEXTContextANGLE(ctx, mode, count, type, indices, primcount);
    }

    void GL_APIENTRY glDrawRangeElementsContextANGLE(GLeglContext ctx,
                                                     GLenum mode,
                                                     GLuint start,
                                                     GLuint end,
                                                     GLsizei count,
                                                     GLenum type,
                                                     const void *indices)
    {
        return gl::DrawRangeElementsContextANGLE(ctx, mode, start, end, count, type, indices);
    }

    void GL_APIENTRY glDrawTexfOESContextANGLE(GLeglContext ctx,
                                               GLfloat x,
                                               GLfloat y,
                                               GLfloat z,
                                               GLfloat width,
                                               GLfloat height)
    {
        return gl::DrawTexfOESContextANGLE(ctx, x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexfvOESContextANGLE(GLeglContext ctx, const GLfloat *coords)
    {
        return gl::DrawTexfvOESContextANGLE(ctx, coords);
    }

    void GL_APIENTRY
    glDrawTexiOESContextANGLE(GLeglContext ctx, GLint x, GLint y, GLint z, GLint width, GLint height)
    {
        return gl::DrawTexiOESContextANGLE(ctx, x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexivOESContextANGLE(GLeglContext ctx, const GLint *coords)
    {
        return gl::DrawTexivOESContextANGLE(ctx, coords);
    }

    void GL_APIENTRY glDrawTexsOESContextANGLE(GLeglContext ctx,
                                               GLshort x,
                                               GLshort y,
                                               GLshort z,
                                               GLshort width,
                                               GLshort height)
    {
        return gl::DrawTexsOESContextANGLE(ctx, x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexsvOESContextANGLE(GLeglContext ctx, const GLshort *coords)
    {
        return gl::DrawTexsvOESContextANGLE(ctx, coords);
    }

    void GL_APIENTRY glDrawTexxOESContextANGLE(GLeglContext ctx,
                                               GLfixed x,
                                               GLfixed y,
                                               GLfixed z,
                                               GLfixed width,
                                               GLfixed height)
    {
        return gl::DrawTexxOESContextANGLE(ctx, x, y, z, width, height);
    }

    void GL_APIENTRY glDrawTexxvOESContextANGLE(GLeglContext ctx, const GLfixed *coords)
    {
        return gl::DrawTexxvOESContextANGLE(ctx, coords);
    }

    void GL_APIENTRY glEGLImageTargetRenderbufferStorageOESContextANGLE(GLeglContext ctx,
                                                                        GLenum target,
                                                                        GLeglImageOES image)
    {
        return gl::EGLImageTargetRenderbufferStorageOESContextANGLE(ctx, target, image);
    }

    void GL_APIENTRY glEGLImageTargetTexture2DOESContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLeglImageOES image)
    {
        return gl::EGLImageTargetTexture2DOESContextANGLE(ctx, target, image);
    }

    void GL_APIENTRY glEnableContextANGLE(GLeglContext ctx, GLenum cap)
    {
        return gl::EnableContextANGLE(ctx, cap);
    }

    void GL_APIENTRY glEnableClientStateContextANGLE(GLeglContext ctx, GLenum array)
    {
        return gl::EnableClientStateContextANGLE(ctx, array);
    }

    void GL_APIENTRY glEnableVertexAttribArrayContextANGLE(GLeglContext ctx, GLuint index)
    {
        return gl::EnableVertexAttribArrayContextANGLE(ctx, index);
    }

    void GL_APIENTRY glEndQueryContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::EndQueryContextANGLE(ctx, target);
    }

    void GL_APIENTRY glEndQueryEXTContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::EndQueryEXTContextANGLE(ctx, target);
    }

    void GL_APIENTRY glEndTransformFeedbackContextANGLE(GLeglContext ctx)
    {
        return gl::EndTransformFeedbackContextANGLE(ctx);
    }

    GLsync GL_APIENTRY glFenceSyncContextANGLE(GLeglContext ctx, GLenum condition, GLbitfield flags)
    {
        return gl::FenceSyncContextANGLE(ctx, condition, flags);
    }

    void GL_APIENTRY glFinishContextANGLE(GLeglContext ctx)
    {
        return gl::FinishContextANGLE(ctx);
    }

    void GL_APIENTRY glFinishFenceNVContextANGLE(GLeglContext ctx, GLuint fence)
    {
        return gl::FinishFenceNVContextANGLE(ctx, fence);
    }

    void GL_APIENTRY glFlushContextANGLE(GLeglContext ctx)
    {
        return gl::FlushContextANGLE(ctx);
    }

    void GL_APIENTRY glFlushMappedBufferRangeContextANGLE(GLeglContext ctx,
                                                          GLenum target,
                                                          GLintptr offset,
                                                          GLsizeiptr length)
    {
        return gl::FlushMappedBufferRangeContextANGLE(ctx, target, offset, length);
    }

    void GL_APIENTRY glFlushMappedBufferRangeEXTContextANGLE(GLeglContext ctx,
                                                             GLenum target,
                                                             GLintptr offset,
                                                             GLsizeiptr length)
    {
        return gl::FlushMappedBufferRangeEXTContextANGLE(ctx, target, offset, length);
    }

    void GL_APIENTRY glFogfContextANGLE(GLeglContext ctx, GLenum pname, GLfloat param)
    {
        return gl::FogfContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glFogfvContextANGLE(GLeglContext ctx, GLenum pname, const GLfloat *params)
    {
        return gl::FogfvContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glFogxContextANGLE(GLeglContext ctx, GLenum pname, GLfixed param)
    {
        return gl::FogxContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glFogxvContextANGLE(GLeglContext ctx, GLenum pname, const GLfixed *param)
    {
        return gl::FogxvContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glFramebufferParameteriContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLenum pname,
                                                         GLint param)
    {
        return gl::FramebufferParameteriContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glFramebufferRenderbufferContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLenum attachment,
                                                           GLenum renderbuffertarget,
                                                           GLuint renderbuffer)
    {
        return gl::FramebufferRenderbufferContextANGLE(ctx, target, attachment, renderbuffertarget,
                                                       renderbuffer);
    }

    void GL_APIENTRY glFramebufferRenderbufferOESContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLenum attachment,
                                                              GLenum renderbuffertarget,
                                                              GLuint renderbuffer)
    {
        return gl::FramebufferRenderbufferOESContextANGLE(ctx, target, attachment, renderbuffertarget,
                                                          renderbuffer);
    }

    void GL_APIENTRY glFramebufferTexture2DContextANGLE(GLeglContext ctx,
                                                        GLenum target,
                                                        GLenum attachment,
                                                        GLenum textarget,
                                                        GLuint texture,
                                                        GLint level)
    {
        return gl::FramebufferTexture2DContextANGLE(ctx, target, attachment, textarget, texture, level);
    }

    void GL_APIENTRY glFramebufferTexture2DMultisampleEXTContextANGLE(GLeglContext ctx,
                                                                      GLenum target,
                                                                      GLenum attachment,
                                                                      GLenum textarget,
                                                                      GLuint texture,
                                                                      GLint level,
                                                                      GLsizei samples)
    {
        return gl::FramebufferTexture2DMultisampleEXTContextANGLE(ctx, target, attachment, textarget,
                                                                  texture, level, samples);
    }

    void GL_APIENTRY glFramebufferTexture2DOESContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLenum attachment,
                                                           GLenum textarget,
                                                           GLuint texture,
                                                           GLint level)
    {
        return gl::FramebufferTexture2DOESContextANGLE(ctx, target, attachment, textarget, texture,
                                                       level);
    }

    void GL_APIENTRY glFramebufferTexture3DOESContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLenum attachment,
                                                           GLenum textarget,
                                                           GLuint texture,
                                                           GLint level,
                                                           GLint zoffset)
    {
        return gl::FramebufferTexture3DOESContextANGLE(ctx, target, attachment, textarget, texture,
                                                       level, zoffset);
    }

    void GL_APIENTRY glFramebufferTextureEXTContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLenum attachment,
                                                         GLuint texture,
                                                         GLint level)
    {
        return gl::FramebufferTextureEXTContextANGLE(ctx, target, attachment, texture, level);
    }

    void GL_APIENTRY glFramebufferTextureLayerContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLenum attachment,
                                                           GLuint texture,
                                                           GLint level,
                                                           GLint layer)
    {
        return gl::FramebufferTextureLayerContextANGLE(ctx, target, attachment, texture, level, layer);
    }

    void GL_APIENTRY glFramebufferTextureMultiviewOVRContextANGLE(GLeglContext ctx,
                                                                  GLenum target,
                                                                  GLenum attachment,
                                                                  GLuint texture,
                                                                  GLint level,
                                                                  GLint baseViewIndex,
                                                                  GLsizei numViews)
    {
        return gl::FramebufferTextureMultiviewOVRContextANGLE(ctx, target, attachment, texture, level,
                                                              baseViewIndex, numViews);
    }

    void GL_APIENTRY glFrontFaceContextANGLE(GLeglContext ctx, GLenum mode)
    {
        return gl::FrontFaceContextANGLE(ctx, mode);
    }

    void GL_APIENTRY glFrustumfContextANGLE(GLeglContext ctx,
                                            GLfloat l,
                                            GLfloat r,
                                            GLfloat b,
                                            GLfloat t,
                                            GLfloat n,
                                            GLfloat f)
    {
        return gl::FrustumfContextANGLE(ctx, l, r, b, t, n, f);
    }

    void GL_APIENTRY glFrustumxContextANGLE(GLeglContext ctx,
                                            GLfixed l,
                                            GLfixed r,
                                            GLfixed b,
                                            GLfixed t,
                                            GLfixed n,
                                            GLfixed f)
    {
        return gl::FrustumxContextANGLE(ctx, l, r, b, t, n, f);
    }

    void GL_APIENTRY glGenBuffersContextANGLE(GLeglContext ctx, GLsizei n, GLuint *buffers)
    {
        return gl::GenBuffersContextANGLE(ctx, n, buffers);
    }

    void GL_APIENTRY glGenFencesNVContextANGLE(GLeglContext ctx, GLsizei n, GLuint *fences)
    {
        return gl::GenFencesNVContextANGLE(ctx, n, fences);
    }

    void GL_APIENTRY glGenFramebuffersContextANGLE(GLeglContext ctx, GLsizei n, GLuint *framebuffers)
    {
        return gl::GenFramebuffersContextANGLE(ctx, n, framebuffers);
    }

    void GL_APIENTRY glGenFramebuffersOESContextANGLE(GLeglContext ctx, GLsizei n, GLuint *framebuffers)
    {
        return gl::GenFramebuffersOESContextANGLE(ctx, n, framebuffers);
    }

    void GL_APIENTRY glGenProgramPipelinesContextANGLE(GLeglContext ctx, GLsizei n, GLuint *pipelines)
    {
        return gl::GenProgramPipelinesContextANGLE(ctx, n, pipelines);
    }

    void GL_APIENTRY glGenQueriesContextANGLE(GLeglContext ctx, GLsizei n, GLuint *ids)
    {
        return gl::GenQueriesContextANGLE(ctx, n, ids);
    }

    void GL_APIENTRY glGenQueriesEXTContextANGLE(GLeglContext ctx, GLsizei n, GLuint *ids)
    {
        return gl::GenQueriesEXTContextANGLE(ctx, n, ids);
    }

    void GL_APIENTRY glGenRenderbuffersContextANGLE(GLeglContext ctx, GLsizei n, GLuint *renderbuffers)
    {
        return gl::GenRenderbuffersContextANGLE(ctx, n, renderbuffers);
    }

    void GL_APIENTRY glGenRenderbuffersOESContextANGLE(GLeglContext ctx,
                                                       GLsizei n,
                                                       GLuint *renderbuffers)
    {
        return gl::GenRenderbuffersOESContextANGLE(ctx, n, renderbuffers);
    }

    void GL_APIENTRY glGenSamplersContextANGLE(GLeglContext ctx, GLsizei count, GLuint *samplers)
    {
        return gl::GenSamplersContextANGLE(ctx, count, samplers);
    }

    void GL_APIENTRY glGenSemaphoresEXTContextANGLE(GLeglContext ctx, GLsizei n, GLuint *semaphores)
    {
        return gl::GenSemaphoresEXTContextANGLE(ctx, n, semaphores);
    }

    void GL_APIENTRY glGenTexturesContextANGLE(GLeglContext ctx, GLsizei n, GLuint *textures)
    {
        return gl::GenTexturesContextANGLE(ctx, n, textures);
    }

    void GL_APIENTRY glGenTransformFeedbacksContextANGLE(GLeglContext ctx, GLsizei n, GLuint *ids)
    {
        return gl::GenTransformFeedbacksContextANGLE(ctx, n, ids);
    }

    void GL_APIENTRY glGenVertexArraysContextANGLE(GLeglContext ctx, GLsizei n, GLuint *arrays)
    {
        return gl::GenVertexArraysContextANGLE(ctx, n, arrays);
    }

    void GL_APIENTRY glGenVertexArraysOESContextANGLE(GLeglContext ctx, GLsizei n, GLuint *arrays)
    {
        return gl::GenVertexArraysOESContextANGLE(ctx, n, arrays);
    }

    void GL_APIENTRY glGenerateMipmapContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::GenerateMipmapContextANGLE(ctx, target);
    }

    void GL_APIENTRY glGenerateMipmapOESContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::GenerateMipmapOESContextANGLE(ctx, target);
    }

    void GL_APIENTRY glGetActiveAttribContextANGLE(GLeglContext ctx,
                                                   GLuint program,
                                                   GLuint index,
                                                   GLsizei bufSize,
                                                   GLsizei *length,
                                                   GLint *size,
                                                   GLenum *type,
                                                   GLchar *name)
    {
        return gl::GetActiveAttribContextANGLE(ctx, program, index, bufSize, length, size, type, name);
    }

    void GL_APIENTRY glGetActiveUniformContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLuint index,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLint *size,
                                                    GLenum *type,
                                                    GLchar *name)
    {
        return gl::GetActiveUniformContextANGLE(ctx, program, index, bufSize, length, size, type, name);
    }

    void GL_APIENTRY glGetActiveUniformBlockNameContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLuint uniformBlockIndex,
                                                             GLsizei bufSize,
                                                             GLsizei *length,
                                                             GLchar *uniformBlockName)
    {
        return gl::GetActiveUniformBlockNameContextANGLE(ctx, program, uniformBlockIndex, bufSize,
                                                         length, uniformBlockName);
    }

    void GL_APIENTRY glGetActiveUniformBlockivContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLuint uniformBlockIndex,
                                                           GLenum pname,
                                                           GLint *params)
    {
        return gl::GetActiveUniformBlockivContextANGLE(ctx, program, uniformBlockIndex, pname, params);
    }

    void GL_APIENTRY glGetActiveUniformsivContextANGLE(GLeglContext ctx,
                                                       GLuint program,
                                                       GLsizei uniformCount,
                                                       const GLuint *uniformIndices,
                                                       GLenum pname,
                                                       GLint *params)
    {
        return gl::GetActiveUniformsivContextANGLE(ctx, program, uniformCount, uniformIndices, pname,
                                                   params);
    }

    void GL_APIENTRY glGetAttachedShadersContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      GLsizei maxCount,
                                                      GLsizei *count,
                                                      GLuint *shaders)
    {
        return gl::GetAttachedShadersContextANGLE(ctx, program, maxCount, count, shaders);
    }

    GLint GL_APIENTRY glGetAttribLocationContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      const GLchar *name)
    {
        return gl::GetAttribLocationContextANGLE(ctx, program, name);
    }

    void GL_APIENTRY glGetBooleani_vContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLuint index,
                                                 GLboolean *data)
    {
        return gl::GetBooleani_vContextANGLE(ctx, target, index, data);
    }

    void GL_APIENTRY glGetBooleanvContextANGLE(GLeglContext ctx, GLenum pname, GLboolean *data)
    {
        return gl::GetBooleanvContextANGLE(ctx, pname, data);
    }

    void GL_APIENTRY glGetBufferParameteri64vContextANGLE(GLeglContext ctx,
                                                          GLenum target,
                                                          GLenum pname,
                                                          GLint64 *params)
    {
        return gl::GetBufferParameteri64vContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetBufferParameterivContextANGLE(GLeglContext ctx,
                                                        GLenum target,
                                                        GLenum pname,
                                                        GLint *params)
    {
        return gl::GetBufferParameterivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetBufferPointervContextANGLE(GLeglContext ctx,
                                                     GLenum target,
                                                     GLenum pname,
                                                     void **params)
    {
        return gl::GetBufferPointervContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetBufferPointervOESContextANGLE(GLeglContext ctx,
                                                        GLenum target,
                                                        GLenum pname,
                                                        void **params)
    {
        return gl::GetBufferPointervOESContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetClipPlanefContextANGLE(GLeglContext ctx, GLenum plane, GLfloat *equation)
    {
        return gl::GetClipPlanefContextANGLE(ctx, plane, equation);
    }

    void GL_APIENTRY glGetClipPlanexContextANGLE(GLeglContext ctx, GLenum plane, GLfixed *equation)
    {
        return gl::GetClipPlanexContextANGLE(ctx, plane, equation);
    }

    GLuint GL_APIENTRY glGetDebugMessageLogKHRContextANGLE(GLeglContext ctx,
                                                           GLuint count,
                                                           GLsizei bufSize,
                                                           GLenum *sources,
                                                           GLenum *types,
                                                           GLuint *ids,
                                                           GLenum *severities,
                                                           GLsizei *lengths,
                                                           GLchar *messageLog)
    {
        return gl::GetDebugMessageLogKHRContextANGLE(ctx, count, bufSize, sources, types, ids,
                                                     severities, lengths, messageLog);
    }

    GLenum GL_APIENTRY glGetErrorContextANGLE(GLeglContext ctx)
    {
        return gl::GetErrorContextANGLE(ctx);
    }

    void GL_APIENTRY glGetFenceivNVContextANGLE(GLeglContext ctx,
                                                GLuint fence,
                                                GLenum pname,
                                                GLint *params)
    {
        return gl::GetFenceivNVContextANGLE(ctx, fence, pname, params);
    }

    void GL_APIENTRY glGetFixedvContextANGLE(GLeglContext ctx, GLenum pname, GLfixed *params)
    {
        return gl::GetFixedvContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glGetFloatvContextANGLE(GLeglContext ctx, GLenum pname, GLfloat *data)
    {
        return gl::GetFloatvContextANGLE(ctx, pname, data);
    }

    GLint GL_APIENTRY glGetFragDataIndexEXTContextANGLE(GLeglContext ctx,
                                                        GLuint program,
                                                        const GLchar *name)
    {
        return gl::GetFragDataIndexEXTContextANGLE(ctx, program, name);
    }

    GLint GL_APIENTRY glGetFragDataLocationContextANGLE(GLeglContext ctx,
                                                        GLuint program,
                                                        const GLchar *name)
    {
        return gl::GetFragDataLocationContextANGLE(ctx, program, name);
    }

    void GL_APIENTRY glGetFramebufferAttachmentParameterivContextANGLE(GLeglContext ctx,
                                                                       GLenum target,
                                                                       GLenum attachment,
                                                                       GLenum pname,
                                                                       GLint *params)
    {
        return gl::GetFramebufferAttachmentParameterivContextANGLE(ctx, target, attachment, pname,
                                                                   params);
    }

    void GL_APIENTRY glGetFramebufferAttachmentParameterivOESContextANGLE(GLeglContext ctx,
                                                                          GLenum target,
                                                                          GLenum attachment,
                                                                          GLenum pname,
                                                                          GLint *params)
    {
        return gl::GetFramebufferAttachmentParameterivOESContextANGLE(ctx, target, attachment, pname,
                                                                      params);
    }

    void GL_APIENTRY glGetFramebufferParameterivContextANGLE(GLeglContext ctx,
                                                             GLenum target,
                                                             GLenum pname,
                                                             GLint *params)
    {
        return gl::GetFramebufferParameterivContextANGLE(ctx, target, pname, params);
    }

    GLenum GL_APIENTRY glGetGraphicsResetStatusEXTContextANGLE(GLeglContext ctx)
    {
        return gl::GetGraphicsResetStatusEXTContextANGLE(ctx);
    }

    void GL_APIENTRY glGetInteger64i_vContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLuint index,
                                                   GLint64 *data)
    {
        return gl::GetInteger64i_vContextANGLE(ctx, target, index, data);
    }

    void GL_APIENTRY glGetInteger64vContextANGLE(GLeglContext ctx, GLenum pname, GLint64 *data)
    {
        return gl::GetInteger64vContextANGLE(ctx, pname, data);
    }

    void GL_APIENTRY glGetIntegeri_vContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLuint index,
                                                 GLint *data)
    {
        return gl::GetIntegeri_vContextANGLE(ctx, target, index, data);
    }

    void GL_APIENTRY glGetIntegervContextANGLE(GLeglContext ctx, GLenum pname, GLint *data)
    {
        return gl::GetIntegervContextANGLE(ctx, pname, data);
    }

    void GL_APIENTRY glGetInternalformativContextANGLE(GLeglContext ctx,
                                                       GLenum target,
                                                       GLenum internalformat,
                                                       GLenum pname,
                                                       GLsizei bufSize,
                                                       GLint *params)
    {
        return gl::GetInternalformativContextANGLE(ctx, target, internalformat, pname, bufSize, params);
    }

    void GL_APIENTRY glGetLightfvContextANGLE(GLeglContext ctx,
                                              GLenum light,
                                              GLenum pname,
                                              GLfloat *params)
    {
        return gl::GetLightfvContextANGLE(ctx, light, pname, params);
    }

    void GL_APIENTRY glGetLightxvContextANGLE(GLeglContext ctx,
                                              GLenum light,
                                              GLenum pname,
                                              GLfixed *params)
    {
        return gl::GetLightxvContextANGLE(ctx, light, pname, params);
    }

    void GL_APIENTRY glGetMaterialfvContextANGLE(GLeglContext ctx,
                                                 GLenum face,
                                                 GLenum pname,
                                                 GLfloat *params)
    {
        return gl::GetMaterialfvContextANGLE(ctx, face, pname, params);
    }

    void GL_APIENTRY glGetMaterialxvContextANGLE(GLeglContext ctx,
                                                 GLenum face,
                                                 GLenum pname,
                                                 GLfixed *params)
    {
        return gl::GetMaterialxvContextANGLE(ctx, face, pname, params);
    }

    void GL_APIENTRY glGetMemoryObjectParameterivEXTContextANGLE(GLeglContext ctx,
                                                                 GLuint memoryObject,
                                                                 GLenum pname,
                                                                 GLint *params)
    {
        return gl::GetMemoryObjectParameterivEXTContextANGLE(ctx, memoryObject, pname, params);
    }

    void GL_APIENTRY glGetMultisamplefvContextANGLE(GLeglContext ctx,
                                                    GLenum pname,
                                                    GLuint index,
                                                    GLfloat *val)
    {
        return gl::GetMultisamplefvContextANGLE(ctx, pname, index, val);
    }

    void GL_APIENTRY glGetObjectLabelKHRContextANGLE(GLeglContext ctx,
                                                     GLenum identifier,
                                                     GLuint name,
                                                     GLsizei bufSize,
                                                     GLsizei *length,
                                                     GLchar *label)
    {
        return gl::GetObjectLabelKHRContextANGLE(ctx, identifier, name, bufSize, length, label);
    }

    void GL_APIENTRY glGetObjectPtrLabelKHRContextANGLE(GLeglContext ctx,
                                                        const void *ptr,
                                                        GLsizei bufSize,
                                                        GLsizei *length,
                                                        GLchar *label)
    {
        return gl::GetObjectPtrLabelKHRContextANGLE(ctx, ptr, bufSize, length, label);
    }

    void GL_APIENTRY glGetPointervContextANGLE(GLeglContext ctx, GLenum pname, void **params)
    {
        return gl::GetPointervContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glGetPointervKHRContextANGLE(GLeglContext ctx, GLenum pname, void **params)
    {
        return gl::GetPointervKHRContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glGetProgramBinaryContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLenum *binaryFormat,
                                                    void *binary)
    {
        return gl::GetProgramBinaryContextANGLE(ctx, program, bufSize, length, binaryFormat, binary);
    }

    void GL_APIENTRY glGetProgramBinaryOESContextANGLE(GLeglContext ctx,
                                                       GLuint program,
                                                       GLsizei bufSize,
                                                       GLsizei *length,
                                                       GLenum *binaryFormat,
                                                       void *binary)
    {
        return gl::GetProgramBinaryOESContextANGLE(ctx, program, bufSize, length, binaryFormat, binary);
    }

    void GL_APIENTRY glGetProgramInfoLogContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLsizei bufSize,
                                                     GLsizei *length,
                                                     GLchar *infoLog)
    {
        return gl::GetProgramInfoLogContextANGLE(ctx, program, bufSize, length, infoLog);
    }

    void GL_APIENTRY glGetProgramInterfaceivContextANGLE(GLeglContext ctx,
                                                         GLuint program,
                                                         GLenum programInterface,
                                                         GLenum pname,
                                                         GLint *params)
    {
        return gl::GetProgramInterfaceivContextANGLE(ctx, program, programInterface, pname, params);
    }

    void GL_APIENTRY glGetProgramPipelineInfoLogContextANGLE(GLeglContext ctx,
                                                             GLuint pipeline,
                                                             GLsizei bufSize,
                                                             GLsizei *length,
                                                             GLchar *infoLog)
    {
        return gl::GetProgramPipelineInfoLogContextANGLE(ctx, pipeline, bufSize, length, infoLog);
    }

    void GL_APIENTRY glGetProgramPipelineivContextANGLE(GLeglContext ctx,
                                                        GLuint pipeline,
                                                        GLenum pname,
                                                        GLint *params)
    {
        return gl::GetProgramPipelineivContextANGLE(ctx, pipeline, pname, params);
    }

    GLuint GL_APIENTRY glGetProgramResourceIndexContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLenum programInterface,
                                                             const GLchar *name)
    {
        return gl::GetProgramResourceIndexContextANGLE(ctx, program, programInterface, name);
    }

    GLint GL_APIENTRY glGetProgramResourceLocationContextANGLE(GLeglContext ctx,
                                                               GLuint program,
                                                               GLenum programInterface,
                                                               const GLchar *name)
    {
        return gl::GetProgramResourceLocationContextANGLE(ctx, program, programInterface, name);
    }

    GLint GL_APIENTRY glGetProgramResourceLocationIndexEXTContextANGLE(GLeglContext ctx,
                                                                       GLuint program,
                                                                       GLenum programInterface,
                                                                       const GLchar *name)
    {
        return gl::GetProgramResourceLocationIndexEXTContextANGLE(ctx, program, programInterface, name);
    }

    void GL_APIENTRY glGetProgramResourceNameContextANGLE(GLeglContext ctx,
                                                          GLuint program,
                                                          GLenum programInterface,
                                                          GLuint index,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLchar *name)
    {
        return gl::GetProgramResourceNameContextANGLE(ctx, program, programInterface, index, bufSize,
                                                      length, name);
    }

    void GL_APIENTRY glGetProgramResourceivContextANGLE(GLeglContext ctx,
                                                        GLuint program,
                                                        GLenum programInterface,
                                                        GLuint index,
                                                        GLsizei propCount,
                                                        const GLenum *props,
                                                        GLsizei bufSize,
                                                        GLsizei *length,
                                                        GLint *params)
    {
        return gl::GetProgramResourceivContextANGLE(ctx, program, programInterface, index, propCount,
                                                    props, bufSize, length, params);
    }

    void GL_APIENTRY glGetProgramivContextANGLE(GLeglContext ctx,
                                                GLuint program,
                                                GLenum pname,
                                                GLint *params)
    {
        return gl::GetProgramivContextANGLE(ctx, program, pname, params);
    }

    void GL_APIENTRY glGetQueryObjecti64vEXTContextANGLE(GLeglContext ctx,
                                                         GLuint id,
                                                         GLenum pname,
                                                         GLint64 *params)
    {
        return gl::GetQueryObjecti64vEXTContextANGLE(ctx, id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectivEXTContextANGLE(GLeglContext ctx,
                                                       GLuint id,
                                                       GLenum pname,
                                                       GLint *params)
    {
        return gl::GetQueryObjectivEXTContextANGLE(ctx, id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectui64vEXTContextANGLE(GLeglContext ctx,
                                                          GLuint id,
                                                          GLenum pname,
                                                          GLuint64 *params)
    {
        return gl::GetQueryObjectui64vEXTContextANGLE(ctx, id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectuivContextANGLE(GLeglContext ctx,
                                                     GLuint id,
                                                     GLenum pname,
                                                     GLuint *params)
    {
        return gl::GetQueryObjectuivContextANGLE(ctx, id, pname, params);
    }

    void GL_APIENTRY glGetQueryObjectuivEXTContextANGLE(GLeglContext ctx,
                                                        GLuint id,
                                                        GLenum pname,
                                                        GLuint *params)
    {
        return gl::GetQueryObjectuivEXTContextANGLE(ctx, id, pname, params);
    }

    void GL_APIENTRY glGetQueryivContextANGLE(GLeglContext ctx,
                                              GLenum target,
                                              GLenum pname,
                                              GLint *params)
    {
        return gl::GetQueryivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetQueryivEXTContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLenum pname,
                                                 GLint *params)
    {
        return gl::GetQueryivEXTContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetRenderbufferParameterivContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLenum pname,
                                                              GLint *params)
    {
        return gl::GetRenderbufferParameterivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetRenderbufferParameterivOESContextANGLE(GLeglContext ctx,
                                                                 GLenum target,
                                                                 GLenum pname,
                                                                 GLint *params)
    {
        return gl::GetRenderbufferParameterivOESContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameterIivOESContextANGLE(GLeglContext ctx,
                                                             GLuint sampler,
                                                             GLenum pname,
                                                             GLint *params)
    {
        return gl::GetSamplerParameterIivOESContextANGLE(ctx, sampler, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameterIuivOESContextANGLE(GLeglContext ctx,
                                                              GLuint sampler,
                                                              GLenum pname,
                                                              GLuint *params)
    {
        return gl::GetSamplerParameterIuivOESContextANGLE(ctx, sampler, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameterfvContextANGLE(GLeglContext ctx,
                                                         GLuint sampler,
                                                         GLenum pname,
                                                         GLfloat *params)
    {
        return gl::GetSamplerParameterfvContextANGLE(ctx, sampler, pname, params);
    }

    void GL_APIENTRY glGetSamplerParameterivContextANGLE(GLeglContext ctx,
                                                         GLuint sampler,
                                                         GLenum pname,
                                                         GLint *params)
    {
        return gl::GetSamplerParameterivContextANGLE(ctx, sampler, pname, params);
    }

    void GL_APIENTRY glGetSemaphoreParameterui64vEXTContextANGLE(GLeglContext ctx,
                                                                 GLuint semaphore,
                                                                 GLenum pname,
                                                                 GLuint64 *params)
    {
        return gl::GetSemaphoreParameterui64vEXTContextANGLE(ctx, semaphore, pname, params);
    }

    void GL_APIENTRY glGetShaderInfoLogContextANGLE(GLeglContext ctx,
                                                    GLuint shader,
                                                    GLsizei bufSize,
                                                    GLsizei *length,
                                                    GLchar *infoLog)
    {
        return gl::GetShaderInfoLogContextANGLE(ctx, shader, bufSize, length, infoLog);
    }

    void GL_APIENTRY glGetShaderPrecisionFormatContextANGLE(GLeglContext ctx,
                                                            GLenum shadertype,
                                                            GLenum precisiontype,
                                                            GLint *range,
                                                            GLint *precision)
    {
        return gl::GetShaderPrecisionFormatContextANGLE(ctx, shadertype, precisiontype, range,
                                                        precision);
    }

    void GL_APIENTRY glGetShaderSourceContextANGLE(GLeglContext ctx,
                                                   GLuint shader,
                                                   GLsizei bufSize,
                                                   GLsizei *length,
                                                   GLchar *source)
    {
        return gl::GetShaderSourceContextANGLE(ctx, shader, bufSize, length, source);
    }

    void GL_APIENTRY glGetShaderivContextANGLE(GLeglContext ctx,
                                               GLuint shader,
                                               GLenum pname,
                                               GLint *params)
    {
        return gl::GetShaderivContextANGLE(ctx, shader, pname, params);
    }

    const GLubyte *GL_APIENTRY glGetStringContextANGLE(GLeglContext ctx, GLenum name)
    {
        return gl::GetStringContextANGLE(ctx, name);
    }

    const GLubyte *GL_APIENTRY glGetStringiContextANGLE(GLeglContext ctx, GLenum name, GLuint index)
    {
        return gl::GetStringiContextANGLE(ctx, name, index);
    }

    void GL_APIENTRY glGetSyncivContextANGLE(GLeglContext ctx,
                                             GLsync sync,
                                             GLenum pname,
                                             GLsizei bufSize,
                                             GLsizei *length,
                                             GLint *values)
    {
        return gl::GetSyncivContextANGLE(ctx, sync, pname, bufSize, length, values);
    }

    void GL_APIENTRY glGetTexEnvfvContextANGLE(GLeglContext ctx,
                                               GLenum target,
                                               GLenum pname,
                                               GLfloat *params)
    {
        return gl::GetTexEnvfvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexEnvivContextANGLE(GLeglContext ctx,
                                               GLenum target,
                                               GLenum pname,
                                               GLint *params)
    {
        return gl::GetTexEnvivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexEnvxvContextANGLE(GLeglContext ctx,
                                               GLenum target,
                                               GLenum pname,
                                               GLfixed *params)
    {
        return gl::GetTexEnvxvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexGenfvOESContextANGLE(GLeglContext ctx,
                                                  GLenum coord,
                                                  GLenum pname,
                                                  GLfloat *params)
    {
        return gl::GetTexGenfvOESContextANGLE(ctx, coord, pname, params);
    }

    void GL_APIENTRY glGetTexGenivOESContextANGLE(GLeglContext ctx,
                                                  GLenum coord,
                                                  GLenum pname,
                                                  GLint *params)
    {
        return gl::GetTexGenivOESContextANGLE(ctx, coord, pname, params);
    }

    void GL_APIENTRY glGetTexGenxvOESContextANGLE(GLeglContext ctx,
                                                  GLenum coord,
                                                  GLenum pname,
                                                  GLfixed *params)
    {
        return gl::GetTexGenxvOESContextANGLE(ctx, coord, pname, params);
    }

    void GL_APIENTRY glGetTexLevelParameterfvContextANGLE(GLeglContext ctx,
                                                          GLenum target,
                                                          GLint level,
                                                          GLenum pname,
                                                          GLfloat *params)
    {
        return gl::GetTexLevelParameterfvContextANGLE(ctx, target, level, pname, params);
    }

    void GL_APIENTRY glGetTexLevelParameterivContextANGLE(GLeglContext ctx,
                                                          GLenum target,
                                                          GLint level,
                                                          GLenum pname,
                                                          GLint *params)
    {
        return gl::GetTexLevelParameterivContextANGLE(ctx, target, level, pname, params);
    }

    void GL_APIENTRY glGetTexParameterIivOESContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLenum pname,
                                                         GLint *params)
    {
        return gl::GetTexParameterIivOESContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexParameterIuivOESContextANGLE(GLeglContext ctx,
                                                          GLenum target,
                                                          GLenum pname,
                                                          GLuint *params)
    {
        return gl::GetTexParameterIuivOESContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexParameterfvContextANGLE(GLeglContext ctx,
                                                     GLenum target,
                                                     GLenum pname,
                                                     GLfloat *params)
    {
        return gl::GetTexParameterfvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexParameterivContextANGLE(GLeglContext ctx,
                                                     GLenum target,
                                                     GLenum pname,
                                                     GLint *params)
    {
        return gl::GetTexParameterivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTexParameterxvContextANGLE(GLeglContext ctx,
                                                     GLenum target,
                                                     GLenum pname,
                                                     GLfixed *params)
    {
        return gl::GetTexParameterxvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glGetTransformFeedbackVaryingContextANGLE(GLeglContext ctx,
                                                               GLuint program,
                                                               GLuint index,
                                                               GLsizei bufSize,
                                                               GLsizei *length,
                                                               GLsizei *size,
                                                               GLenum *type,
                                                               GLchar *name)
    {
        return gl::GetTransformFeedbackVaryingContextANGLE(ctx, program, index, bufSize, length, size,
                                                           type, name);
    }

    void GL_APIENTRY glGetTranslatedShaderSourceANGLEContextANGLE(GLeglContext ctx,
                                                                  GLuint shader,
                                                                  GLsizei bufsize,
                                                                  GLsizei *length,
                                                                  GLchar *source)
    {
        return gl::GetTranslatedShaderSourceANGLEContextANGLE(ctx, shader, bufsize, length, source);
    }

    GLuint GL_APIENTRY glGetUniformBlockIndexContextANGLE(GLeglContext ctx,
                                                          GLuint program,
                                                          const GLchar *uniformBlockName)
    {
        return gl::GetUniformBlockIndexContextANGLE(ctx, program, uniformBlockName);
    }

    void GL_APIENTRY glGetUniformIndicesContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLsizei uniformCount,
                                                     const GLchar *const *uniformNames,
                                                     GLuint *uniformIndices)
    {
        return gl::GetUniformIndicesContextANGLE(ctx, program, uniformCount, uniformNames,
                                                 uniformIndices);
    }

    GLint GL_APIENTRY glGetUniformLocationContextANGLE(GLeglContext ctx,
                                                       GLuint program,
                                                       const GLchar *name)
    {
        return gl::GetUniformLocationContextANGLE(ctx, program, name);
    }

    void GL_APIENTRY glGetUniformfvContextANGLE(GLeglContext ctx,
                                                GLuint program,
                                                GLint location,
                                                GLfloat *params)
    {
        return gl::GetUniformfvContextANGLE(ctx, program, location, params);
    }

    void GL_APIENTRY glGetUniformivContextANGLE(GLeglContext ctx,
                                                GLuint program,
                                                GLint location,
                                                GLint *params)
    {
        return gl::GetUniformivContextANGLE(ctx, program, location, params);
    }

    void GL_APIENTRY glGetUniformuivContextANGLE(GLeglContext ctx,
                                                 GLuint program,
                                                 GLint location,
                                                 GLuint *params)
    {
        return gl::GetUniformuivContextANGLE(ctx, program, location, params);
    }

    void GL_APIENTRY glGetUnsignedBytevEXTContextANGLE(GLeglContext ctx, GLenum pname, GLubyte *data)
    {
        return gl::GetUnsignedBytevEXTContextANGLE(ctx, pname, data);
    }

    void GL_APIENTRY glGetUnsignedBytei_vEXTContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLuint index,
                                                         GLubyte *data)
    {
        return gl::GetUnsignedBytei_vEXTContextANGLE(ctx, target, index, data);
    }

    void GL_APIENTRY glGetVertexAttribIivContextANGLE(GLeglContext ctx,
                                                      GLuint index,
                                                      GLenum pname,
                                                      GLint *params)
    {
        return gl::GetVertexAttribIivContextANGLE(ctx, index, pname, params);
    }

    void GL_APIENTRY glGetVertexAttribIuivContextANGLE(GLeglContext ctx,
                                                       GLuint index,
                                                       GLenum pname,
                                                       GLuint *params)
    {
        return gl::GetVertexAttribIuivContextANGLE(ctx, index, pname, params);
    }

    void GL_APIENTRY glGetVertexAttribPointervContextANGLE(GLeglContext ctx,
                                                           GLuint index,
                                                           GLenum pname,
                                                           void **pointer)
    {
        return gl::GetVertexAttribPointervContextANGLE(ctx, index, pname, pointer);
    }

    void GL_APIENTRY glGetVertexAttribfvContextANGLE(GLeglContext ctx,
                                                     GLuint index,
                                                     GLenum pname,
                                                     GLfloat *params)
    {
        return gl::GetVertexAttribfvContextANGLE(ctx, index, pname, params);
    }

    void GL_APIENTRY glGetVertexAttribivContextANGLE(GLeglContext ctx,
                                                     GLuint index,
                                                     GLenum pname,
                                                     GLint *params)
    {
        return gl::GetVertexAttribivContextANGLE(ctx, index, pname, params);
    }

    void GL_APIENTRY glGetnUniformfvEXTContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLsizei bufSize,
                                                    GLfloat *params)
    {
        return gl::GetnUniformfvEXTContextANGLE(ctx, program, location, bufSize, params);
    }

    void GL_APIENTRY glGetnUniformivEXTContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLsizei bufSize,
                                                    GLint *params)
    {
        return gl::GetnUniformivEXTContextANGLE(ctx, program, location, bufSize, params);
    }

    void GL_APIENTRY glHintContextANGLE(GLeglContext ctx, GLenum target, GLenum mode)
    {
        return gl::HintContextANGLE(ctx, target, mode);
    }

    void GL_APIENTRY glImportMemoryFdEXTContextANGLE(GLeglContext ctx,
                                                     GLuint memory,
                                                     GLuint64 size,
                                                     GLenum handleType,
                                                     GLint fd)
    {
        return gl::ImportMemoryFdEXTContextANGLE(ctx, memory, size, handleType, fd);
    }

    void GL_APIENTRY glImportSemaphoreFdEXTContextANGLE(GLeglContext ctx,
                                                        GLuint semaphore,
                                                        GLenum handleType,
                                                        GLint fd)
    {
        return gl::ImportSemaphoreFdEXTContextANGLE(ctx, semaphore, handleType, fd);
    }

    void GL_APIENTRY glInsertEventMarkerEXTContextANGLE(GLeglContext ctx,
                                                        GLsizei length,
                                                        const GLchar *marker)
    {
        return gl::InsertEventMarkerEXTContextANGLE(ctx, length, marker);
    }

    void GL_APIENTRY glInvalidateFramebufferContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLsizei numAttachments,
                                                         const GLenum *attachments)
    {
        return gl::InvalidateFramebufferContextANGLE(ctx, target, numAttachments, attachments);
    }

    void GL_APIENTRY glInvalidateSubFramebufferContextANGLE(GLeglContext ctx,
                                                            GLenum target,
                                                            GLsizei numAttachments,
                                                            const GLenum *attachments,
                                                            GLint x,
                                                            GLint y,
                                                            GLsizei width,
                                                            GLsizei height)
    {
        return gl::InvalidateSubFramebufferContextANGLE(ctx, target, numAttachments, attachments, x, y,
                                                        width, height);
    }

    GLboolean GL_APIENTRY glIsBufferContextANGLE(GLeglContext ctx, GLuint buffer)
    {
        return gl::IsBufferContextANGLE(ctx, buffer);
    }

    GLboolean GL_APIENTRY glIsEnabledContextANGLE(GLeglContext ctx, GLenum cap)
    {
        return gl::IsEnabledContextANGLE(ctx, cap);
    }

    GLboolean GL_APIENTRY glIsFenceNVContextANGLE(GLeglContext ctx, GLuint fence)
    {
        return gl::IsFenceNVContextANGLE(ctx, fence);
    }

    GLboolean GL_APIENTRY glIsFramebufferContextANGLE(GLeglContext ctx, GLuint framebuffer)
    {
        return gl::IsFramebufferContextANGLE(ctx, framebuffer);
    }

    GLboolean GL_APIENTRY glIsFramebufferOESContextANGLE(GLeglContext ctx, GLuint framebuffer)
    {
        return gl::IsFramebufferOESContextANGLE(ctx, framebuffer);
    }

    GLboolean GL_APIENTRY glIsMemoryObjectEXTContextANGLE(GLeglContext ctx, GLuint memoryObject)
    {
        return gl::IsMemoryObjectEXTContextANGLE(ctx, memoryObject);
    }

    GLboolean GL_APIENTRY glIsProgramContextANGLE(GLeglContext ctx, GLuint program)
    {
        return gl::IsProgramContextANGLE(ctx, program);
    }

    GLboolean GL_APIENTRY glIsProgramPipelineContextANGLE(GLeglContext ctx, GLuint pipeline)
    {
        return gl::IsProgramPipelineContextANGLE(ctx, pipeline);
    }

    GLboolean GL_APIENTRY glIsQueryContextANGLE(GLeglContext ctx, GLuint id)
    {
        return gl::IsQueryContextANGLE(ctx, id);
    }

    GLboolean GL_APIENTRY glIsQueryEXTContextANGLE(GLeglContext ctx, GLuint id)
    {
        return gl::IsQueryEXTContextANGLE(ctx, id);
    }

    GLboolean GL_APIENTRY glIsRenderbufferContextANGLE(GLeglContext ctx, GLuint renderbuffer)
    {
        return gl::IsRenderbufferContextANGLE(ctx, renderbuffer);
    }

    GLboolean GL_APIENTRY glIsRenderbufferOESContextANGLE(GLeglContext ctx, GLuint renderbuffer)
    {
        return gl::IsRenderbufferOESContextANGLE(ctx, renderbuffer);
    }

    GLboolean GL_APIENTRY glIsSemaphoreEXTContextANGLE(GLeglContext ctx, GLuint semaphore)
    {
        return gl::IsSemaphoreEXTContextANGLE(ctx, semaphore);
    }

    GLboolean GL_APIENTRY glIsSamplerContextANGLE(GLeglContext ctx, GLuint sampler)
    {
        return gl::IsSamplerContextANGLE(ctx, sampler);
    }

    GLboolean GL_APIENTRY glIsShaderContextANGLE(GLeglContext ctx, GLuint shader)
    {
        return gl::IsShaderContextANGLE(ctx, shader);
    }

    GLboolean GL_APIENTRY glIsSyncContextANGLE(GLeglContext ctx, GLsync sync)
    {
        return gl::IsSyncContextANGLE(ctx, sync);
    }

    GLboolean GL_APIENTRY glIsTextureContextANGLE(GLeglContext ctx, GLuint texture)
    {
        return gl::IsTextureContextANGLE(ctx, texture);
    }

    GLboolean GL_APIENTRY glIsTransformFeedbackContextANGLE(GLeglContext ctx, GLuint id)
    {
        return gl::IsTransformFeedbackContextANGLE(ctx, id);
    }

    GLboolean GL_APIENTRY glIsVertexArrayContextANGLE(GLeglContext ctx, GLuint array)
    {
        return gl::IsVertexArrayContextANGLE(ctx, array);
    }

    GLboolean GL_APIENTRY glIsVertexArrayOESContextANGLE(GLeglContext ctx, GLuint array)
    {
        return gl::IsVertexArrayOESContextANGLE(ctx, array);
    }

    void GL_APIENTRY glLightModelfContextANGLE(GLeglContext ctx, GLenum pname, GLfloat param)
    {
        return gl::LightModelfContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glLightModelfvContextANGLE(GLeglContext ctx, GLenum pname, const GLfloat *params)
    {
        return gl::LightModelfvContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glLightModelxContextANGLE(GLeglContext ctx, GLenum pname, GLfixed param)
    {
        return gl::LightModelxContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glLightModelxvContextANGLE(GLeglContext ctx, GLenum pname, const GLfixed *param)
    {
        return gl::LightModelxvContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glLightfContextANGLE(GLeglContext ctx, GLenum light, GLenum pname, GLfloat param)
    {
        return gl::LightfContextANGLE(ctx, light, pname, param);
    }

    void GL_APIENTRY glLightfvContextANGLE(GLeglContext ctx,
                                           GLenum light,
                                           GLenum pname,
                                           const GLfloat *params)
    {
        return gl::LightfvContextANGLE(ctx, light, pname, params);
    }

    void GL_APIENTRY glLightxContextANGLE(GLeglContext ctx, GLenum light, GLenum pname, GLfixed param)
    {
        return gl::LightxContextANGLE(ctx, light, pname, param);
    }

    void GL_APIENTRY glLightxvContextANGLE(GLeglContext ctx,
                                           GLenum light,
                                           GLenum pname,
                                           const GLfixed *params)
    {
        return gl::LightxvContextANGLE(ctx, light, pname, params);
    }

    void GL_APIENTRY glLineWidthContextANGLE(GLeglContext ctx, GLfloat width)
    {
        return gl::LineWidthContextANGLE(ctx, width);
    }

    void GL_APIENTRY glLineWidthxContextANGLE(GLeglContext ctx, GLfixed width)
    {
        return gl::LineWidthxContextANGLE(ctx, width);
    }

    void GL_APIENTRY glLinkProgramContextANGLE(GLeglContext ctx, GLuint program)
    {
        return gl::LinkProgramContextANGLE(ctx, program);
    }

    void GL_APIENTRY glLoadIdentityContextANGLE(GLeglContext ctx)
    {
        return gl::LoadIdentityContextANGLE(ctx);
    }

    void GL_APIENTRY glLoadMatrixfContextANGLE(GLeglContext ctx, const GLfloat *m)
    {
        return gl::LoadMatrixfContextANGLE(ctx, m);
    }

    void GL_APIENTRY glLoadMatrixxContextANGLE(GLeglContext ctx, const GLfixed *m)
    {
        return gl::LoadMatrixxContextANGLE(ctx, m);
    }

    void GL_APIENTRY glLoadPaletteFromModelViewMatrixOESContextANGLE(GLeglContext ctx)
    {
        return gl::LoadPaletteFromModelViewMatrixOESContextANGLE(ctx);
    }

    void GL_APIENTRY glLogicOpContextANGLE(GLeglContext ctx, GLenum opcode)
    {
        return gl::LogicOpContextANGLE(ctx, opcode);
    }

    void *GL_APIENTRY glMapBufferOESContextANGLE(GLeglContext ctx, GLenum target, GLenum access)
    {
        return gl::MapBufferOESContextANGLE(ctx, target, access);
    }

    void *GL_APIENTRY glMapBufferRangeContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLintptr offset,
                                                   GLsizeiptr length,
                                                   GLbitfield access)
    {
        return gl::MapBufferRangeContextANGLE(ctx, target, offset, length, access);
    }

    void *GL_APIENTRY glMapBufferRangeEXTContextANGLE(GLeglContext ctx,
                                                      GLenum target,
                                                      GLintptr offset,
                                                      GLsizeiptr length,
                                                      GLbitfield access)
    {
        return gl::MapBufferRangeEXTContextANGLE(ctx, target, offset, length, access);
    }

    void GL_APIENTRY glMaterialfContextANGLE(GLeglContext ctx, GLenum face, GLenum pname, GLfloat param)
    {
        return gl::MaterialfContextANGLE(ctx, face, pname, param);
    }

    void GL_APIENTRY glMaterialfvContextANGLE(GLeglContext ctx,
                                              GLenum face,
                                              GLenum pname,
                                              const GLfloat *params)
    {
        return gl::MaterialfvContextANGLE(ctx, face, pname, params);
    }

    void GL_APIENTRY glMaterialxContextANGLE(GLeglContext ctx, GLenum face, GLenum pname, GLfixed param)
    {
        return gl::MaterialxContextANGLE(ctx, face, pname, param);
    }

    void GL_APIENTRY glMaterialxvContextANGLE(GLeglContext ctx,
                                              GLenum face,
                                              GLenum pname,
                                              const GLfixed *param)
    {
        return gl::MaterialxvContextANGLE(ctx, face, pname, param);
    }

    void GL_APIENTRY glMatrixIndexPointerOESContextANGLE(GLeglContext ctx,
                                                         GLint size,
                                                         GLenum type,
                                                         GLsizei stride,
                                                         const void *pointer)
    {
        return gl::MatrixIndexPointerOESContextANGLE(ctx, size, type, stride, pointer);
    }

    void GL_APIENTRY glMatrixModeContextANGLE(GLeglContext ctx, GLenum mode)
    {
        return gl::MatrixModeContextANGLE(ctx, mode);
    }

    void GL_APIENTRY glMaxShaderCompilerThreadsKHRContextANGLE(GLeglContext ctx, GLuint count)
    {
        return gl::MaxShaderCompilerThreadsKHRContextANGLE(ctx, count);
    }

    void GL_APIENTRY glMemoryBarrierContextANGLE(GLeglContext ctx, GLbitfield barriers)
    {
        return gl::MemoryBarrierContextANGLE(ctx, barriers);
    }

    void GL_APIENTRY glMemoryBarrierByRegionContextANGLE(GLeglContext ctx, GLbitfield barriers)
    {
        return gl::MemoryBarrierByRegionContextANGLE(ctx, barriers);
    }

    void GL_APIENTRY glMemoryObjectParameterivEXTContextANGLE(GLeglContext ctx,
                                                              GLuint memoryObject,
                                                              GLenum pname,
                                                              const GLint *params)
    {
        return gl::MemoryObjectParameterivEXTContextANGLE(ctx, memoryObject, pname, params);
    }

    void GL_APIENTRY glMultMatrixfContextANGLE(GLeglContext ctx, const GLfloat *m)
    {
        return gl::MultMatrixfContextANGLE(ctx, m);
    }

    void GL_APIENTRY glMultMatrixxContextANGLE(GLeglContext ctx, const GLfixed *m)
    {
        return gl::MultMatrixxContextANGLE(ctx, m);
    }

    void GL_APIENTRY glMultiTexCoord4fContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLfloat s,
                                                   GLfloat t,
                                                   GLfloat r,
                                                   GLfloat q)
    {
        return gl::MultiTexCoord4fContextANGLE(ctx, target, s, t, r, q);
    }

    void GL_APIENTRY glMultiTexCoord4xContextANGLE(GLeglContext ctx,
                                                   GLenum texture,
                                                   GLfixed s,
                                                   GLfixed t,
                                                   GLfixed r,
                                                   GLfixed q)
    {
        return gl::MultiTexCoord4xContextANGLE(ctx, texture, s, t, r, q);
    }

    void GL_APIENTRY glNormal3fContextANGLE(GLeglContext ctx, GLfloat nx, GLfloat ny, GLfloat nz)
    {
        return gl::Normal3fContextANGLE(ctx, nx, ny, nz);
    }

    void GL_APIENTRY glNormal3xContextANGLE(GLeglContext ctx, GLfixed nx, GLfixed ny, GLfixed nz)
    {
        return gl::Normal3xContextANGLE(ctx, nx, ny, nz);
    }

    void GL_APIENTRY glNormalPointerContextANGLE(GLeglContext ctx,
                                                 GLenum type,
                                                 GLsizei stride,
                                                 const void *pointer)
    {
        return gl::NormalPointerContextANGLE(ctx, type, stride, pointer);
    }

    void GL_APIENTRY glObjectLabelKHRContextANGLE(GLeglContext ctx,
                                                  GLenum identifier,
                                                  GLuint name,
                                                  GLsizei length,
                                                  const GLchar *label)
    {
        return gl::ObjectLabelKHRContextANGLE(ctx, identifier, name, length, label);
    }

    void GL_APIENTRY glObjectPtrLabelKHRContextANGLE(GLeglContext ctx,
                                                     const void *ptr,
                                                     GLsizei length,
                                                     const GLchar *label)
    {
        return gl::ObjectPtrLabelKHRContextANGLE(ctx, ptr, length, label);
    }

    void GL_APIENTRY glOrthofContextANGLE(GLeglContext ctx,
                                          GLfloat l,
                                          GLfloat r,
                                          GLfloat b,
                                          GLfloat t,
                                          GLfloat n,
                                          GLfloat f)
    {
        return gl::OrthofContextANGLE(ctx, l, r, b, t, n, f);
    }

    void GL_APIENTRY glOrthoxContextANGLE(GLeglContext ctx,
                                          GLfixed l,
                                          GLfixed r,
                                          GLfixed b,
                                          GLfixed t,
                                          GLfixed n,
                                          GLfixed f)
    {
        return gl::OrthoxContextANGLE(ctx, l, r, b, t, n, f);
    }

    void GL_APIENTRY glPauseTransformFeedbackContextANGLE(GLeglContext ctx)
    {
        return gl::PauseTransformFeedbackContextANGLE(ctx);
    }

    void GL_APIENTRY glPixelStoreiContextANGLE(GLeglContext ctx, GLenum pname, GLint param)
    {
        return gl::PixelStoreiContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glPointParameterfContextANGLE(GLeglContext ctx, GLenum pname, GLfloat param)
    {
        return gl::PointParameterfContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glPointParameterfvContextANGLE(GLeglContext ctx,
                                                    GLenum pname,
                                                    const GLfloat *params)
    {
        return gl::PointParameterfvContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glPointParameterxContextANGLE(GLeglContext ctx, GLenum pname, GLfixed param)
    {
        return gl::PointParameterxContextANGLE(ctx, pname, param);
    }

    void GL_APIENTRY glPointParameterxvContextANGLE(GLeglContext ctx,
                                                    GLenum pname,
                                                    const GLfixed *params)
    {
        return gl::PointParameterxvContextANGLE(ctx, pname, params);
    }

    void GL_APIENTRY glPointSizeContextANGLE(GLeglContext ctx, GLfloat size)
    {
        return gl::PointSizeContextANGLE(ctx, size);
    }

    void GL_APIENTRY glPointSizePointerOESContextANGLE(GLeglContext ctx,
                                                       GLenum type,
                                                       GLsizei stride,
                                                       const void *pointer)
    {
        return gl::PointSizePointerOESContextANGLE(ctx, type, stride, pointer);
    }

    void GL_APIENTRY glPointSizexContextANGLE(GLeglContext ctx, GLfixed size)
    {
        return gl::PointSizexContextANGLE(ctx, size);
    }

    void GL_APIENTRY glPolygonOffsetContextANGLE(GLeglContext ctx, GLfloat factor, GLfloat units)
    {
        return gl::PolygonOffsetContextANGLE(ctx, factor, units);
    }

    void GL_APIENTRY glPolygonOffsetxContextANGLE(GLeglContext ctx, GLfixed factor, GLfixed units)
    {
        return gl::PolygonOffsetxContextANGLE(ctx, factor, units);
    }

    void GL_APIENTRY glPopDebugGroupKHRContextANGLE(GLeglContext ctx)
    {
        return gl::PopDebugGroupKHRContextANGLE(ctx);
    }

    void GL_APIENTRY glPopGroupMarkerEXTContextANGLE(GLeglContext ctx)
    {
        return gl::PopGroupMarkerEXTContextANGLE(ctx);
    }

    void GL_APIENTRY glPopMatrixContextANGLE(GLeglContext ctx)
    {
        return gl::PopMatrixContextANGLE(ctx);
    }

    void GL_APIENTRY glProgramBinaryContextANGLE(GLeglContext ctx,
                                                 GLuint program,
                                                 GLenum binaryFormat,
                                                 const void *binary,
                                                 GLsizei length)
    {
        return gl::ProgramBinaryContextANGLE(ctx, program, binaryFormat, binary, length);
    }

    void GL_APIENTRY glProgramBinaryOESContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLenum binaryFormat,
                                                    const void *binary,
                                                    GLint length)
    {
        return gl::ProgramBinaryOESContextANGLE(ctx, program, binaryFormat, binary, length);
    }

    void GL_APIENTRY glProgramParameteriContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLenum pname,
                                                     GLint value)
    {
        return gl::ProgramParameteriContextANGLE(ctx, program, pname, value);
    }

    void GL_APIENTRY glProgramUniform1fContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLfloat v0)
    {
        return gl::ProgramUniform1fContextANGLE(ctx, program, location, v0);
    }

    void GL_APIENTRY glProgramUniform1fvContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value)
    {
        return gl::ProgramUniform1fvContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform1iContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLint v0)
    {
        return gl::ProgramUniform1iContextANGLE(ctx, program, location, v0);
    }

    void GL_APIENTRY glProgramUniform1ivContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLint *value)
    {
        return gl::ProgramUniform1ivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform1uiContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLuint v0)
    {
        return gl::ProgramUniform1uiContextANGLE(ctx, program, location, v0);
    }

    void GL_APIENTRY glProgramUniform1uivContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      GLint location,
                                                      GLsizei count,
                                                      const GLuint *value)
    {
        return gl::ProgramUniform1uivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform2fContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLfloat v0,
                                                    GLfloat v1)
    {
        return gl::ProgramUniform2fContextANGLE(ctx, program, location, v0, v1);
    }

    void GL_APIENTRY glProgramUniform2fvContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value)
    {
        return gl::ProgramUniform2fvContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY
    glProgramUniform2iContextANGLE(GLeglContext ctx, GLuint program, GLint location, GLint v0, GLint v1)
    {
        return gl::ProgramUniform2iContextANGLE(ctx, program, location, v0, v1);
    }

    void GL_APIENTRY glProgramUniform2ivContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLint *value)
    {
        return gl::ProgramUniform2ivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform2uiContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLuint v0,
                                                     GLuint v1)
    {
        return gl::ProgramUniform2uiContextANGLE(ctx, program, location, v0, v1);
    }

    void GL_APIENTRY glProgramUniform2uivContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      GLint location,
                                                      GLsizei count,
                                                      const GLuint *value)
    {
        return gl::ProgramUniform2uivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform3fContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLfloat v0,
                                                    GLfloat v1,
                                                    GLfloat v2)
    {
        return gl::ProgramUniform3fContextANGLE(ctx, program, location, v0, v1, v2);
    }

    void GL_APIENTRY glProgramUniform3fvContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value)
    {
        return gl::ProgramUniform3fvContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform3iContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLint v0,
                                                    GLint v1,
                                                    GLint v2)
    {
        return gl::ProgramUniform3iContextANGLE(ctx, program, location, v0, v1, v2);
    }

    void GL_APIENTRY glProgramUniform3ivContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLint *value)
    {
        return gl::ProgramUniform3ivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform3uiContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLuint v0,
                                                     GLuint v1,
                                                     GLuint v2)
    {
        return gl::ProgramUniform3uiContextANGLE(ctx, program, location, v0, v1, v2);
    }

    void GL_APIENTRY glProgramUniform3uivContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      GLint location,
                                                      GLsizei count,
                                                      const GLuint *value)
    {
        return gl::ProgramUniform3uivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform4fContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLfloat v0,
                                                    GLfloat v1,
                                                    GLfloat v2,
                                                    GLfloat v3)
    {
        return gl::ProgramUniform4fContextANGLE(ctx, program, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glProgramUniform4fvContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLfloat *value)
    {
        return gl::ProgramUniform4fvContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform4iContextANGLE(GLeglContext ctx,
                                                    GLuint program,
                                                    GLint location,
                                                    GLint v0,
                                                    GLint v1,
                                                    GLint v2,
                                                    GLint v3)
    {
        return gl::ProgramUniform4iContextANGLE(ctx, program, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glProgramUniform4ivContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLsizei count,
                                                     const GLint *value)
    {
        return gl::ProgramUniform4ivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniform4uiContextANGLE(GLeglContext ctx,
                                                     GLuint program,
                                                     GLint location,
                                                     GLuint v0,
                                                     GLuint v1,
                                                     GLuint v2,
                                                     GLuint v3)
    {
        return gl::ProgramUniform4uiContextANGLE(ctx, program, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glProgramUniform4uivContextANGLE(GLeglContext ctx,
                                                      GLuint program,
                                                      GLint location,
                                                      GLsizei count,
                                                      const GLuint *value)
    {
        return gl::ProgramUniform4uivContextANGLE(ctx, program, location, count, value);
    }

    void GL_APIENTRY glProgramUniformMatrix2fvContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLfloat *value)
    {
        return gl::ProgramUniformMatrix2fvContextANGLE(ctx, program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix2x3fvContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value)
    {
        return gl::ProgramUniformMatrix2x3fvContextANGLE(ctx, program, location, count, transpose,
                                                         value);
    }

    void GL_APIENTRY glProgramUniformMatrix2x4fvContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value)
    {
        return gl::ProgramUniformMatrix2x4fvContextANGLE(ctx, program, location, count, transpose,
                                                         value);
    }

    void GL_APIENTRY glProgramUniformMatrix3fvContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLfloat *value)
    {
        return gl::ProgramUniformMatrix3fvContextANGLE(ctx, program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix3x2fvContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value)
    {
        return gl::ProgramUniformMatrix3x2fvContextANGLE(ctx, program, location, count, transpose,
                                                         value);
    }

    void GL_APIENTRY glProgramUniformMatrix3x4fvContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value)
    {
        return gl::ProgramUniformMatrix3x4fvContextANGLE(ctx, program, location, count, transpose,
                                                         value);
    }

    void GL_APIENTRY glProgramUniformMatrix4fvContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLint location,
                                                           GLsizei count,
                                                           GLboolean transpose,
                                                           const GLfloat *value)
    {
        return gl::ProgramUniformMatrix4fvContextANGLE(ctx, program, location, count, transpose, value);
    }

    void GL_APIENTRY glProgramUniformMatrix4x2fvContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value)
    {
        return gl::ProgramUniformMatrix4x2fvContextANGLE(ctx, program, location, count, transpose,
                                                         value);
    }

    void GL_APIENTRY glProgramUniformMatrix4x3fvContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei count,
                                                             GLboolean transpose,
                                                             const GLfloat *value)
    {
        return gl::ProgramUniformMatrix4x3fvContextANGLE(ctx, program, location, count, transpose,
                                                         value);
    }

    void GL_APIENTRY glPushDebugGroupKHRContextANGLE(GLeglContext ctx,
                                                     GLenum source,
                                                     GLuint id,
                                                     GLsizei length,
                                                     const GLchar *message)
    {
        return gl::PushDebugGroupKHRContextANGLE(ctx, source, id, length, message);
    }

    void GL_APIENTRY glPushGroupMarkerEXTContextANGLE(GLeglContext ctx,
                                                      GLsizei length,
                                                      const GLchar *marker)
    {
        return gl::PushGroupMarkerEXTContextANGLE(ctx, length, marker);
    }

    void GL_APIENTRY glPushMatrixContextANGLE(GLeglContext ctx)
    {
        return gl::PushMatrixContextANGLE(ctx);
    }

    void GL_APIENTRY glQueryCounterEXTContextANGLE(GLeglContext ctx, GLuint id, GLenum target)
    {
        return gl::QueryCounterEXTContextANGLE(ctx, id, target);
    }

    GLbitfield GL_APIENTRY glQueryMatrixxOESContextANGLE(GLeglContext ctx,
                                                         GLfixed *mantissa,
                                                         GLint *exponent)
    {
        return gl::QueryMatrixxOESContextANGLE(ctx, mantissa, exponent);
    }

    void GL_APIENTRY glReadBufferContextANGLE(GLeglContext ctx, GLenum src)
    {
        return gl::ReadBufferContextANGLE(ctx, src);
    }

    void GL_APIENTRY glReadPixelsContextANGLE(GLeglContext ctx,
                                              GLint x,
                                              GLint y,
                                              GLsizei width,
                                              GLsizei height,
                                              GLenum format,
                                              GLenum type,
                                              void *pixels)
    {
        return gl::ReadPixelsContextANGLE(ctx, x, y, width, height, format, type, pixels);
    }

    void GL_APIENTRY glReadnPixelsEXTContextANGLE(GLeglContext ctx,
                                                  GLint x,
                                                  GLint y,
                                                  GLsizei width,
                                                  GLsizei height,
                                                  GLenum format,
                                                  GLenum type,
                                                  GLsizei bufSize,
                                                  void *data)
    {
        return gl::ReadnPixelsEXTContextANGLE(ctx, x, y, width, height, format, type, bufSize, data);
    }

    void GL_APIENTRY glReleaseShaderCompilerContextANGLE(GLeglContext ctx)
    {
        return gl::ReleaseShaderCompilerContextANGLE(ctx);
    }

    void GL_APIENTRY glRenderbufferStorageContextANGLE(GLeglContext ctx,
                                                       GLenum target,
                                                       GLenum internalformat,
                                                       GLsizei width,
                                                       GLsizei height)
    {
        return gl::RenderbufferStorageContextANGLE(ctx, target, internalformat, width, height);
    }

    void GL_APIENTRY glRenderbufferStorageMultisampleContextANGLE(GLeglContext ctx,
                                                                  GLenum target,
                                                                  GLsizei samples,
                                                                  GLenum internalformat,
                                                                  GLsizei width,
                                                                  GLsizei height)
    {
        return gl::RenderbufferStorageMultisampleContextANGLE(ctx, target, samples, internalformat,
                                                              width, height);
    }

    void GL_APIENTRY glRenderbufferStorageMultisampleANGLEContextANGLE(GLeglContext ctx,
                                                                       GLenum target,
                                                                       GLsizei samples,
                                                                       GLenum internalformat,
                                                                       GLsizei width,
                                                                       GLsizei height)
    {
        return gl::RenderbufferStorageMultisampleANGLEContextANGLE(ctx, target, samples, internalformat,
                                                                   width, height);
    }

    void GL_APIENTRY glRenderbufferStorageMultisampleEXTContextANGLE(GLeglContext ctx,
                                                                     GLenum target,
                                                                     GLsizei samples,
                                                                     GLenum internalformat,
                                                                     GLsizei width,
                                                                     GLsizei height)
    {
        return gl::RenderbufferStorageMultisampleEXTContextANGLE(ctx, target, samples, internalformat,
                                                                 width, height);
    }

    void GL_APIENTRY glRenderbufferStorageOESContextANGLE(GLeglContext ctx,
                                                          GLenum target,
                                                          GLenum internalformat,
                                                          GLsizei width,
                                                          GLsizei height)
    {
        return gl::RenderbufferStorageOESContextANGLE(ctx, target, internalformat, width, height);
    }

    void GL_APIENTRY glResumeTransformFeedbackContextANGLE(GLeglContext ctx)
    {
        return gl::ResumeTransformFeedbackContextANGLE(ctx);
    }

    void GL_APIENTRY
    glRotatefContextANGLE(GLeglContext ctx, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::RotatefContextANGLE(ctx, angle, x, y, z);
    }

    void GL_APIENTRY
    glRotatexContextANGLE(GLeglContext ctx, GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
    {
        return gl::RotatexContextANGLE(ctx, angle, x, y, z);
    }

    void GL_APIENTRY glSampleCoverageContextANGLE(GLeglContext ctx, GLfloat value, GLboolean invert)
    {
        return gl::SampleCoverageContextANGLE(ctx, value, invert);
    }

    void GL_APIENTRY glSampleCoveragexContextANGLE(GLeglContext ctx, GLclampx value, GLboolean invert)
    {
        return gl::SampleCoveragexContextANGLE(ctx, value, invert);
    }

    void GL_APIENTRY glSampleMaskiContextANGLE(GLeglContext ctx, GLuint maskNumber, GLbitfield mask)
    {
        return gl::SampleMaskiContextANGLE(ctx, maskNumber, mask);
    }

    void GL_APIENTRY glSamplerParameterIivOESContextANGLE(GLeglContext ctx,
                                                          GLuint sampler,
                                                          GLenum pname,
                                                          const GLint *param)
    {
        return gl::SamplerParameterIivOESContextANGLE(ctx, sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameterIuivOESContextANGLE(GLeglContext ctx,
                                                           GLuint sampler,
                                                           GLenum pname,
                                                           const GLuint *param)
    {
        return gl::SamplerParameterIuivOESContextANGLE(ctx, sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameterfContextANGLE(GLeglContext ctx,
                                                     GLuint sampler,
                                                     GLenum pname,
                                                     GLfloat param)
    {
        return gl::SamplerParameterfContextANGLE(ctx, sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameterfvContextANGLE(GLeglContext ctx,
                                                      GLuint sampler,
                                                      GLenum pname,
                                                      const GLfloat *param)
    {
        return gl::SamplerParameterfvContextANGLE(ctx, sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameteriContextANGLE(GLeglContext ctx,
                                                     GLuint sampler,
                                                     GLenum pname,
                                                     GLint param)
    {
        return gl::SamplerParameteriContextANGLE(ctx, sampler, pname, param);
    }

    void GL_APIENTRY glSamplerParameterivContextANGLE(GLeglContext ctx,
                                                      GLuint sampler,
                                                      GLenum pname,
                                                      const GLint *param)
    {
        return gl::SamplerParameterivContextANGLE(ctx, sampler, pname, param);
    }

    void GL_APIENTRY glScalefContextANGLE(GLeglContext ctx, GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::ScalefContextANGLE(ctx, x, y, z);
    }

    void GL_APIENTRY glScalexContextANGLE(GLeglContext ctx, GLfixed x, GLfixed y, GLfixed z)
    {
        return gl::ScalexContextANGLE(ctx, x, y, z);
    }

    void GL_APIENTRY
    glScissorContextANGLE(GLeglContext ctx, GLint x, GLint y, GLsizei width, GLsizei height)
    {
        return gl::ScissorContextANGLE(ctx, x, y, width, height);
    }

    void GL_APIENTRY glSemaphoreParameterui64vEXTContextANGLE(GLeglContext ctx,
                                                              GLuint semaphore,
                                                              GLenum pname,
                                                              const GLuint64 *params)
    {
        return gl::SemaphoreParameterui64vEXTContextANGLE(ctx, semaphore, pname, params);
    }

    void GL_APIENTRY glSetFenceNVContextANGLE(GLeglContext ctx, GLuint fence, GLenum condition)
    {
        return gl::SetFenceNVContextANGLE(ctx, fence, condition);
    }

    void GL_APIENTRY glShadeModelContextANGLE(GLeglContext ctx, GLenum mode)
    {
        return gl::ShadeModelContextANGLE(ctx, mode);
    }

    void GL_APIENTRY glShaderBinaryContextANGLE(GLeglContext ctx,
                                                GLsizei count,
                                                const GLuint *shaders,
                                                GLenum binaryformat,
                                                const void *binary,
                                                GLsizei length)
    {
        return gl::ShaderBinaryContextANGLE(ctx, count, shaders, binaryformat, binary, length);
    }

    void GL_APIENTRY glShaderSourceContextANGLE(GLeglContext ctx,
                                                GLuint shader,
                                                GLsizei count,
                                                const GLchar *const *string,
                                                const GLint *length)
    {
        return gl::ShaderSourceContextANGLE(ctx, shader, count, string, length);
    }

    void GL_APIENTRY glSignalSemaphoreEXTContextANGLE(GLeglContext ctx,
                                                      GLuint semaphore,
                                                      GLuint numBufferBarriers,
                                                      const GLuint *buffers,
                                                      GLuint numTextureBarriers,
                                                      const GLuint *textures,
                                                      const GLenum *dstLayouts)
    {
        return gl::SignalSemaphoreEXTContextANGLE(ctx, semaphore, numBufferBarriers, buffers,
                                                  numTextureBarriers, textures, dstLayouts);
    }

    void GL_APIENTRY glStencilFuncContextANGLE(GLeglContext ctx, GLenum func, GLint ref, GLuint mask)
    {
        return gl::StencilFuncContextANGLE(ctx, func, ref, mask);
    }

    void GL_APIENTRY glStencilFuncSeparateContextANGLE(GLeglContext ctx,
                                                       GLenum face,
                                                       GLenum func,
                                                       GLint ref,
                                                       GLuint mask)
    {
        return gl::StencilFuncSeparateContextANGLE(ctx, face, func, ref, mask);
    }

    void GL_APIENTRY glStencilMaskContextANGLE(GLeglContext ctx, GLuint mask)
    {
        return gl::StencilMaskContextANGLE(ctx, mask);
    }

    void GL_APIENTRY glStencilMaskSeparateContextANGLE(GLeglContext ctx, GLenum face, GLuint mask)
    {
        return gl::StencilMaskSeparateContextANGLE(ctx, face, mask);
    }

    void GL_APIENTRY glStencilOpContextANGLE(GLeglContext ctx, GLenum fail, GLenum zfail, GLenum zpass)
    {
        return gl::StencilOpContextANGLE(ctx, fail, zfail, zpass);
    }

    void GL_APIENTRY glStencilOpSeparateContextANGLE(GLeglContext ctx,
                                                     GLenum face,
                                                     GLenum sfail,
                                                     GLenum dpfail,
                                                     GLenum dppass)
    {
        return gl::StencilOpSeparateContextANGLE(ctx, face, sfail, dpfail, dppass);
    }

    GLboolean GL_APIENTRY glTestFenceNVContextANGLE(GLeglContext ctx, GLuint fence)
    {
        return gl::TestFenceNVContextANGLE(ctx, fence);
    }

    void GL_APIENTRY glTexCoordPointerContextANGLE(GLeglContext ctx,
                                                   GLint size,
                                                   GLenum type,
                                                   GLsizei stride,
                                                   const void *pointer)
    {
        return gl::TexCoordPointerContextANGLE(ctx, size, type, stride, pointer);
    }

    void GL_APIENTRY glTexEnvfContextANGLE(GLeglContext ctx, GLenum target, GLenum pname, GLfloat param)
    {
        return gl::TexEnvfContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glTexEnvfvContextANGLE(GLeglContext ctx,
                                            GLenum target,
                                            GLenum pname,
                                            const GLfloat *params)
    {
        return gl::TexEnvfvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexEnviContextANGLE(GLeglContext ctx, GLenum target, GLenum pname, GLint param)
    {
        return gl::TexEnviContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glTexEnvivContextANGLE(GLeglContext ctx,
                                            GLenum target,
                                            GLenum pname,
                                            const GLint *params)
    {
        return gl::TexEnvivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexEnvxContextANGLE(GLeglContext ctx, GLenum target, GLenum pname, GLfixed param)
    {
        return gl::TexEnvxContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glTexEnvxvContextANGLE(GLeglContext ctx,
                                            GLenum target,
                                            GLenum pname,
                                            const GLfixed *params)
    {
        return gl::TexEnvxvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexGenfOESContextANGLE(GLeglContext ctx,
                                              GLenum coord,
                                              GLenum pname,
                                              GLfloat param)
    {
        return gl::TexGenfOESContextANGLE(ctx, coord, pname, param);
    }

    void GL_APIENTRY glTexGenfvOESContextANGLE(GLeglContext ctx,
                                               GLenum coord,
                                               GLenum pname,
                                               const GLfloat *params)
    {
        return gl::TexGenfvOESContextANGLE(ctx, coord, pname, params);
    }

    void GL_APIENTRY glTexGeniOESContextANGLE(GLeglContext ctx, GLenum coord, GLenum pname, GLint param)
    {
        return gl::TexGeniOESContextANGLE(ctx, coord, pname, param);
    }

    void GL_APIENTRY glTexGenivOESContextANGLE(GLeglContext ctx,
                                               GLenum coord,
                                               GLenum pname,
                                               const GLint *params)
    {
        return gl::TexGenivOESContextANGLE(ctx, coord, pname, params);
    }

    void GL_APIENTRY glTexGenxOESContextANGLE(GLeglContext ctx,
                                              GLenum coord,
                                              GLenum pname,
                                              GLfixed param)
    {
        return gl::TexGenxOESContextANGLE(ctx, coord, pname, param);
    }

    void GL_APIENTRY glTexGenxvOESContextANGLE(GLeglContext ctx,
                                               GLenum coord,
                                               GLenum pname,
                                               const GLfixed *params)
    {
        return gl::TexGenxvOESContextANGLE(ctx, coord, pname, params);
    }

    void GL_APIENTRY glTexImage2DContextANGLE(GLeglContext ctx,
                                              GLenum target,
                                              GLint level,
                                              GLint internalformat,
                                              GLsizei width,
                                              GLsizei height,
                                              GLint border,
                                              GLenum format,
                                              GLenum type,
                                              const void *pixels)
    {
        return gl::TexImage2DContextANGLE(ctx, target, level, internalformat, width, height, border,
                                          format, type, pixels);
    }

    void GL_APIENTRY glTexImage3DContextANGLE(GLeglContext ctx,
                                              GLenum target,
                                              GLint level,
                                              GLint internalformat,
                                              GLsizei width,
                                              GLsizei height,
                                              GLsizei depth,
                                              GLint border,
                                              GLenum format,
                                              GLenum type,
                                              const void *pixels)
    {
        return gl::TexImage3DContextANGLE(ctx, target, level, internalformat, width, height, depth,
                                          border, format, type, pixels);
    }

    void GL_APIENTRY glTexImage3DOESContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLint level,
                                                 GLenum internalformat,
                                                 GLsizei width,
                                                 GLsizei height,
                                                 GLsizei depth,
                                                 GLint border,
                                                 GLenum format,
                                                 GLenum type,
                                                 const void *pixels)
    {
        return gl::TexImage3DOESContextANGLE(ctx, target, level, internalformat, width, height, depth,
                                             border, format, type, pixels);
    }

    void GL_APIENTRY glTexParameterIivOESContextANGLE(GLeglContext ctx,
                                                      GLenum target,
                                                      GLenum pname,
                                                      const GLint *params)
    {
        return gl::TexParameterIivOESContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexParameterIuivOESContextANGLE(GLeglContext ctx,
                                                       GLenum target,
                                                       GLenum pname,
                                                       const GLuint *params)
    {
        return gl::TexParameterIuivOESContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexParameterfContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLenum pname,
                                                 GLfloat param)
    {
        return gl::TexParameterfContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glTexParameterfvContextANGLE(GLeglContext ctx,
                                                  GLenum target,
                                                  GLenum pname,
                                                  const GLfloat *params)
    {
        return gl::TexParameterfvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexParameteriContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLenum pname,
                                                 GLint param)
    {
        return gl::TexParameteriContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glTexParameterivContextANGLE(GLeglContext ctx,
                                                  GLenum target,
                                                  GLenum pname,
                                                  const GLint *params)
    {
        return gl::TexParameterivContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexParameterxContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLenum pname,
                                                 GLfixed param)
    {
        return gl::TexParameterxContextANGLE(ctx, target, pname, param);
    }

    void GL_APIENTRY glTexParameterxvContextANGLE(GLeglContext ctx,
                                                  GLenum target,
                                                  GLenum pname,
                                                  const GLfixed *params)
    {
        return gl::TexParameterxvContextANGLE(ctx, target, pname, params);
    }

    void GL_APIENTRY glTexStorage1DEXTContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLsizei levels,
                                                   GLenum internalformat,
                                                   GLsizei width)
    {
        return gl::TexStorage1DEXTContextANGLE(ctx, target, levels, internalformat, width);
    }

    void GL_APIENTRY glTexStorage2DContextANGLE(GLeglContext ctx,
                                                GLenum target,
                                                GLsizei levels,
                                                GLenum internalformat,
                                                GLsizei width,
                                                GLsizei height)
    {
        return gl::TexStorage2DContextANGLE(ctx, target, levels, internalformat, width, height);
    }

    void GL_APIENTRY glTexStorage2DEXTContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLsizei levels,
                                                   GLenum internalformat,
                                                   GLsizei width,
                                                   GLsizei height)
    {
        return gl::TexStorage2DEXTContextANGLE(ctx, target, levels, internalformat, width, height);
    }

    void GL_APIENTRY glTexStorage2DMultisampleContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLsizei samples,
                                                           GLenum internalformat,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLboolean fixedsamplelocations)
    {
        return gl::TexStorage2DMultisampleContextANGLE(ctx, target, samples, internalformat, width,
                                                       height, fixedsamplelocations);
    }

    void GL_APIENTRY glTexStorage3DContextANGLE(GLeglContext ctx,
                                                GLenum target,
                                                GLsizei levels,
                                                GLenum internalformat,
                                                GLsizei width,
                                                GLsizei height,
                                                GLsizei depth)
    {
        return gl::TexStorage3DContextANGLE(ctx, target, levels, internalformat, width, height, depth);
    }

    void GL_APIENTRY glTexStorage3DEXTContextANGLE(GLeglContext ctx,
                                                   GLenum target,
                                                   GLsizei levels,
                                                   GLenum internalformat,
                                                   GLsizei width,
                                                   GLsizei height,
                                                   GLsizei depth)
    {
        return gl::TexStorage3DEXTContextANGLE(ctx, target, levels, internalformat, width, height,
                                               depth);
    }

    void GL_APIENTRY glTexStorage3DMultisampleOESContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLsizei samples,
                                                              GLenum internalformat,
                                                              GLsizei width,
                                                              GLsizei height,
                                                              GLsizei depth,
                                                              GLboolean fixedsamplelocations)
    {
        return gl::TexStorage3DMultisampleOESContextANGLE(ctx, target, samples, internalformat, width,
                                                          height, depth, fixedsamplelocations);
    }

    void GL_APIENTRY glTexStorageMem2DEXTContextANGLE(GLeglContext ctx,
                                                      GLenum target,
                                                      GLsizei levels,
                                                      GLenum internalFormat,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLuint memory,
                                                      GLuint64 offset)
    {
        return gl::TexStorageMem2DEXTContextANGLE(ctx, target, levels, internalFormat, width, height,
                                                  memory, offset);
    }

    void GL_APIENTRY glTexStorageMem2DMultisampleEXTContextANGLE(GLeglContext ctx,
                                                                 GLenum target,
                                                                 GLsizei samples,
                                                                 GLenum internalFormat,
                                                                 GLsizei width,
                                                                 GLsizei height,
                                                                 GLboolean fixedSampleLocations,
                                                                 GLuint memory,
                                                                 GLuint64 offset)
    {
        return gl::TexStorageMem2DMultisampleEXTContextANGLE(
            ctx, target, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
    }

    void GL_APIENTRY glTexStorageMem3DEXTContextANGLE(GLeglContext ctx,
                                                      GLenum target,
                                                      GLsizei levels,
                                                      GLenum internalFormat,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLsizei depth,
                                                      GLuint memory,
                                                      GLuint64 offset)
    {
        return gl::TexStorageMem3DEXTContextANGLE(ctx, target, levels, internalFormat, width, height,
                                                  depth, memory, offset);
    }

    void GL_APIENTRY glTexStorageMem3DMultisampleEXTContextANGLE(GLeglContext ctx,
                                                                 GLenum target,
                                                                 GLsizei samples,
                                                                 GLenum internalFormat,
                                                                 GLsizei width,
                                                                 GLsizei height,
                                                                 GLsizei depth,
                                                                 GLboolean fixedSampleLocations,
                                                                 GLuint memory,
                                                                 GLuint64 offset)
    {
        return gl::TexStorageMem3DMultisampleEXTContextANGLE(ctx, target, samples, internalFormat,
                                                             width, height, depth, fixedSampleLocations,
                                                             memory, offset);
    }

    void GL_APIENTRY glTexSubImage2DContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLint level,
                                                 GLint xoffset,
                                                 GLint yoffset,
                                                 GLsizei width,
                                                 GLsizei height,
                                                 GLenum format,
                                                 GLenum type,
                                                 const void *pixels)
    {
        return gl::TexSubImage2DContextANGLE(ctx, target, level, xoffset, yoffset, width, height,
                                             format, type, pixels);
    }

    void GL_APIENTRY glTexSubImage3DContextANGLE(GLeglContext ctx,
                                                 GLenum target,
                                                 GLint level,
                                                 GLint xoffset,
                                                 GLint yoffset,
                                                 GLint zoffset,
                                                 GLsizei width,
                                                 GLsizei height,
                                                 GLsizei depth,
                                                 GLenum format,
                                                 GLenum type,
                                                 const void *pixels)
    {
        return gl::TexSubImage3DContextANGLE(ctx, target, level, xoffset, yoffset, zoffset, width,
                                             height, depth, format, type, pixels);
    }

    void GL_APIENTRY glTexSubImage3DOESContextANGLE(GLeglContext ctx,
                                                    GLenum target,
                                                    GLint level,
                                                    GLint xoffset,
                                                    GLint yoffset,
                                                    GLint zoffset,
                                                    GLsizei width,
                                                    GLsizei height,
                                                    GLsizei depth,
                                                    GLenum format,
                                                    GLenum type,
                                                    const void *pixels)
    {
        return gl::TexSubImage3DOESContextANGLE(ctx, target, level, xoffset, yoffset, zoffset, width,
                                                height, depth, format, type, pixels);
    }

    void GL_APIENTRY glTransformFeedbackVaryingsContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLsizei count,
                                                             const GLchar *const *varyings,
                                                             GLenum bufferMode)
    {
        return gl::TransformFeedbackVaryingsContextANGLE(ctx, program, count, varyings, bufferMode);
    }

    void GL_APIENTRY glTranslatefContextANGLE(GLeglContext ctx, GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::TranslatefContextANGLE(ctx, x, y, z);
    }

    void GL_APIENTRY glTranslatexContextANGLE(GLeglContext ctx, GLfixed x, GLfixed y, GLfixed z)
    {
        return gl::TranslatexContextANGLE(ctx, x, y, z);
    }

    void GL_APIENTRY glUniform1fContextANGLE(GLeglContext ctx, GLint location, GLfloat v0)
    {
        return gl::Uniform1fContextANGLE(ctx, location, v0);
    }

    void GL_APIENTRY glUniform1fvContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLfloat *value)
    {
        return gl::Uniform1fvContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform1iContextANGLE(GLeglContext ctx, GLint location, GLint v0)
    {
        return gl::Uniform1iContextANGLE(ctx, location, v0);
    }

    void GL_APIENTRY glUniform1ivContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLint *value)
    {
        return gl::Uniform1ivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform1uiContextANGLE(GLeglContext ctx, GLint location, GLuint v0)
    {
        return gl::Uniform1uiContextANGLE(ctx, location, v0);
    }

    void GL_APIENTRY glUniform1uivContextANGLE(GLeglContext ctx,
                                               GLint location,
                                               GLsizei count,
                                               const GLuint *value)
    {
        return gl::Uniform1uivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform2fContextANGLE(GLeglContext ctx, GLint location, GLfloat v0, GLfloat v1)
    {
        return gl::Uniform2fContextANGLE(ctx, location, v0, v1);
    }

    void GL_APIENTRY glUniform2fvContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLfloat *value)
    {
        return gl::Uniform2fvContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform2iContextANGLE(GLeglContext ctx, GLint location, GLint v0, GLint v1)
    {
        return gl::Uniform2iContextANGLE(ctx, location, v0, v1);
    }

    void GL_APIENTRY glUniform2ivContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLint *value)
    {
        return gl::Uniform2ivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform2uiContextANGLE(GLeglContext ctx, GLint location, GLuint v0, GLuint v1)
    {
        return gl::Uniform2uiContextANGLE(ctx, location, v0, v1);
    }

    void GL_APIENTRY glUniform2uivContextANGLE(GLeglContext ctx,
                                               GLint location,
                                               GLsizei count,
                                               const GLuint *value)
    {
        return gl::Uniform2uivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY
    glUniform3fContextANGLE(GLeglContext ctx, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
    {
        return gl::Uniform3fContextANGLE(ctx, location, v0, v1, v2);
    }

    void GL_APIENTRY glUniform3fvContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLfloat *value)
    {
        return gl::Uniform3fvContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY
    glUniform3iContextANGLE(GLeglContext ctx, GLint location, GLint v0, GLint v1, GLint v2)
    {
        return gl::Uniform3iContextANGLE(ctx, location, v0, v1, v2);
    }

    void GL_APIENTRY glUniform3ivContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLint *value)
    {
        return gl::Uniform3ivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY
    glUniform3uiContextANGLE(GLeglContext ctx, GLint location, GLuint v0, GLuint v1, GLuint v2)
    {
        return gl::Uniform3uiContextANGLE(ctx, location, v0, v1, v2);
    }

    void GL_APIENTRY glUniform3uivContextANGLE(GLeglContext ctx,
                                               GLint location,
                                               GLsizei count,
                                               const GLuint *value)
    {
        return gl::Uniform3uivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform4fContextANGLE(GLeglContext ctx,
                                             GLint location,
                                             GLfloat v0,
                                             GLfloat v1,
                                             GLfloat v2,
                                             GLfloat v3)
    {
        return gl::Uniform4fContextANGLE(ctx, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glUniform4fvContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLfloat *value)
    {
        return gl::Uniform4fvContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY
    glUniform4iContextANGLE(GLeglContext ctx, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
    {
        return gl::Uniform4iContextANGLE(ctx, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glUniform4ivContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLsizei count,
                                              const GLint *value)
    {
        return gl::Uniform4ivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniform4uiContextANGLE(GLeglContext ctx,
                                              GLint location,
                                              GLuint v0,
                                              GLuint v1,
                                              GLuint v2,
                                              GLuint v3)
    {
        return gl::Uniform4uiContextANGLE(ctx, location, v0, v1, v2, v3);
    }

    void GL_APIENTRY glUniform4uivContextANGLE(GLeglContext ctx,
                                               GLint location,
                                               GLsizei count,
                                               const GLuint *value)
    {
        return gl::Uniform4uivContextANGLE(ctx, location, count, value);
    }

    void GL_APIENTRY glUniformBlockBindingContextANGLE(GLeglContext ctx,
                                                       GLuint program,
                                                       GLuint uniformBlockIndex,
                                                       GLuint uniformBlockBinding)
    {
        return gl::UniformBlockBindingContextANGLE(ctx, program, uniformBlockIndex,
                                                   uniformBlockBinding);
    }

    void GL_APIENTRY glUniformMatrix2fvContextANGLE(GLeglContext ctx,
                                                    GLint location,
                                                    GLsizei count,
                                                    GLboolean transpose,
                                                    const GLfloat *value)
    {
        return gl::UniformMatrix2fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix2x3fvContextANGLE(GLeglContext ctx,
                                                      GLint location,
                                                      GLsizei count,
                                                      GLboolean transpose,
                                                      const GLfloat *value)
    {
        return gl::UniformMatrix2x3fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix2x4fvContextANGLE(GLeglContext ctx,
                                                      GLint location,
                                                      GLsizei count,
                                                      GLboolean transpose,
                                                      const GLfloat *value)
    {
        return gl::UniformMatrix2x4fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix3fvContextANGLE(GLeglContext ctx,
                                                    GLint location,
                                                    GLsizei count,
                                                    GLboolean transpose,
                                                    const GLfloat *value)
    {
        return gl::UniformMatrix3fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix3x2fvContextANGLE(GLeglContext ctx,
                                                      GLint location,
                                                      GLsizei count,
                                                      GLboolean transpose,
                                                      const GLfloat *value)
    {
        return gl::UniformMatrix3x2fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix3x4fvContextANGLE(GLeglContext ctx,
                                                      GLint location,
                                                      GLsizei count,
                                                      GLboolean transpose,
                                                      const GLfloat *value)
    {
        return gl::UniformMatrix3x4fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix4fvContextANGLE(GLeglContext ctx,
                                                    GLint location,
                                                    GLsizei count,
                                                    GLboolean transpose,
                                                    const GLfloat *value)
    {
        return gl::UniformMatrix4fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix4x2fvContextANGLE(GLeglContext ctx,
                                                      GLint location,
                                                      GLsizei count,
                                                      GLboolean transpose,
                                                      const GLfloat *value)
    {
        return gl::UniformMatrix4x2fvContextANGLE(ctx, location, count, transpose, value);
    }

    void GL_APIENTRY glUniformMatrix4x3fvContextANGLE(GLeglContext ctx,
                                                      GLint location,
                                                      GLsizei count,
                                                      GLboolean transpose,
                                                      const GLfloat *value)
    {
        return gl::UniformMatrix4x3fvContextANGLE(ctx, location, count, transpose, value);
    }

    GLboolean GL_APIENTRY glUnmapBufferContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::UnmapBufferContextANGLE(ctx, target);
    }

    GLboolean GL_APIENTRY glUnmapBufferOESContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::UnmapBufferOESContextANGLE(ctx, target);
    }

    void GL_APIENTRY glUseProgramContextANGLE(GLeglContext ctx, GLuint program)
    {
        return gl::UseProgramContextANGLE(ctx, program);
    }

    void GL_APIENTRY glUseProgramStagesContextANGLE(GLeglContext ctx,
                                                    GLuint pipeline,
                                                    GLbitfield stages,
                                                    GLuint program)
    {
        return gl::UseProgramStagesContextANGLE(ctx, pipeline, stages, program);
    }

    void GL_APIENTRY glValidateProgramContextANGLE(GLeglContext ctx, GLuint program)
    {
        return gl::ValidateProgramContextANGLE(ctx, program);
    }

    void GL_APIENTRY glValidateProgramPipelineContextANGLE(GLeglContext ctx, GLuint pipeline)
    {
        return gl::ValidateProgramPipelineContextANGLE(ctx, pipeline);
    }

    void GL_APIENTRY glVertexAttrib1fContextANGLE(GLeglContext ctx, GLuint index, GLfloat x)
    {
        return gl::VertexAttrib1fContextANGLE(ctx, index, x);
    }

    void GL_APIENTRY glVertexAttrib1fvContextANGLE(GLeglContext ctx, GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib1fvContextANGLE(ctx, index, v);
    }

    void GL_APIENTRY glVertexAttrib2fContextANGLE(GLeglContext ctx, GLuint index, GLfloat x, GLfloat y)
    {
        return gl::VertexAttrib2fContextANGLE(ctx, index, x, y);
    }

    void GL_APIENTRY glVertexAttrib2fvContextANGLE(GLeglContext ctx, GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib2fvContextANGLE(ctx, index, v);
    }

    void GL_APIENTRY
    glVertexAttrib3fContextANGLE(GLeglContext ctx, GLuint index, GLfloat x, GLfloat y, GLfloat z)
    {
        return gl::VertexAttrib3fContextANGLE(ctx, index, x, y, z);
    }

    void GL_APIENTRY glVertexAttrib3fvContextANGLE(GLeglContext ctx, GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib3fvContextANGLE(ctx, index, v);
    }

    void GL_APIENTRY glVertexAttrib4fContextANGLE(GLeglContext ctx,
                                                  GLuint index,
                                                  GLfloat x,
                                                  GLfloat y,
                                                  GLfloat z,
                                                  GLfloat w)
    {
        return gl::VertexAttrib4fContextANGLE(ctx, index, x, y, z, w);
    }

    void GL_APIENTRY glVertexAttrib4fvContextANGLE(GLeglContext ctx, GLuint index, const GLfloat *v)
    {
        return gl::VertexAttrib4fvContextANGLE(ctx, index, v);
    }

    void GL_APIENTRY glVertexAttribBindingContextANGLE(GLeglContext ctx,
                                                       GLuint attribindex,
                                                       GLuint bindingindex)
    {
        return gl::VertexAttribBindingContextANGLE(ctx, attribindex, bindingindex);
    }

    void GL_APIENTRY glVertexAttribDivisorContextANGLE(GLeglContext ctx, GLuint index, GLuint divisor)
    {
        return gl::VertexAttribDivisorContextANGLE(ctx, index, divisor);
    }

    void GL_APIENTRY glVertexAttribDivisorANGLEContextANGLE(GLeglContext ctx,
                                                            GLuint index,
                                                            GLuint divisor)
    {
        return gl::VertexAttribDivisorANGLEContextANGLE(ctx, index, divisor);
    }

    void GL_APIENTRY glVertexAttribDivisorEXTContextANGLE(GLeglContext ctx,
                                                          GLuint index,
                                                          GLuint divisor)
    {
        return gl::VertexAttribDivisorEXTContextANGLE(ctx, index, divisor);
    }

    void GL_APIENTRY glVertexAttribFormatContextANGLE(GLeglContext ctx,
                                                      GLuint attribindex,
                                                      GLint size,
                                                      GLenum type,
                                                      GLboolean normalized,
                                                      GLuint relativeoffset)
    {
        return gl::VertexAttribFormatContextANGLE(ctx, attribindex, size, type, normalized,
                                                  relativeoffset);
    }

    void GL_APIENTRY
    glVertexAttribI4iContextANGLE(GLeglContext ctx, GLuint index, GLint x, GLint y, GLint z, GLint w)
    {
        return gl::VertexAttribI4iContextANGLE(ctx, index, x, y, z, w);
    }

    void GL_APIENTRY glVertexAttribI4ivContextANGLE(GLeglContext ctx, GLuint index, const GLint *v)
    {
        return gl::VertexAttribI4ivContextANGLE(ctx, index, v);
    }

    void GL_APIENTRY glVertexAttribI4uiContextANGLE(GLeglContext ctx,
                                                    GLuint index,
                                                    GLuint x,
                                                    GLuint y,
                                                    GLuint z,
                                                    GLuint w)
    {
        return gl::VertexAttribI4uiContextANGLE(ctx, index, x, y, z, w);
    }

    void GL_APIENTRY glVertexAttribI4uivContextANGLE(GLeglContext ctx, GLuint index, const GLuint *v)
    {
        return gl::VertexAttribI4uivContextANGLE(ctx, index, v);
    }

    void GL_APIENTRY glVertexAttribIFormatContextANGLE(GLeglContext ctx,
                                                       GLuint attribindex,
                                                       GLint size,
                                                       GLenum type,
                                                       GLuint relativeoffset)
    {
        return gl::VertexAttribIFormatContextANGLE(ctx, attribindex, size, type, relativeoffset);
    }

    void GL_APIENTRY glVertexAttribIPointerContextANGLE(GLeglContext ctx,
                                                        GLuint index,
                                                        GLint size,
                                                        GLenum type,
                                                        GLsizei stride,
                                                        const void *pointer)
    {
        return gl::VertexAttribIPointerContextANGLE(ctx, index, size, type, stride, pointer);
    }

    void GL_APIENTRY glVertexAttribPointerContextANGLE(GLeglContext ctx,
                                                       GLuint index,
                                                       GLint size,
                                                       GLenum type,
                                                       GLboolean normalized,
                                                       GLsizei stride,
                                                       const void *pointer)
    {
        return gl::VertexAttribPointerContextANGLE(ctx, index, size, type, normalized, stride, pointer);
    }

    void GL_APIENTRY glVertexBindingDivisorContextANGLE(GLeglContext ctx,
                                                        GLuint bindingindex,
                                                        GLuint divisor)
    {
        return gl::VertexBindingDivisorContextANGLE(ctx, bindingindex, divisor);
    }

    void GL_APIENTRY glVertexPointerContextANGLE(GLeglContext ctx,
                                                 GLint size,
                                                 GLenum type,
                                                 GLsizei stride,
                                                 const void *pointer)
    {
        return gl::VertexPointerContextANGLE(ctx, size, type, stride, pointer);
    }

    void GL_APIENTRY
    glViewportContextANGLE(GLeglContext ctx, GLint x, GLint y, GLsizei width, GLsizei height)
    {
        return gl::ViewportContextANGLE(ctx, x, y, width, height);
    }

    void GL_APIENTRY glWaitSemaphoreEXTContextANGLE(GLeglContext ctx,
                                                    GLuint semaphore,
                                                    GLuint numBufferBarriers,
                                                    const GLuint *buffers,
                                                    GLuint numTextureBarriers,
                                                    const GLuint *textures,
                                                    const GLenum *srcLayouts)
    {
        return gl::WaitSemaphoreEXTContextANGLE(ctx, semaphore, numBufferBarriers, buffers,
                                                numTextureBarriers, textures, srcLayouts);
    }

    void GL_APIENTRY glWaitSyncContextANGLE(GLeglContext ctx,
                                            GLsync sync,
                                            GLbitfield flags,
                                            GLuint64 timeout)
    {
        return gl::WaitSyncContextANGLE(ctx, sync, flags, timeout);
    }

    void GL_APIENTRY glWeightPointerOESContextANGLE(GLeglContext ctx,
                                                    GLint size,
                                                    GLenum type,
                                                    GLsizei stride,
                                                    const void *pointer)
    {
        return gl::WeightPointerOESContextANGLE(ctx, size, type, stride, pointer);
    }

    void GL_APIENTRY glBindUniformLocationCHROMIUMContextANGLE(GLeglContext ctx,
                                                               GLuint program,
                                                               GLint location,
                                                               const GLchar *name)
    {
        return gl::BindUniformLocationCHROMIUMContextANGLE(ctx, program, location, name);
    }

    void GL_APIENTRY glCoverageModulationCHROMIUMContextANGLE(GLeglContext ctx, GLenum components)
    {
        return gl::CoverageModulationCHROMIUMContextANGLE(ctx, components);
    }

    void GL_APIENTRY glMatrixLoadfCHROMIUMContextANGLE(GLeglContext ctx,
                                                       GLenum matrixMode,
                                                       const GLfloat *matrix)
    {
        return gl::MatrixLoadfCHROMIUMContextANGLE(ctx, matrixMode, matrix);
    }

    void GL_APIENTRY glMatrixLoadIdentityCHROMIUMContextANGLE(GLeglContext ctx, GLenum matrixMode)
    {
        return gl::MatrixLoadIdentityCHROMIUMContextANGLE(ctx, matrixMode);
    }

    GLuint GL_APIENTRY glGenPathsCHROMIUMContextANGLE(GLeglContext ctx, GLsizei range)
    {
        return gl::GenPathsCHROMIUMContextANGLE(ctx, range);
    }

    void GL_APIENTRY glDeletePathsCHROMIUMContextANGLE(GLeglContext ctx, GLuint first, GLsizei range)
    {
        return gl::DeletePathsCHROMIUMContextANGLE(ctx, first, range);
    }

    GLboolean GL_APIENTRY glIsPathCHROMIUMContextANGLE(GLeglContext ctx, GLuint path)
    {
        return gl::IsPathCHROMIUMContextANGLE(ctx, path);
    }

    void GL_APIENTRY glPathCommandsCHROMIUMContextANGLE(GLeglContext ctx,
                                                        GLuint path,
                                                        GLsizei numCommands,
                                                        const GLubyte *commands,
                                                        GLsizei numCoords,
                                                        GLenum coordType,
                                                        const void *coords)
    {
        return gl::PathCommandsCHROMIUMContextANGLE(ctx, path, numCommands, commands, numCoords,
                                                    coordType, coords);
    }

    void GL_APIENTRY glPathParameterfCHROMIUMContextANGLE(GLeglContext ctx,
                                                          GLuint path,
                                                          GLenum pname,
                                                          GLfloat value)
    {
        return gl::PathParameterfCHROMIUMContextANGLE(ctx, path, pname, value);
    }

    void GL_APIENTRY glPathParameteriCHROMIUMContextANGLE(GLeglContext ctx,
                                                          GLuint path,
                                                          GLenum pname,
                                                          GLint value)
    {
        return gl::PathParameteriCHROMIUMContextANGLE(ctx, path, pname, value);
    }

    void GL_APIENTRY glGetPathParameterfvCHROMIUMContextANGLE(GLeglContext ctx,
                                                              GLuint path,
                                                              GLenum pname,
                                                              GLfloat *value)
    {
        return gl::GetPathParameterfvCHROMIUMContextANGLE(ctx, path, pname, value);
    }

    void GL_APIENTRY glGetPathParameterivCHROMIUMContextANGLE(GLeglContext ctx,
                                                              GLuint path,
                                                              GLenum pname,
                                                              GLint *value)
    {
        return gl::GetPathParameterivCHROMIUMContextANGLE(ctx, path, pname, value);
    }

    void GL_APIENTRY glPathStencilFuncCHROMIUMContextANGLE(GLeglContext ctx,
                                                           GLenum func,
                                                           GLint ref,
                                                           GLuint mask)
    {
        return gl::PathStencilFuncCHROMIUMContextANGLE(ctx, func, ref, mask);
    }

    void GL_APIENTRY glStencilFillPathCHROMIUMContextANGLE(GLeglContext ctx,
                                                           GLuint path,
                                                           GLenum fillMode,
                                                           GLuint mask)
    {
        return gl::StencilFillPathCHROMIUMContextANGLE(ctx, path, fillMode, mask);
    }

    void GL_APIENTRY glStencilStrokePathCHROMIUMContextANGLE(GLeglContext ctx,
                                                             GLuint path,
                                                             GLint reference,
                                                             GLuint mask)
    {
        return gl::StencilStrokePathCHROMIUMContextANGLE(ctx, path, reference, mask);
    }

    void GL_APIENTRY glCoverFillPathCHROMIUMContextANGLE(GLeglContext ctx,
                                                         GLuint path,
                                                         GLenum coverMode)
    {
        return gl::CoverFillPathCHROMIUMContextANGLE(ctx, path, coverMode);
    }

    void GL_APIENTRY glCoverStrokePathCHROMIUMContextANGLE(GLeglContext ctx,
                                                           GLuint path,
                                                           GLenum coverMode)
    {
        return gl::CoverStrokePathCHROMIUMContextANGLE(ctx, path, coverMode);
    }

    void GL_APIENTRY glStencilThenCoverFillPathCHROMIUMContextANGLE(GLeglContext ctx,
                                                                    GLuint path,
                                                                    GLenum fillMode,
                                                                    GLuint mask,
                                                                    GLenum coverMode)
    {
        return gl::StencilThenCoverFillPathCHROMIUMContextANGLE(ctx, path, fillMode, mask, coverMode);
    }

    void GL_APIENTRY glStencilThenCoverStrokePathCHROMIUMContextANGLE(GLeglContext ctx,
                                                                      GLuint path,
                                                                      GLint reference,
                                                                      GLuint mask,
                                                                      GLenum coverMode)
    {
        return gl::StencilThenCoverStrokePathCHROMIUMContextANGLE(ctx, path, reference, mask,
                                                                  coverMode);
    }

    void GL_APIENTRY glCoverFillPathInstancedCHROMIUMContextANGLE(GLeglContext ctx,
                                                                  GLsizei numPath,
                                                                  GLenum pathNameType,
                                                                  const void *paths,
                                                                  GLuint pathBase,
                                                                  GLenum coverMode,
                                                                  GLenum transformType,
                                                                  const GLfloat *transformValues)
    {
        return gl::CoverFillPathInstancedCHROMIUMContextANGLE(
            ctx, numPath, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    }

    void GL_APIENTRY glCoverStrokePathInstancedCHROMIUMContextANGLE(GLeglContext ctx,
                                                                    GLsizei numPath,
                                                                    GLenum pathNameType,
                                                                    const void *paths,
                                                                    GLuint pathBase,
                                                                    GLenum coverMode,
                                                                    GLenum transformType,
                                                                    const GLfloat *transformValues)
    {
        return gl::CoverStrokePathInstancedCHROMIUMContextANGLE(
            ctx, numPath, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    }

    void GL_APIENTRY glStencilStrokePathInstancedCHROMIUMContextANGLE(GLeglContext ctx,
                                                                      GLsizei numPath,
                                                                      GLenum pathNameType,
                                                                      const void *paths,
                                                                      GLuint pathBase,
                                                                      GLint reference,
                                                                      GLuint mask,
                                                                      GLenum transformType,
                                                                      const GLfloat *transformValues)
    {
        return gl::StencilStrokePathInstancedCHROMIUMContextANGLE(ctx, numPath, pathNameType, paths,
                                                                  pathBase, reference, mask,
                                                                  transformType, transformValues);
    }

    void GL_APIENTRY glStencilFillPathInstancedCHROMIUMContextANGLE(GLeglContext ctx,
                                                                    GLsizei numPaths,
                                                                    GLenum pathNameType,
                                                                    const void *paths,
                                                                    GLuint pathBase,
                                                                    GLenum fillMode,
                                                                    GLuint mask,
                                                                    GLenum transformType,
                                                                    const GLfloat *transformValues)
    {
        return gl::StencilFillPathInstancedCHROMIUMContextANGLE(ctx, numPaths, pathNameType, paths,
                                                                pathBase, fillMode, mask, transformType,
                                                                transformValues);
    }

    void GL_APIENTRY
    glStencilThenCoverFillPathInstancedCHROMIUMContextANGLE(GLeglContext ctx,
                                                            GLsizei numPaths,
                                                            GLenum pathNameType,
                                                            const void *paths,
                                                            GLuint pathBase,
                                                            GLenum fillMode,
                                                            GLuint mask,
                                                            GLenum coverMode,
                                                            GLenum transformType,
                                                            const GLfloat *transformValues)
    {
        return gl::StencilThenCoverFillPathInstancedCHROMIUMContextANGLE(
            ctx, numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType,
            transformValues);
    }

    void GL_APIENTRY
    glStencilThenCoverStrokePathInstancedCHROMIUMContextANGLE(GLeglContext ctx,
                                                              GLsizei numPaths,
                                                              GLenum pathNameType,
                                                              const void *paths,
                                                              GLuint pathBase,
                                                              GLint reference,
                                                              GLuint mask,
                                                              GLenum coverMode,
                                                              GLenum transformType,
                                                              const GLfloat *transformValues)
    {
        return gl::StencilThenCoverStrokePathInstancedCHROMIUMContextANGLE(
            ctx, numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType,
            transformValues);
    }

    void GL_APIENTRY glBindFragmentInputLocationCHROMIUMContextANGLE(GLeglContext ctx,
                                                                     GLuint programs,
                                                                     GLint location,
                                                                     const GLchar *name)
    {
        return gl::BindFragmentInputLocationCHROMIUMContextANGLE(ctx, programs, location, name);
    }

    void GL_APIENTRY glProgramPathFragmentInputGenCHROMIUMContextANGLE(GLeglContext ctx,
                                                                       GLuint program,
                                                                       GLint location,
                                                                       GLenum genMode,
                                                                       GLint components,
                                                                       const GLfloat *coeffs)
    {
        return gl::ProgramPathFragmentInputGenCHROMIUMContextANGLE(ctx, program, location, genMode,
                                                                   components, coeffs);
    }

    void GL_APIENTRY glCopyTextureCHROMIUMContextANGLE(GLeglContext ctx,
                                                       GLuint sourceId,
                                                       GLint sourceLevel,
                                                       GLenum destTarget,
                                                       GLuint destId,
                                                       GLint destLevel,
                                                       GLint internalFormat,
                                                       GLenum destType,
                                                       GLboolean unpackFlipY,
                                                       GLboolean unpackPremultiplyAlpha,
                                                       GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopyTextureCHROMIUMContextANGLE(ctx, sourceId, sourceLevel, destTarget, destId,
                                                   destLevel, internalFormat, destType, unpackFlipY,
                                                   unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
    }

    void GL_APIENTRY glCopySubTextureCHROMIUMContextANGLE(GLeglContext ctx,
                                                          GLuint sourceId,
                                                          GLint sourceLevel,
                                                          GLenum destTarget,
                                                          GLuint destId,
                                                          GLint destLevel,
                                                          GLint xoffset,
                                                          GLint yoffset,
                                                          GLint x,
                                                          GLint y,
                                                          GLint width,
                                                          GLint height,
                                                          GLboolean unpackFlipY,
                                                          GLboolean unpackPremultiplyAlpha,
                                                          GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopySubTextureCHROMIUMContextANGLE(
            ctx, sourceId, sourceLevel, destTarget, destId, destLevel, xoffset, yoffset, x, y, width,
            height, unpackFlipY, unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
    }

    void GL_APIENTRY glCompressedCopyTextureCHROMIUMContextANGLE(GLeglContext ctx,
                                                                 GLuint sourceId,
                                                                 GLuint destId)
    {
        return gl::CompressedCopyTextureCHROMIUMContextANGLE(ctx, sourceId, destId);
    }

    void GL_APIENTRY glRequestExtensionANGLEContextANGLE(GLeglContext ctx, const GLchar *name)
    {
        return gl::RequestExtensionANGLEContextANGLE(ctx, name);
    }

    void GL_APIENTRY glGetBooleanvRobustANGLEContextANGLE(GLeglContext ctx,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLboolean *params)
    {
        return gl::GetBooleanvRobustANGLEContextANGLE(ctx, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetBufferParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                   GLenum target,
                                                                   GLenum pname,
                                                                   GLsizei bufSize,
                                                                   GLsizei *length,
                                                                   GLint *params)
    {
        return gl::GetBufferParameterivRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                               params);
    }

    void GL_APIENTRY glGetFloatvRobustANGLEContextANGLE(GLeglContext ctx,
                                                        GLenum pname,
                                                        GLsizei bufSize,
                                                        GLsizei *length,
                                                        GLfloat *params)
    {
        return gl::GetFloatvRobustANGLEContextANGLE(ctx, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetFramebufferAttachmentParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                                  GLenum target,
                                                                                  GLenum attachment,
                                                                                  GLenum pname,
                                                                                  GLsizei bufSize,
                                                                                  GLsizei *length,
                                                                                  GLint *params)
    {
        return gl::GetFramebufferAttachmentParameterivRobustANGLEContextANGLE(
            ctx, target, attachment, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetIntegervRobustANGLEContextANGLE(GLeglContext ctx,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLint *data)
    {
        return gl::GetIntegervRobustANGLEContextANGLE(ctx, pname, bufSize, length, data);
    }

    void GL_APIENTRY glGetProgramivRobustANGLEContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLenum pname,
                                                           GLsizei bufSize,
                                                           GLsizei *length,
                                                           GLint *params)
    {
        return gl::GetProgramivRobustANGLEContextANGLE(ctx, program, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetRenderbufferParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                         GLenum target,
                                                                         GLenum pname,
                                                                         GLsizei bufSize,
                                                                         GLsizei *length,
                                                                         GLint *params)
    {
        return gl::GetRenderbufferParameterivRobustANGLEContextANGLE(ctx, target, pname, bufSize,
                                                                     length, params);
    }

    void GL_APIENTRY glGetShaderivRobustANGLEContextANGLE(GLeglContext ctx,
                                                          GLuint shader,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLint *params)
    {
        return gl::GetShaderivRobustANGLEContextANGLE(ctx, shader, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetTexParameterfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                                GLenum target,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLsizei *length,
                                                                GLfloat *params)
    {
        return gl::GetTexParameterfvRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                            params);
    }

    void GL_APIENTRY glGetTexParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                GLenum target,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLsizei *length,
                                                                GLint *params)
    {
        return gl::GetTexParameterivRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                            params);
    }

    void GL_APIENTRY glGetUniformfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLint location,
                                                           GLsizei bufSize,
                                                           GLsizei *length,
                                                           GLfloat *params)
    {
        return gl::GetUniformfvRobustANGLEContextANGLE(ctx, program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetUniformivRobustANGLEContextANGLE(GLeglContext ctx,
                                                           GLuint program,
                                                           GLint location,
                                                           GLsizei bufSize,
                                                           GLsizei *length,
                                                           GLint *params)
    {
        return gl::GetUniformivRobustANGLEContextANGLE(ctx, program, location, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                                GLuint index,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLsizei *length,
                                                                GLfloat *params)
    {
        return gl::GetVertexAttribfvRobustANGLEContextANGLE(ctx, index, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                GLuint index,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLsizei *length,
                                                                GLint *params)
    {
        return gl::GetVertexAttribivRobustANGLEContextANGLE(ctx, index, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribPointervRobustANGLEContextANGLE(GLeglContext ctx,
                                                                      GLuint index,
                                                                      GLenum pname,
                                                                      GLsizei bufSize,
                                                                      GLsizei *length,
                                                                      void **pointer)
    {
        return gl::GetVertexAttribPointervRobustANGLEContextANGLE(ctx, index, pname, bufSize, length,
                                                                  pointer);
    }

    void GL_APIENTRY glReadPixelsRobustANGLEContextANGLE(GLeglContext ctx,
                                                         GLint x,
                                                         GLint y,
                                                         GLsizei width,
                                                         GLsizei height,
                                                         GLenum format,
                                                         GLenum type,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLsizei *columns,
                                                         GLsizei *rows,
                                                         void *pixels)
    {
        return gl::ReadPixelsRobustANGLEContextANGLE(ctx, x, y, width, height, format, type, bufSize,
                                                     length, columns, rows, pixels);
    }

    void GL_APIENTRY glTexImage2DRobustANGLEContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLint level,
                                                         GLint internalformat,
                                                         GLsizei width,
                                                         GLsizei height,
                                                         GLint border,
                                                         GLenum format,
                                                         GLenum type,
                                                         GLsizei bufSize,
                                                         const void *pixels)
    {
        return gl::TexImage2DRobustANGLEContextANGLE(ctx, target, level, internalformat, width, height,
                                                     border, format, type, bufSize, pixels);
    }

    void GL_APIENTRY glTexParameterfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                             GLenum target,
                                                             GLenum pname,
                                                             GLsizei bufSize,
                                                             const GLfloat *params)
    {
        return gl::TexParameterfvRobustANGLEContextANGLE(ctx, target, pname, bufSize, params);
    }

    void GL_APIENTRY glTexParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                             GLenum target,
                                                             GLenum pname,
                                                             GLsizei bufSize,
                                                             const GLint *params)
    {
        return gl::TexParameterivRobustANGLEContextANGLE(ctx, target, pname, bufSize, params);
    }

    void GL_APIENTRY glTexSubImage2DRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum target,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLint yoffset,
                                                            GLsizei width,
                                                            GLsizei height,
                                                            GLenum format,
                                                            GLenum type,
                                                            GLsizei bufSize,
                                                            const void *pixels)
    {
        return gl::TexSubImage2DRobustANGLEContextANGLE(ctx, target, level, xoffset, yoffset, width,
                                                        height, format, type, bufSize, pixels);
    }

    void GL_APIENTRY glTexImage3DRobustANGLEContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLint level,
                                                         GLint internalformat,
                                                         GLsizei width,
                                                         GLsizei height,
                                                         GLsizei depth,
                                                         GLint border,
                                                         GLenum format,
                                                         GLenum type,
                                                         GLsizei bufSize,
                                                         const void *pixels)
    {
        return gl::TexImage3DRobustANGLEContextANGLE(ctx, target, level, internalformat, width, height,
                                                     depth, border, format, type, bufSize, pixels);
    }

    void GL_APIENTRY glTexSubImage3DRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum target,
                                                            GLint level,
                                                            GLint xoffset,
                                                            GLint yoffset,
                                                            GLint zoffset,
                                                            GLsizei width,
                                                            GLsizei height,
                                                            GLsizei depth,
                                                            GLenum format,
                                                            GLenum type,
                                                            GLsizei bufSize,
                                                            const void *pixels)
    {
        return gl::TexSubImage3DRobustANGLEContextANGLE(ctx, target, level, xoffset, yoffset, zoffset,
                                                        width, height, depth, format, type, bufSize,
                                                        pixels);
    }

    void GL_APIENTRY glCompressedTexImage2DRobustANGLEContextANGLE(GLeglContext ctx,
                                                                   GLenum target,
                                                                   GLint level,
                                                                   GLenum internalformat,
                                                                   GLsizei width,
                                                                   GLsizei height,
                                                                   GLint border,
                                                                   GLsizei imageSize,
                                                                   GLsizei dataSize,
                                                                   const GLvoid *data)
    {
        return gl::CompressedTexImage2DRobustANGLEContextANGLE(
            ctx, target, level, internalformat, width, height, border, imageSize, dataSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage2DRobustANGLEContextANGLE(GLeglContext ctx,
                                                                      GLenum target,
                                                                      GLint level,
                                                                      GLsizei xoffset,
                                                                      GLsizei yoffset,
                                                                      GLsizei width,
                                                                      GLsizei height,
                                                                      GLenum format,
                                                                      GLsizei imageSize,
                                                                      GLsizei dataSize,
                                                                      const GLvoid *data)
    {
        return gl::CompressedTexSubImage2DRobustANGLEContextANGLE(
            ctx, target, level, xoffset, yoffset, width, height, format, imageSize, dataSize, data);
    }

    void GL_APIENTRY glCompressedTexImage3DRobustANGLEContextANGLE(GLeglContext ctx,
                                                                   GLenum target,
                                                                   GLint level,
                                                                   GLenum internalformat,
                                                                   GLsizei width,
                                                                   GLsizei height,
                                                                   GLsizei depth,
                                                                   GLint border,
                                                                   GLsizei imageSize,
                                                                   GLsizei dataSize,
                                                                   const GLvoid *data)
    {
        return gl::CompressedTexImage3DRobustANGLEContextANGLE(ctx, target, level, internalformat,
                                                               width, height, depth, border, imageSize,
                                                               dataSize, data);
    }

    void GL_APIENTRY glCompressedTexSubImage3DRobustANGLEContextANGLE(GLeglContext ctx,
                                                                      GLenum target,
                                                                      GLint level,
                                                                      GLint xoffset,
                                                                      GLint yoffset,
                                                                      GLint zoffset,
                                                                      GLsizei width,
                                                                      GLsizei height,
                                                                      GLsizei depth,
                                                                      GLenum format,
                                                                      GLsizei imageSize,
                                                                      GLsizei dataSize,
                                                                      const GLvoid *data)
    {
        return gl::CompressedTexSubImage3DRobustANGLEContextANGLE(ctx, target, level, xoffset, yoffset,
                                                                  zoffset, width, height, depth, format,
                                                                  imageSize, dataSize, data);
    }

    void GL_APIENTRY glGetQueryivRobustANGLEContextANGLE(GLeglContext ctx,
                                                         GLenum target,
                                                         GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei *length,
                                                         GLint *params)
    {
        return gl::GetQueryivRobustANGLEContextANGLE(ctx, target, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjectuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                GLuint id,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLsizei *length,
                                                                GLuint *params)
    {
        return gl::GetQueryObjectuivRobustANGLEContextANGLE(ctx, id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetBufferPointervRobustANGLEContextANGLE(GLeglContext ctx,
                                                                GLenum target,
                                                                GLenum pname,
                                                                GLsizei bufSize,
                                                                GLsizei *length,
                                                                void **params)
    {
        return gl::GetBufferPointervRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                            params);
    }

    void GL_APIENTRY glGetIntegeri_vRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum target,
                                                            GLuint index,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLint *data)
    {
        return gl::GetIntegeri_vRobustANGLEContextANGLE(ctx, target, index, bufSize, length, data);
    }

    void GL_APIENTRY glGetInternalformativRobustANGLEContextANGLE(GLeglContext ctx,
                                                                  GLenum target,
                                                                  GLenum internalformat,
                                                                  GLenum pname,
                                                                  GLsizei bufSize,
                                                                  GLsizei *length,
                                                                  GLint *params)
    {
        return gl::GetInternalformativRobustANGLEContextANGLE(ctx, target, internalformat, pname,
                                                              bufSize, length, params);
    }

    void GL_APIENTRY glGetVertexAttribIivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                 GLuint index,
                                                                 GLenum pname,
                                                                 GLsizei bufSize,
                                                                 GLsizei *length,
                                                                 GLint *params)
    {
        return gl::GetVertexAttribIivRobustANGLEContextANGLE(ctx, index, pname, bufSize, length,
                                                             params);
    }

    void GL_APIENTRY glGetVertexAttribIuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                  GLuint index,
                                                                  GLenum pname,
                                                                  GLsizei bufSize,
                                                                  GLsizei *length,
                                                                  GLuint *params)
    {
        return gl::GetVertexAttribIuivRobustANGLEContextANGLE(ctx, index, pname, bufSize, length,
                                                              params);
    }

    void GL_APIENTRY glGetUniformuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLuint program,
                                                            GLint location,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLuint *params)
    {
        return gl::GetUniformuivRobustANGLEContextANGLE(ctx, program, location, bufSize, length,
                                                        params);
    }

    void GL_APIENTRY glGetActiveUniformBlockivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                      GLuint program,
                                                                      GLuint uniformBlockIndex,
                                                                      GLenum pname,
                                                                      GLsizei bufSize,
                                                                      GLsizei *length,
                                                                      GLint *params)
    {
        return gl::GetActiveUniformBlockivRobustANGLEContextANGLE(ctx, program, uniformBlockIndex,
                                                                  pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetInteger64vRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum pname,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLint64 *data)
    {
        return gl::GetInteger64vRobustANGLEContextANGLE(ctx, pname, bufSize, length, data);
    }

    void GL_APIENTRY glGetInteger64i_vRobustANGLEContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLuint index,
                                                              GLsizei bufSize,
                                                              GLsizei *length,
                                                              GLint64 *data)
    {
        return gl::GetInteger64i_vRobustANGLEContextANGLE(ctx, target, index, bufSize, length, data);
    }

    void GL_APIENTRY glGetBufferParameteri64vRobustANGLEContextANGLE(GLeglContext ctx,
                                                                     GLenum target,
                                                                     GLenum pname,
                                                                     GLsizei bufSize,
                                                                     GLsizei *length,
                                                                     GLint64 *params)
    {
        return gl::GetBufferParameteri64vRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                                 params);
    }

    void GL_APIENTRY glSamplerParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                 GLuint sampler,
                                                                 GLuint pname,
                                                                 GLsizei bufSize,
                                                                 const GLint *param)
    {
        return gl::SamplerParameterivRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glSamplerParameterfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                                 GLuint sampler,
                                                                 GLenum pname,
                                                                 GLsizei bufSize,
                                                                 const GLfloat *param)
    {
        return gl::SamplerParameterfvRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glGetSamplerParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                    GLuint sampler,
                                                                    GLenum pname,
                                                                    GLsizei bufSize,
                                                                    GLsizei *length,
                                                                    GLint *params)
    {
        return gl::GetSamplerParameterivRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, length,
                                                                params);
    }

    void GL_APIENTRY glGetSamplerParameterfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                                    GLuint sampler,
                                                                    GLenum pname,
                                                                    GLsizei bufSize,
                                                                    GLsizei *length,
                                                                    GLfloat *params)
    {
        return gl::GetSamplerParameterfvRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, length,
                                                                params);
    }

    void GL_APIENTRY glGetFramebufferParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                        GLenum target,
                                                                        GLenum pname,
                                                                        GLsizei bufSize,
                                                                        GLsizei *length,
                                                                        GLint *params)
    {
        return gl::GetFramebufferParameterivRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                                    params);
    }

    void GL_APIENTRY glGetProgramInterfaceivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                    GLuint program,
                                                                    GLenum programInterface,
                                                                    GLenum pname,
                                                                    GLsizei bufSize,
                                                                    GLsizei *length,
                                                                    GLint *params)
    {
        return gl::GetProgramInterfaceivRobustANGLEContextANGLE(ctx, program, programInterface, pname,
                                                                bufSize, length, params);
    }

    void GL_APIENTRY glGetBooleani_vRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum target,
                                                            GLuint index,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLboolean *data)
    {
        return gl::GetBooleani_vRobustANGLEContextANGLE(ctx, target, index, bufSize, length, data);
    }

    void GL_APIENTRY glGetMultisamplefvRobustANGLEContextANGLE(GLeglContext ctx,
                                                               GLenum pname,
                                                               GLuint index,
                                                               GLsizei bufSize,
                                                               GLsizei *length,
                                                               GLfloat *val)
    {
        return gl::GetMultisamplefvRobustANGLEContextANGLE(ctx, pname, index, bufSize, length, val);
    }

    void GL_APIENTRY glGetTexLevelParameterivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                     GLenum target,
                                                                     GLint level,
                                                                     GLenum pname,
                                                                     GLsizei bufSize,
                                                                     GLsizei *length,
                                                                     GLint *params)
    {
        return gl::GetTexLevelParameterivRobustANGLEContextANGLE(ctx, target, level, pname, bufSize,
                                                                 length, params);
    }

    void GL_APIENTRY glGetTexLevelParameterfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                                     GLenum target,
                                                                     GLint level,
                                                                     GLenum pname,
                                                                     GLsizei bufSize,
                                                                     GLsizei *length,
                                                                     GLfloat *params)
    {
        return gl::GetTexLevelParameterfvRobustANGLEContextANGLE(ctx, target, level, pname, bufSize,
                                                                 length, params);
    }

    void GL_APIENTRY glGetPointervRobustANGLERobustANGLEContextANGLE(GLeglContext ctx,
                                                                     GLenum pname,
                                                                     GLsizei bufSize,
                                                                     GLsizei *length,
                                                                     void **params)
    {
        return gl::GetPointervRobustANGLERobustANGLEContextANGLE(ctx, pname, bufSize, length, params);
    }

    void GL_APIENTRY glReadnPixelsRobustANGLEContextANGLE(GLeglContext ctx,
                                                          GLint x,
                                                          GLint y,
                                                          GLsizei width,
                                                          GLsizei height,
                                                          GLenum format,
                                                          GLenum type,
                                                          GLsizei bufSize,
                                                          GLsizei *length,
                                                          GLsizei *columns,
                                                          GLsizei *rows,
                                                          void *data)
    {
        return gl::ReadnPixelsRobustANGLEContextANGLE(ctx, x, y, width, height, format, type, bufSize,
                                                      length, columns, rows, data);
    }

    void GL_APIENTRY glGetnUniformfvRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLuint program,
                                                            GLint location,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLfloat *params)
    {
        return gl::GetnUniformfvRobustANGLEContextANGLE(ctx, program, location, bufSize, length,
                                                        params);
    }

    void GL_APIENTRY glGetnUniformivRobustANGLEContextANGLE(GLeglContext ctx,
                                                            GLuint program,
                                                            GLint location,
                                                            GLsizei bufSize,
                                                            GLsizei *length,
                                                            GLint *params)
    {
        return gl::GetnUniformivRobustANGLEContextANGLE(ctx, program, location, bufSize, length,
                                                        params);
    }

    void GL_APIENTRY glGetnUniformuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                             GLuint program,
                                                             GLint location,
                                                             GLsizei bufSize,
                                                             GLsizei *length,
                                                             GLuint *params)
    {
        return gl::GetnUniformuivRobustANGLEContextANGLE(ctx, program, location, bufSize, length,
                                                         params);
    }

    void GL_APIENTRY glTexParameterIivRobustANGLEContextANGLE(GLeglContext ctx,
                                                              GLenum target,
                                                              GLenum pname,
                                                              GLsizei bufSize,
                                                              const GLint *params)
    {
        return gl::TexParameterIivRobustANGLEContextANGLE(ctx, target, pname, bufSize, params);
    }

    void GL_APIENTRY glTexParameterIuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                               GLenum target,
                                                               GLenum pname,
                                                               GLsizei bufSize,
                                                               const GLuint *params)
    {
        return gl::TexParameterIuivRobustANGLEContextANGLE(ctx, target, pname, bufSize, params);
    }

    void GL_APIENTRY glGetTexParameterIivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                 GLenum target,
                                                                 GLenum pname,
                                                                 GLsizei bufSize,
                                                                 GLsizei *length,
                                                                 GLint *params)
    {
        return gl::GetTexParameterIivRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                             params);
    }

    void GL_APIENTRY glGetTexParameterIuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                  GLenum target,
                                                                  GLenum pname,
                                                                  GLsizei bufSize,
                                                                  GLsizei *length,
                                                                  GLuint *params)
    {
        return gl::GetTexParameterIuivRobustANGLEContextANGLE(ctx, target, pname, bufSize, length,
                                                              params);
    }

    void GL_APIENTRY glSamplerParameterIivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                  GLuint sampler,
                                                                  GLenum pname,
                                                                  GLsizei bufSize,
                                                                  const GLint *param)
    {
        return gl::SamplerParameterIivRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glSamplerParameterIuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                   GLuint sampler,
                                                                   GLenum pname,
                                                                   GLsizei bufSize,
                                                                   const GLuint *param)
    {
        return gl::SamplerParameterIuivRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, param);
    }

    void GL_APIENTRY glGetSamplerParameterIivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                     GLuint sampler,
                                                                     GLenum pname,
                                                                     GLsizei bufSize,
                                                                     GLsizei *length,
                                                                     GLint *params)
    {
        return gl::GetSamplerParameterIivRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, length,
                                                                 params);
    }

    void GL_APIENTRY glGetSamplerParameterIuivRobustANGLEContextANGLE(GLeglContext ctx,
                                                                      GLuint sampler,
                                                                      GLenum pname,
                                                                      GLsizei bufSize,
                                                                      GLsizei *length,
                                                                      GLuint *params)
    {
        return gl::GetSamplerParameterIuivRobustANGLEContextANGLE(ctx, sampler, pname, bufSize, length,
                                                                  params);
    }

    void GL_APIENTRY glGetQueryObjectivRobustANGLEContextANGLE(GLeglContext ctx,
                                                               GLuint id,
                                                               GLenum pname,
                                                               GLsizei bufSize,
                                                               GLsizei *length,
                                                               GLint *params)
    {
        return gl::GetQueryObjectivRobustANGLEContextANGLE(ctx, id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjecti64vRobustANGLEContextANGLE(GLeglContext ctx,
                                                                 GLuint id,
                                                                 GLenum pname,
                                                                 GLsizei bufSize,
                                                                 GLsizei *length,
                                                                 GLint64 *params)
    {
        return gl::GetQueryObjecti64vRobustANGLEContextANGLE(ctx, id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glGetQueryObjectui64vRobustANGLEContextANGLE(GLeglContext ctx,
                                                                  GLuint id,
                                                                  GLenum pname,
                                                                  GLsizei bufSize,
                                                                  GLsizei *length,
                                                                  GLuint64 *params)
    {
        return gl::GetQueryObjectui64vRobustANGLEContextANGLE(ctx, id, pname, bufSize, length, params);
    }

    void GL_APIENTRY glCopyTexture3DANGLEContextANGLE(GLeglContext ctx,
                                                      GLuint sourceId,
                                                      GLint sourceLevel,
                                                      GLenum destTarget,
                                                      GLuint destId,
                                                      GLint destLevel,
                                                      GLint internalFormat,
                                                      GLenum destType,
                                                      GLboolean unpackFlipY,
                                                      GLboolean unpackPremultiplyAlpha,
                                                      GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopyTexture3DANGLEContextANGLE(ctx, sourceId, sourceLevel, destTarget, destId,
                                                  destLevel, internalFormat, destType, unpackFlipY,
                                                  unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
    }

    void GL_APIENTRY glCopySubTexture3DANGLEContextANGLE(GLeglContext ctx,
                                                         GLuint sourceId,
                                                         GLint sourceLevel,
                                                         GLenum destTarget,
                                                         GLuint destId,
                                                         GLint destLevel,
                                                         GLint xoffset,
                                                         GLint yoffset,
                                                         GLint zoffset,
                                                         GLint x,
                                                         GLint y,
                                                         GLint z,
                                                         GLint width,
                                                         GLint height,
                                                         GLint depth,
                                                         GLboolean unpackFlipY,
                                                         GLboolean unpackPremultiplyAlpha,
                                                         GLboolean unpackUnmultiplyAlpha)
    {
        return gl::CopySubTexture3DANGLEContextANGLE(
            ctx, sourceId, sourceLevel, destTarget, destId, destLevel, xoffset, yoffset, zoffset, x, y,
            z, width, height, depth, unpackFlipY, unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
    }

    void GL_APIENTRY glTexStorage2DMultisampleANGLEContextANGLE(GLeglContext ctx,
                                                                GLenum target,
                                                                GLsizei samples,
                                                                GLenum internalformat,
                                                                GLsizei width,
                                                                GLsizei height,
                                                                GLboolean fixedsamplelocations)
    {
        return gl::TexStorage2DMultisampleANGLEContextANGLE(ctx, target, samples, internalformat, width,
                                                            height, fixedsamplelocations);
    }

    void GL_APIENTRY glGetTexLevelParameterivANGLEContextANGLE(GLeglContext ctx,
                                                               GLenum target,
                                                               GLint level,
                                                               GLenum pname,
                                                               GLint *params)
    {
        return gl::GetTexLevelParameterivANGLEContextANGLE(ctx, target, level, pname, params);
    }

    void GL_APIENTRY glGetTexLevelParameterfvANGLEContextANGLE(GLeglContext ctx,
                                                               GLenum target,
                                                               GLint level,
                                                               GLenum pname,
                                                               GLfloat *params)
    {
        return gl::GetTexLevelParameterfvANGLEContextANGLE(ctx, target, level, pname, params);
    }

    void GL_APIENTRY glMultiDrawArraysANGLEContextANGLE(GLeglContext ctx,
                                                        GLenum mode,
                                                        const GLint *firsts,
                                                        const GLsizei *counts,
                                                        GLsizei drawcount)
    {
        return gl::MultiDrawArraysANGLEContextANGLE(ctx, mode, firsts, counts, drawcount);
    }

    void GL_APIENTRY glMultiDrawArraysInstancedANGLEContextANGLE(GLeglContext ctx,
                                                                 GLenum mode,
                                                                 const GLint *firsts,
                                                                 const GLsizei *counts,
                                                                 const GLsizei *instanceCounts,
                                                                 GLsizei drawcount)
    {
        return gl::MultiDrawArraysInstancedANGLEContextANGLE(ctx, mode, firsts, counts, instanceCounts,
                                                             drawcount);
    }

    void GL_APIENTRY glMultiDrawElementsANGLEContextANGLE(GLeglContext ctx,
                                                          GLenum mode,
                                                          const GLsizei *counts,
                                                          GLenum type,
                                                          const GLvoid *const *indices,
                                                          GLsizei drawcount)
    {
        return gl::MultiDrawElementsANGLEContextANGLE(ctx, mode, counts, type, indices, drawcount);
    }

    void GL_APIENTRY glMultiDrawElementsInstancedANGLEContextANGLE(GLeglContext ctx,
                                                                   GLenum mode,
                                                                   const GLsizei *counts,
                                                                   GLenum type,
                                                                   const GLvoid *const *indices,
                                                                   const GLsizei *instanceCounts,
                                                                   GLsizei drawcount)
    {
        return gl::MultiDrawElementsInstancedANGLEContextANGLE(ctx, mode, counts, type, indices,
                                                               instanceCounts, drawcount);
    }

    void GL_APIENTRY glDrawArraysInstancedBaseInstanceANGLEContextANGLE(GLeglContext ctx,
                                                                        GLenum mode,
                                                                        GLint first,
                                                                        GLsizei count,
                                                                        GLsizei instanceCount,
                                                                        GLuint baseInstance)
    {
        return gl::DrawArraysInstancedBaseInstanceANGLEContextANGLE(ctx, mode, first, count,
                                                                    instanceCount, baseInstance);
    }

    void GL_APIENTRY
    glDrawElementsInstancedBaseVertexBaseInstanceANGLEContextANGLE(GLeglContext ctx,
                                                                   GLenum mode,
                                                                   GLsizei count,
                                                                   GLenum type,
                                                                   const GLvoid *indices,
                                                                   GLsizei instanceCounts,
                                                                   GLint baseVertex,
                                                                   GLuint baseInstance)
    {
        return gl::DrawElementsInstancedBaseVertexBaseInstanceANGLEContextANGLE(
            ctx, mode, count, type, indices, instanceCounts, baseVertex, baseInstance);
    }

    void GL_APIENTRY
    glMultiDrawArraysInstancedBaseInstanceANGLEContextANGLE(GLeglContext ctx,
                                                            GLenum mode,
                                                            GLsizei drawcount,
                                                            const GLsizei *counts,
                                                            const GLsizei *instanceCounts,
                                                            const GLint *firsts,
                                                            const GLuint *baseInstances)
    {
        return gl::MultiDrawArraysInstancedBaseInstanceANGLEContextANGLE(
            ctx, mode, drawcount, counts, instanceCounts, firsts, baseInstances);
    }

    void GL_APIENTRY
    glMultiDrawElementsInstancedBaseVertexBaseInstanceANGLEContextANGLE(GLeglContext ctx,
                                                                        GLenum mode,
                                                                        GLenum type,
                                                                        GLsizei drawcount,
                                                                        const GLsizei *counts,
                                                                        const GLsizei *instanceCounts,
                                                                        const GLvoid *const *indices,
                                                                        const GLint *baseVertices,
                                                                        const GLuint *baseInstances)
    {
        return gl::MultiDrawElementsInstancedBaseVertexBaseInstanceANGLEContextANGLE(
            ctx, mode, type, drawcount, counts, instanceCounts, indices, baseVertices, baseInstances);
    }

    void GL_APIENTRY glGetMultisamplefvANGLEContextANGLE(GLeglContext ctx,
                                                         GLenum pname,
                                                         GLuint index,
                                                         GLfloat *val)
    {
        return gl::GetMultisamplefvANGLEContextANGLE(ctx, pname, index, val);
    }

    void GL_APIENTRY glSampleMaskiANGLEContextANGLE(GLeglContext ctx,
                                                    GLuint maskNumber,
                                                    GLbitfield mask)
    {
        return gl::SampleMaskiANGLEContextANGLE(ctx, maskNumber, mask);
    }

    void GL_APIENTRY glProvokingVertexANGLEContextANGLE(GLeglContext ctx, GLenum mode)
    {
        return gl::ProvokingVertexANGLEContextANGLE(ctx, mode);
    }

    void GL_APIENTRY glLoseContextCHROMIUMContextANGLE(GLeglContext ctx, GLenum current, GLenum other)
    {
        return gl::LoseContextCHROMIUMContextANGLE(ctx, current, other);
    }

    void GL_APIENTRY glTexImage2DExternalANGLEContextANGLE(GLeglContext ctx,
                                                           GLenum target,
                                                           GLint level,
                                                           GLint internalformat,
                                                           GLsizei width,
                                                           GLsizei height,
                                                           GLint border,
                                                           GLenum format,
                                                           GLenum type)
    {
        return gl::TexImage2DExternalANGLEContextANGLE(ctx, target, level, internalformat, width,
                                                       height, border, format, type);
    }

    void GL_APIENTRY glInvalidateTextureANGLEContextANGLE(GLeglContext ctx, GLenum target)
    {
        return gl::InvalidateTextureANGLEContextANGLE(ctx, target);
    }
}