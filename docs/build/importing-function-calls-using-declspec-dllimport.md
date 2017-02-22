---
title: "Importazione di chiamate di funzione tramite __declspec(dllimport) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__declspec"
  - "dllimport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec(dllimport) (parola chiave) [C++]"
  - "attributo dllimport [C++], importazioni di chiamate di funzione"
  - "chiamate di funzione [C++], importazione"
  - "importazione di chiamate di funzioni [C++]"
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Importazione di chiamate di funzione tramite __declspec(dllimport)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare **\_declspec\(dllimport\)** per importare le chiamate di funzione da una DLL in un'applicazione.  Si presuppone che `func1` sia una funzione contenuta in una DLL separata dal file exe contenente la funzione **main**.  
  
 Senza **\_\_declspec\(dllimport\)**, dato il seguente codice:  
  
```  
int main(void)   
{  
   func1();  
}  
```  
  
 il compilatore genera un codice simile al seguente:  
  
```  
call func1  
```  
  
 e il linker traduce la chiamata in modo simile al seguente:  
  
```  
call 0x4000000         ; The address of 'func1'.  
```  
  
 Se `func1` si trova in un'altra DLL, il linker non può risolvere direttamente questo codice poiché non conosce l'indirizzo di `func1`.  Negli ambienti a 16 bit il linker aggiunge questo indirizzo di codice a un elenco nel file exe che il caricatore corregge in fase di esecuzione con l'indirizzo corretto.  Negli ambienti a 32 bit e a 64 bit, il linker genera un thunk di cui conosce l'indirizzo.  In un ambiente a 32 bit il thunk ha un aspetto simile al seguente:  
  
```  
0x40000000:    jmp DWORD PTR __imp_func1  
```  
  
 `imp_func1` è l'indirizzo dello slot di `func1` nella tabella di indirizzi di importazione del file exe.  Tutti gli indirizzi sono quindi noti al linker.  Affinché tutto funzioni correttamente, il caricatore deve semplicemente aggiornare la tabella di importazione di indirizzi del file exe in fase di caricamento.  
  
 Pertanto, l'utilizzo di **\_\_declspec\(dllimport\)** è preferibile poiché il linker non genera un thunk se non è necessario.  I thunk aumentano la quantità di codice \(sui sistemi RISC possono richiedere molte istruzioni\) influendo negativamente sulle prestazioni della cache.  Se si segnala al compilatore che la funzione si trova in una DLL, questo può generare una chiamata indiretta.  
  
 Nel seguente codice:  
  
```  
__declspec(dllimport) void func1(void);  
int main(void)   
{  
   func1();  
}  
```  
  
 viene generata la seguente istruzione:  
  
```  
call DWORD PTR __imp_func1  
```  
  
 Non sono presenti thunk né istruzioni `jmp` e quindi il codice è più piccolo e più rapido.  
  
 D'altra parte, per le chiamate di funzioni all'interno di una DLL si consiglia di non utilizzare una chiamata indiretta.  L'indirizzo della funzione si conosce già.  Poiché il caricamento e la memorizzazione dell'indirizzo della funzione prima di una chiamata indiretta richiedono tempo e spazio, è preferibile utilizzare una chiamata diretta.  Si utilizza **\_\_declspec\(dllimport\)** solo quando si chiamano le funzioni della DLL dall'esterno della DLL stessa.  Non utilizzare **\_\_declspec\(dllimport\)** sulle funzioni contenute in una DLL quando si compila tale DLL.  
  
## Vedere anche  
 [Importazione in un'applicazione](../build/importing-into-an-application.md)