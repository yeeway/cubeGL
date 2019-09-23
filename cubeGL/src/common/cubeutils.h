/*
 * @Author: YuWei 
 * @Date: 2019-09-11 16:39:53 
 * @Last Modified by: YuWei
 * @Last Modified time: 2019-09-11 16:44:43
 */

namespace cube {
    class NonCopyable {
    protected:
        constexpr NonCopyable() = default;
        ~NonCopyable()          = default;
    
    private:
        NonCopyable(const NonCopyable &)    = delete;
        void operator=(const NonCopyable &) = delete;
    };
}