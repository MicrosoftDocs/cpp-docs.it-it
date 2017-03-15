---
title: "Cenni preliminari di funzioni membro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni inline, utilizzo di funzioni membro"
  - "funzioni membro, definizione nella dichiarazione di classe"
  - "funzioni membro non statiche"
  - "puntatore 'this', e funzioni membro non statiche"
ms.assetid: 9f77a438-500e-40bb-a6c6-544678f3f4c8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Cenni preliminari di funzioni membro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni membro possono essere o statiche o non statiche.  Il comportamento delle funzioni membro statiche differisce dal comportamento delle altre funzioni membro, perché le funzioni membro statiche non hanno l'argomento implicito **this**.  Le funzioni membro non statiche hanno un puntatore **this**.  Le funzioni membro, che siano statiche o non statiche, possono essere definite o all'interno o all'esterno della dichiarazione di classe.  
  
 Se una funzione membro viene definita all'interno della dichiarazione di classe, la stessa viene considerata come funzione inline e non è necessario qualificare il nome di funzione con il relativo nome di classe.  Sebbene le funzioni definite all'interno di dichiarazioni di classe siano già considerate come funzioni inline, è possibile utilizzare la parola chiave **inline** per documentare il codice.  
  
 Di seguito, un esempio di dichiarazione di funzione all'interno di una dichiarazione di classe:  
  
```  
// overview_of_member_functions1.cpp  
class Account  
{  
public:  
    // Declare the member function Deposit within the declaration  
    //  of class Account.  
    double Deposit( double HowMuch )  
    {  
        balance += HowMuch;  
        return balance;  
    }  
private:  
    double balance;  
};  
  
int main()  
{  
}  
```  
  
 Se la definizione di una funzione membro è esterna alla dichiarazione di classe, viene considerata come funzione inline solo se è dichiarata come **inline** in modo esplicito.  Inoltre, il nome della funzione nella definizione deve essere qualificato con il relativo nome di classe utilizzando l'operatore di risoluzione dell'ambito \(`::`\).  
  
 L'esempio seguente è identico alla precedente dichiarazione di classe `Account`, con la differenza che la funzione `Deposit` è definita all'esterno della dichiarazione di classe:  
  
```  
// overview_of_member_functions2.cpp  
class Account  
{  
public:  
    // Declare the member function Deposit but do not define it.  
    double Deposit( double HowMuch );  
private:  
    double balance;  
};  
  
inline double Account::Deposit( double HowMuch )  
{  
    balance += HowMuch;  
    return balance;  
}  
  
int main()  
{  
}  
```  
  
> [!NOTE]
>  Sebbene le funzioni membro possano essere definite sia all'interno di una dichiarazione di classe che separatamente, nessuna funzione membro può essere aggiunta a una classe, una volta che la classe è stata definita.  
  
 Le classi che contengono funzioni membro possono avere diverse dichiarazioni, ma le singole funzioni membro devono avere una sola definizione all'interno di un programma.  Le definizioni multiple generano un messaggio di errore in fase di collegamento.  Se una classe contiene definizioni di funzioni inline, le definizioni di funzioni devono essere identiche, al fine di rispettare la regola della "definizione unica".  
  
## Vedere anche  
 [Funzioni membro](../misc/member-functions-cpp.md)