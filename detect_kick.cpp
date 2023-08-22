body {
  padding: 0px;
  margin: 0px;
}

.top_header {
  background-color: #246af4;
  padding: 8px 40px;
}

.top_header_left {
  margin: 0;
  padding: 0;
  list-style: none;
}
.top_header_left li {
  color: #fff;
  display: inline-block;
}

.social_icon ul {
  margin: 0;
  padding: 0;
  list-style: none;
}

.social_icon li {
  display: inline-block;
}

.social_icon a {
  display: block;
  color: #ffffff;
  border: 1px solid #fff;
  border-radius: 100%;
  width: 30px;
  height: 30px;
  text-align: center;
  line-height: 30px;
}



.top_header_left a {
  color: white;
  text-decoration: none;
  padding: 0 6px;
}

button {
  border-radius: 50px;
}

.navbar-image {
  width: 100px;
  padding: 0 0 2px 0;
}

.navbar_main {
  display: flex;
  justify-content: space-between;
  align-items: flex-start;
  width: 100%;
}

.navbar_right {
  display: flex;
  line-height: 10px;
  width: 40%;
}

.navbar_left {
  width: 15%;
  display: flex;
  justify-content: center;
}

.menu-logo .navbar-brand img {
  width: 100px;
}

.topinner--menu.navbar{
padding: 0px;
}

.banner--main:before {
  position: absolute;
  content: "";
  width: 100%;
  height: 100%;
  left: 0;
  top: 0;
  background: #000000b8;
  /* opacity: 1; */
}

section.banner--main {
  padding: 60px 0px;
}

.navbar_right_right {
  display: flex;
  align-items: center;
  padding: 2px;
  margin: 2px;
}

.banner_front {
  align-items: center;
  width: 1520px;
  height: 700px;
  background: linear-gradient(
      to right,
      rgba(0, 0, 0, 0.5) 50%,
      rgba(0, 0, 0, 0.5) 50%
    ),
    url(images/back1.jpg);
  background-size: cover;
  display: flex;
  justify-content: center;
}

.anchor {
  color: #fff;
  text-decoration: none;
}

.banner_front_left {
  max-width: 40%;
}

.banner_front_right {
  max-width: 30%;
}

header.header_sec {
  padding: 10px 0;
}

.modal.left .modal-dialog,
.modal.right .modal-dialog {
  position: fixed;
  margin: auto;
  width: 320px;
  height: 100%;
  -webkit-transform: translate3d(0%, 0, 0);
  -ms-transform: translate3d(0%, 0, 0);
  -o-transform: translate3d(0%, 0, 0);
  transform: translate3d(0%, 0, 0);
}

.modal.left .modal-content,
.modal.right .modal-content {
  height: 100%;
  overflow-y: auto;
}

.modal.left .modal-body,
.modal.right .modal-body {
  padding: 15px 15px 80px;
}

/*Left*/
.modal.left.fade .modal-dialog {
  left: -320px;
  -webkit-transition: opacity 0.3s linear, left 0.3s ease-out;
  -moz-transition: opacity 0.3s linear, left 0.3s ease-out;
  -o-transition: opacity 0.3s linear, left 0.3s ease-out;
  transition: opacity 0.3s linear, left 0.3s ease-out;
}

.modal.left.fade.show .modal-dialog {
  left: 0;
}

/*Right*/
.modal.right.fade .modal-dialog {
  right: -320px;
  -webkit-transition: opacity 0.3s linear, right 0.3s ease-out;
  -moz-transition: opacity 0.3s linear, right 0.3s ease-out;
  -o-transition: opacity 0.3s linear, right 0.3s ease-out;
  transition: opacity 0.3s linear, right 0.3s ease-out;
}

.modal.right.fade.show .modal-dialog {
  right: 0;
}

/* ----- MODAL STYLE ----- */
.modal-content {
  border-radius: 0;
  border: none;
}

.modal-header {
  border-bottom-color: #eeeeee;
  background-color: #fafafa;
}



.DSC h1 {
  font-size: 16px;
  font-weight: 600;
}

.mp{
  color:#eeeeee;
}
.bb{
  background-color:rgb(0, 21, 255)
}
.ik {
  padding: 0 150px 0 25px;
}

.ik span {
  color: #eee;
  font-weight: 600;
}

.ik h1 {
  color: #fff;
}

.ik p {
  color: #d1d1d1;
  font-size: 14px;
}

.social_icon button {
  background: transparent;
  border: none;
  border: solid 1px #fff;
  color: #fff;
  font-size: 14px;
  padding: 3px 16px;
  margin-right: 8px;
}
.card{
  border-radius: 10px;
  opacity: 0.85;
}
.DSC{
  color: rgb(0, 0, 255);
}
.num{
  text-align: left;

}
.price{
  color: tomato;
}
.downb{
   /* text-align: left; */
   padding-left: 1%; 
  padding-top: 1% ; 
  padding-right: 1%;
  float: left;
}
.Foci{
  padding-left: 20%;
}