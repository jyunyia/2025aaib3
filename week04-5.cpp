//week04-5.cpp

//�q�k�����ݨ�L�Ӱj��
//1,9,9
//    0�]�����i��ҥH����[1
//  0  �]�����i��ҥH����[1
//2    �S���i�쪽����쵪��
//1,2,3
//    4�S���i�쪽����쵪��
//9,9,9
//1,0,0,0�p�G�@���i��S��쵪���٭n�e����1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//�����D�}�C������,�H�K�˹L�Ӫ��j��
        for(int i=N-1; i>=0; i--) {
            if( digits[i] ==9) digits[i] =0;//�i���ܦ�0(�٨S��쵪��)
            else{//�S���i��N�O��쵪��
                digits[i]++;//�N+1��S���i��
                return digits;//��쵪�פF�e�X�h
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
