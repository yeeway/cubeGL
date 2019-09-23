/*
 * @Author: YuWei 
 * @Date: 2019-09-10 16:48:24 
 * @Last Modified by: YuWei
 * @Last Modified time: 2019-09-10 17:05:08
 */

#ifndef GLES_2_0_H
#define GLES_2_0_H

#include "GLES2/gl2.h"

namespace gl
{
    void ActiveTexture(GLenum texture);
    void AttachShader(GLuint program, GLuint shader);
    void BindAttribLocation(GLuint program, GLuint index, const GLchar *name);
    void BindBuffer(GLenum target, GLuint buffer);
    void BindFramebuffer(GLenum target, GLuint framebuffer);
    void BindRenderbuffer(GLenum target, GLuint renderbuffer);
    void BindTexture(GLenum target, GLuint texture);
    void BlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void BlendEquation(GLenum mode);
    void BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
    void BlendFunc(GLenum sfactor, GLenum dfactor);
    void BlendFuncSeparate(GLenum sfactorRGB,
                                    GLenum dfactorRGB,
                                    GLenum sfactorAlpha,
                                    GLenum dfactorAlpha);
    void BufferData(GLenum target,
                                GLsizeiptr size,
                                const void *data,
                                GLenum usage);
    void BufferSubData(GLenum target,
                                GLintptr offset,
                                GLsizeiptr size,
                                const void *data);
    GLenum CheckFramebufferStatus(GLenum target);
    void Clear(GLbitfield mask);
    void ClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void ClearDepthf(GLfloat d);
    void ClearStencil(GLint s);
    void ColorMask(GLboolean red,
                            GLboolean green,
                            GLboolean blue,
                            GLboolean alpha);
    void CompileShader(GLuint shader);
    void CompressedTexImage2D(GLenum target,
                                        GLint level,
                                        GLenum internalformat,
                                        GLsizei width,
                                        GLsizei height,
                                        GLint border,
                                        GLsizei imageSize,
                                        const void *data);
    void CompressedTexSubImage2D(GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLenum format,
                                            GLsizei imageSize,
                                            const void *data);
    void CopyTexImage2D(GLenum target,
                                    GLint level,
                                    GLenum internalformat,
                                    GLint x,
                                    GLint y,
                                    GLsizei width,
                                    GLsizei height,
                                    GLint border);
    void CopyTexSubImage2D(GLenum target,
                                    GLint level,
                                    GLint xoffset,
                                    GLint yoffset,
                                    GLint x,
                                    GLint y,
                                    GLsizei width,
                                    GLsizei height);
    GLuint CreateProgram();
    GLuint CreateShader(GLenum type);
    void CullFace(GLenum mode);
    void DeleteBuffers(GLsizei n, const GLuint *buffers);
    void DeleteFramebuffers(GLsizei n, const GLuint *framebuffers);
    void DeleteProgram(GLuint program);
    void DeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers);
    void DeleteShader(GLuint shader);
    void DeleteTextures(GLsizei n, const GLuint *textures);
    void DepthFunc(GLenum func);
    void DepthMask(GLboolean flag);
    void DepthRangef(GLfloat n, GLfloat f);
    void DetachShader(GLuint program, GLuint shader);
    void Disable(GLenum cap);
    void DisableVertexAttribArray(GLuint index);
    void DrawArrays(GLenum mode, GLint first, GLsizei count);
    void DrawElements(GLenum mode,
                                GLsizei count,
                                GLenum type,
                                const void *indices);
    void Enable(GLenum cap);
    void EnableVertexAttribArray(GLuint index);
    void Finish();
    void Flush();
    void FramebufferRenderbuffer(GLenum target,
                                            GLenum attachment,
                                            GLenum renderbuffertarget,
                                            GLuint renderbuffer);
    void FramebufferTexture2D(GLenum target,
                                        GLenum attachment,
                                        GLenum textarget,
                                        GLuint texture,
                                        GLint level);
    void FrontFace(GLenum mode);
    void GenBuffers(GLsizei n, GLuint *buffers);
    void GenFramebuffers(GLsizei n, GLuint *framebuffers);
    void GenRenderbuffers(GLsizei n, GLuint *renderbuffers);
    void GenTextures(GLsizei n, GLuint *textures);
    void GenerateMipmap(GLenum target);
    void GetActiveAttrib(GLuint program,
                                    GLuint index,
                                    GLsizei bufSize,
                                    GLsizei *length,
                                    GLint *size,
                                    GLenum *type,
                                    GLchar *name);
    void GetActiveUniform(GLuint program,
                                    GLuint index,
                                    GLsizei bufSize,
                                    GLsizei *length,
                                    GLint *size,
                                    GLenum *type,
                                    GLchar *name);
    void GetAttachedShaders(GLuint program,
                                        GLsizei maxCount,
                                        GLsizei *count,
                                        GLuint *shaders);
    GLint GetAttribLocation(GLuint program, const GLchar *name);
    void GetBooleanv(GLenum pname, GLboolean *data);
    void GetBufferParameteriv(GLenum target, GLenum pname, GLint *params);
    GLenum GetError();
    void GetFloatv(GLenum pname, GLfloat *data);
    void GetFramebufferAttachmentParameteriv(GLenum target,
                                                        GLenum attachment,
                                                        GLenum pname,
                                                        GLint *params);
    void GetIntegerv(GLenum pname, GLint *data);
    void GetProgramInfoLog(GLuint program,
                                    GLsizei bufSize,
                                    GLsizei *length,
                                    GLchar *infoLog);
    void GetProgramiv(GLuint program, GLenum pname, GLint *params);
    void GetRenderbufferParameteriv(GLenum target,
                                                GLenum pname,
                                                GLint *params);
    void GetShaderInfoLog(GLuint shader,
                                    GLsizei bufSize,
                                    GLsizei *length,
                                    GLchar *infoLog);
    void GetShaderPrecisionFormat(GLenum shadertype,
                                            GLenum precisiontype,
                                            GLint *range,
                                            GLint *precision);
    void GetShaderSource(GLuint shader,
                                    GLsizei bufSize,
                                    GLsizei *length,
                                    GLchar *source);
    void GetShaderiv(GLuint shader, GLenum pname, GLint *params);
    const GLubyte *GL_APIENTRY GetString(GLenum name);
    void GetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
    void GetTexParameteriv(GLenum target, GLenum pname, GLint *params);
    GLint GetUniformLocation(GLuint program, const GLchar *name);
    void GetUniformfv(GLuint program, GLint location, GLfloat *params);
    void GetUniformiv(GLuint program, GLint location, GLint *params);
    void GetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer);
    void GetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params);
    void GetVertexAttribiv(GLuint index, GLenum pname, GLint *params);
    void Hint(GLenum target, GLenum mode);
    GLboolean IsBuffer(GLuint buffer);
    GLboolean IsEnabled(GLenum cap);
    GLboolean IsFramebuffer(GLuint framebuffer);
    GLboolean IsProgram(GLuint program);
    GLboolean IsRenderbuffer(GLuint renderbuffer);
    GLboolean IsShader(GLuint shader);
    GLboolean IsTexture(GLuint texture);
    void LineWidth(GLfloat width);
    void LinkProgram(GLuint program);
    void PixelStorei(GLenum pname, GLint param);
    void PolygonOffset(GLfloat factor, GLfloat units);
    void ReadPixels(GLint x,
                                GLint y,
                                GLsizei width,
                                GLsizei height,
                                GLenum format,
                                GLenum type,
                                void *pixels);
    void ReleaseShaderCompiler();
    void RenderbufferStorage(GLenum target,
                                        GLenum internalformat,
                                        GLsizei width,
                                        GLsizei height);
    void SampleCoverage(GLfloat value, GLboolean invert);
    void Scissor(GLint x, GLint y, GLsizei width, GLsizei height);
    void ShaderBinary(GLsizei count,
                                const GLuint *shaders,
                                GLenum binaryformat,
                                const void *binary,
                                GLsizei length);
    void ShaderSource(GLuint shader,
                                GLsizei count,
                                const GLchar *const *string,
                                const GLint *length);
    void StencilFunc(GLenum func, GLint ref, GLuint mask);
    void StencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
    void StencilMask(GLuint mask);
    void StencilMaskSeparate(GLenum face, GLuint mask);
    void StencilOp(GLenum fail, GLenum zfail, GLenum zpass);
    void StencilOpSeparate(GLenum face,
                                    GLenum sfail,
                                    GLenum dpfail,
                                    GLenum dppass);
    void TexImage2D(GLenum target,
                                GLint level,
                                GLint internalformat,
                                GLsizei width,
                                GLsizei height,
                                GLint border,
                                GLenum format,
                                GLenum type,
                                const void *pixels);
    void TexParameterf(GLenum target, GLenum pname, GLfloat param);
    void TexParameterfv(GLenum target, GLenum pname, const GLfloat *params);
    void TexParameteri(GLenum target, GLenum pname, GLint param);
    void TexParameteriv(GLenum target, GLenum pname, const GLint *params);
    void TexSubImage2D(GLenum target,
                                GLint level,
                                GLint xoffset,
                                GLint yoffset,
                                GLsizei width,
                                GLsizei height,
                                GLenum format,
                                GLenum type,
                                const void *pixels);
    void Uniform1f(GLint location, GLfloat v0);
    void Uniform1fv(GLint location, GLsizei count, const GLfloat *value);
    void Uniform1i(GLint location, GLint v0);
    void Uniform1iv(GLint location, GLsizei count, const GLint *value);
    void Uniform2f(GLint location, GLfloat v0, GLfloat v1);
    void Uniform2fv(GLint location, GLsizei count, const GLfloat *value);
    void Uniform2i(GLint location, GLint v0, GLint v1);
    void Uniform2iv(GLint location, GLsizei count, const GLint *value);
    void Uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    void Uniform3fv(GLint location, GLsizei count, const GLfloat *value);
    void Uniform3i(GLint location, GLint v0, GLint v1, GLint v2);
    void Uniform3iv(GLint location, GLsizei count, const GLint *value);
    void GL_APIENTRY
    Uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    void Uniform4fv(GLint location, GLsizei count, const GLfloat *value);
    void Uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    void Uniform4iv(GLint location, GLsizei count, const GLint *value);
    void UniformMatrix2fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value);
    void UniformMatrix3fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value);
    void UniformMatrix4fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value);
    void UseProgram(GLuint program);
    void ValidateProgram(GLuint program);
    void VertexAttrib1f(GLuint index, GLfloat x);
    void VertexAttrib1fv(GLuint index, const GLfloat *v);
    void VertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
    void VertexAttrib2fv(GLuint index, const GLfloat *v);
    void VertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
    void VertexAttrib3fv(GLuint index, const GLfloat *v);
    void GL_APIENTRY
    VertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    void VertexAttrib4fv(GLuint index, const GLfloat *v);
    void VertexAttribPointer(GLuint index,
                                        GLint size,
                                        GLenum type,
                                        GLboolean normalized,
                                        GLsizei stride,
                                        const void *pointer);
    void Viewport(GLint x, GLint y, GLsizei width, GLsizei height);
} // namespace gl

#endif //end GLES_2_0_H