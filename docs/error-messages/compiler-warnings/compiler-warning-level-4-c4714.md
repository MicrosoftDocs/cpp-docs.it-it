---
title: "Avviso del compilatore (livello 4) C4714 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4714"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4714"
ms.assetid: 22c7fd0c-899d-4e9b-95f3-725b2c49fb46
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4714
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

funzione 'funzione' contrassegnata come \_\_forceinline non resa inline  
  
 La funzione specificata è stata selezionata per l'espansione inline, ma l'operazione non è stata eseguita.  
  
 Benché `__forceinline` sia un'indicazione più forte di `__inline` per il compilatore, l'operazione di inline viene comunque eseguita a discrezione del compilatore, ma non vengono utilizzati sistemi euristici per determinare i vantaggi derivanti dalla funzione inline.  
  
 In alcuni casi, una particolare funzione non viene resa inline per motivi meccanici.  Di seguito sono riportati alcuni esempi di funzioni che non vengono rese inline:  
  
-   Funzioni che risulterebbero in una mescolanza di SEH ed EH di C\+\+.  
  
-   Funzioni con oggetti creati tramite costruttore di copia passati per valore quando l'opzione \-GX\/EHs\/EHa è attivata.  
  
-   Funzioni che restituiscono un oggetto non svuotabile per valore quando l'opzione \-GX\/EHs\/EHa è attivata.  
  
-   Funzioni con codice assembly inline durante la compilazione senza \-Og\/Ox\/O1\/O2.  
  
-   Funzioni con un elenco di argomenti variabile.  
  
-   Funzioni con un'istruzione **try** \(gestione delle eccezioni C\+\+\).  
  
 Il seguente codice di esempio genera l'errore C4714:  
  
```  
// C4714.cpp  
// compile with: /Ob1 /GX /W4  
__forceinline void func1()  
{  
   try  
   {  
   }  
   catch (...)  
   {  
   }  
}  
  
void func2()  
{  
   func1();   // C4714  
}  
  
int main()  
{  
}  
```