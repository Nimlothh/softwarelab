//modified

package org.example.demo2;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(name="loginServlet",value="/login-servlet")
public class LoginServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        // 获取用户名和密码
        response.setContentType("application/json");
        PrintWriter out = response.getWriter();
        String username = request.getParameter("username");
        String password = request.getParameter("password");



        // 假设用户名为admin，密码为123时表示登录成功
        boolean success = "admin".equals(username) && "123".equals(password);

        // 构建返回JSON数据
        if(success){
            out.print("{\"code\":1,\"msg\":\"ok\"}");
        }
        else{
            out.print("{\"code\":-1,\"msg\":\"用户名或密码错误\"}");
        }
    }
}












