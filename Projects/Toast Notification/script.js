let toastBox = document.getElementById('toastbox');

function showToast(){
    let toast = document.createElement('div');
    toast.classList.add('toast');
    toast.innerHTML = 'Success';
    toastBox.appendChild(toast);
}