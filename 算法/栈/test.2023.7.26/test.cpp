
//20.有效的括号
//class Solution {
//private:
//    stack<char> st;
//public:
//    bool isValid(string s)
//    {
//        if (s.size() % 2 == 1)
//        {
//            return false;
//        }
//        int i;
//        int left = 0, right = 0;
//        for (i = 0; i < s.size(); i++)
//        {
//            if (s[i] == '('
//                || s[i] == '{'
//                || s[i] == '[')
//            {
//                st.push(s[i]);
//                left++;
//            }
//            else if (s[i] == ')'
//                || s[i] == '}'
//                || s[i] == ']')
//            {
//                right++;
//                if (!st.empty())
//                {
//                    if (s[i] == ')')
//                    {
//                        if (st.top() == '(')
//                        {
//                            st.pop();
//                        }
//                    }
//                    else if (s[i] == '}')
//                    {
//                        if (st.top() == '{')
//                        {
//                            st.pop();
//                        }
//                    }
//                    else
//                    {
//                        if (st.top() == '[')
//                        {
//                            st.pop();
//                        }
//                    }
//                }
//            }
//        }
//        if (st.empty() && left == right)
//        {
//            return true;
//        }
//        return false;
//    }
//};

//225.用队列实现栈
//class MyStack {
//private:
//    queue<int> q1;
//    queue<int> q2;
//public:
//    MyStack() {}
//
//    void push(int x) {
//        q1.push(x);
//    }
//
//    int pop() {
//        if (q1.size() > 1)
//        {
//            while (q1.size() > 1)
//            {
//                q2.push(q1.front());
//                q1.pop();
//            }
//            int ret = q1.front();
//            q1.pop();
//            return ret;
//        }
//        else if (q2.size() > 1)
//        {
//            while (q2.size() > 1)
//            {
//                q1.push(q2.front());
//                q2.pop();
//            }
//            int ret = q2.front();
//            q2.pop();
//            return ret;
//        }
//        else if (q1.size() == 1)
//        {
//            int ret = q1.front();
//            q1.pop();
//            return ret;
//        }
//        else if (q2.size() == 1)
//        {
//            int ret = q2.front();
//            q2.pop();
//            return ret;
//        }
//
//        return -1;
//    }
//
//    int top() {
//        while (q1.size() > 1)
//        {
//            q2.push(q1.front());
//            q1.pop();
//        }
//        if (q1.size() == 1)
//        {
//            int ret = q1.front();
//            q1.pop();
//            q2.push(ret);
//            return ret;
//        }
//        while (q2.size() > 1)
//        {
//            q1.push(q2.front());
//            q2.pop();
//        }
//        if (q2.size() == 1)
//        {
//            int ret = q2.front();
//            q2.pop();
//            q1.push(ret);
//            return ret;
//        }
//        return -1;
//    }
//
//    bool empty() {
//        if (q1.empty() && q2.empty())
//        {
//            return true;
//        }
//        return false;
//    }
//};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

//232.用栈实现队列
//class MyQueue {
//private:
//    stack<int> s1, s2;
//public:
//    MyQueue() {}
//
//    void push(int x) {
//        s1.push(x);
//    }
//
//    int pop() {
//        if (!s1.empty() && s2.empty())
//        {
//            while (!s1.empty())
//            {
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//        int ret = s2.top();
//        s2.pop();
//        return ret;
//    }
//
//    int peek() {
//        if (!s1.empty() && s2.empty())
//        {
//            while (!s1.empty())
//            {
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//        return s2.top();
//    }
//
//    bool empty() {
//        if (s1.empty() && s2.empty())
//        {
//            return true;
//        }
//        return false;
//    }
//};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */