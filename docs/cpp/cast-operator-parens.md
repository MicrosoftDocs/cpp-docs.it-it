---
title: "Operatore cast: () | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "() (operatore cast)"
  - "operatori di cast"
ms.assetid: 4c99eb92-1b19-4a5d-9840-5d8c29b8453e
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore cast: ()
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un cast di tipo fornisce un metodo per convertire esplicitamente il tipo di un oggetto in una situazione specifica.  
  
## Sintassi  
  
```  
  
      unary-expression  
( type-name ) cast-expression  
```  
  
## Note  
 Qualsiasi espressione unaria viene considerata un'espressione cast.  
  
 Il compilatore considera *cast\-expression* come tipo *type\-name* dopo aver eseguito un cast di tipo.  I cast possono essere utilizzati per convertire gli oggetti di qualsiasi tipo scalare verso o da qualsiasi altro tipo scalare.  I cast di tipo espliciti sono limitati dalle stesse regole che determinano gli effetti delle conversioni implicite.  I limiti aggiuntivi sui cast possono risultare dalle dimensioni effettive o dalla rappresentazione di tipi specifici.  
  
## Esempio  
  
```  
// expre_CastOperator.cpp  
// compile with: /EHsc  
// Demonstrate cast operator  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    double x = 3.1;  
    int i;  
    cout << "x = " << x << endl;  
    i = (int)x;   // assign i the integer part of x  
    cout << "i = " << i << endl;  
}  
```  
  
## Esempio  
  
```  
// expre_CastOperator2.cpp  
// The following sample shows how to define and use a cast operator.   
#include <string.h>  
#include <stdio.h>  
  
class CountedAnsiString  
{  
public:  
    // Assume source is not null terminated  
    CountedAnsiString(const char *pStr, size_t nSize) :  
                      m_nSize(nSize)  
    {  
        m_pStr = new char[sizeOfBuffer];  
  
        strncpy_s(m_pStr, sizeOfBuffer, pStr, m_nSize);  
        memset(&m_pStr[m_nSize], '!', 9); // for demonstration purposes.  
    }  
  
    // Various string-like methods...  
  
    const char *GetRawBytes() const  
    {  
        return(m_pStr);  
    }  
  
    //   
    // operator to cast to a const char *  
    //   
    operator const char *()  
    {  
        m_pStr[m_nSize] = '\0';  
        return(m_pStr);  
    }  
  
    enum  
    {  
        sizeOfBuffer = 20  
    } size;  
  
private:  
    char *m_pStr;  
    const size_t m_nSize;  
};  
  
int main()  
{  
    const char *kStr = "Excitinggg";  
    CountedAnsiString myStr(kStr, 8);  
  
    const char *pRaw = myStr.GetRawBytes();  
    printf_s("RawBytes truncated to 10 chars:   %.10s\n", pRaw);  
  
    const char *pCast = myStr; // or (const char *)myStr;  
    printf_s("Casted Bytes:   %s\n", pCast);  
  
    puts("Note that the cast changed the raw internal string");  
    printf_s("Raw Bytes after cast:   %s\n", pRaw);  
}  
```  
  
  **RawBytes è stato troncato a 10 caratteri: Exciting\!\!**  
**Byte di cui è stato eseguito il cast: Exciting**  
**Si noti che il cast ha modificato la stringa interna non elaborata**  
**Byte non elaborati dopo il cast: Exciting**   
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatore di conversione esplicita di tipi: \(\)](../cpp/explicit-type-conversion-operator-parens.md)   
 [Operatori di cast](../cpp/casting-operators.md)   
 [Operatori di cast](../c-language/cast-operators.md)