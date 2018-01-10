---
title: Puntatori const e volatile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- volatile keyword [C++], and pointers
- pointers, and const
- pointers, and volatile
- const keyword [C++], volatile pointers
ms.assetid: 0c92dc6c-400e-4342-b345-63ddfe649d7e
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 68089c80528265a4375767d9f0a744cb95cb970b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="const-and-volatile-pointers"></a>Puntatori const e volatile
Il [const](../cpp/const-cpp.md) e [volatile](../cpp/volatile-cpp.md) parole chiave modificare la modalità in cui vengono trattati i puntatori. Il **const** (parola chiave) specifica che il puntatore non può essere modificato dopo l'inizializzazione, il puntatore è protetto da modifiche successive.  
  
 La parola chiave `volatile` specifica che il valore associato al nome successivo può essere modificato da azioni diverse da quelle dell'applicazione utente. Di conseguenza, la parola chiave `volatile` è utile per dichiarare oggetti presenti nella memoria condivisa a cui più processi possono accedere o in aree dati globali utilizzate per la comunicazione con le routine del servizio di interrupt.  
  
 Quando un nome viene dichiarato come `volatile`, il compilatore ricarica il valore dalla memoria tutte le volte che il programma vi accede. In questo modo vengono ridotte notevolmente le ottimizzazioni possibili. Tuttavia, quando lo stato di un oggetto può cambiare in modo imprevisto, questo è l'unico modo per garantire prestazioni del programma prevedibili.  
  
 Per dichiarare l'oggetto a cui fa riferimento il puntatore come **const** o `volatile`, utilizzare una dichiarazione del modulo:  
  
```  
const char *cpch;  
volatile char *vpch;  
```  
  
 Per dichiarare il valore del puntatore, ovvero, ovvero l'indirizzo effettivo archiviato nel puntatore, ovvero come **const** o `volatile`, utilizzare una dichiarazione del modulo:  
  
```  
char * const pchc;  
char * volatile pchv;  
```  
  
 Il linguaggio C++ impedisce le assegnazioni che permetterebbero la modifica di un oggetto o puntatore dichiarato come **const**. Tali assegnazioni rimuoverebbero le informazioni utilizzate per dichiarare l'oggetto o il puntatore, violando pertanto lo scopo della dichiarazione originale. Si considerino le dichiarazioni seguenti:  
  
```  
const char cch = 'A';  
char ch = 'B';  
```  
  
 Date le dichiarazioni precedenti di due oggetti (`cch`, di tipo **const char**, e `ch`, di tipo **char)**, la dichiarazione e le inizializzazioni seguenti sono valide:  
  
```  
const char *pch1 = &cch;  
const char *const pch4 = &cch;  
const char *pch5 = &ch;  
char *pch6 = &ch;  
char *const pch7 = &ch;  
const char *const pch8 = &ch;  
```  
  
 La dichiarazione e le inizializzazioni seguenti non sono corrette.  
  
```  
char *pch2 = &cch;   // Error  
char *const pch3 = &cch;   // Error  
```  
  
 La dichiarazione di `pch2` definisce un puntatore tramite cui un oggetto costante potrebbe essere modificato e pertanto non è consentita. La dichiarazione di `pch3` specifica che `pointer` è costante, non l'oggetto. Non è pertanto consentita per lo stesso motivo della dichiarazione `pch2`.  
  
 Le otto assegnazioni seguenti mostrano l'assegnazione mediante il puntatore e la modifica del relativo valore per le dichiarazioni precedenti. Si supponga per il momento che l'inizializzazione sia corretta per `pch1` tramite `pch8`.  
  
```  
*pch1 = 'A';  // Error: object declared const  
pch1 = &ch;   // OK: pointer not declared const  
*pch2 = 'A';  // OK: normal pointer  
pch2 = &ch;   // OK: normal pointer  
*pch3 = 'A';  // OK: object not declared const  
pch3 = &ch;   // Error: pointer declared const  
*pch4 = 'A';  // Error: object declared const  
pch4 = &ch;   // Error: pointer declared const  
```  
  
 I puntatori dichiarati come `volatile`, o come una combinazione di **const** e `volatile`, rispettano le stesse regole.  
  
 Puntatori a **const** vengono spesso utilizzati nelle dichiarazioni di funzione come segue:  
  
```  
errno_t strcpy_s( char *strDestination, size_t numberOfElements, const char *strSource );  
```  
  
 L'istruzione precedente viene dichiarata una funzione, [strcpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md), in cui due dei tre argomenti sono di tipo puntatore a `char`. Poiché gli argomenti vengono passati per riferimento e non per valore, la funzione potrebbe modificare sia `strDestination` e `strSource` se `strSource` non è stato dichiarato come **const**. La dichiarazione di `strSource` come **const** garantisce al chiamante che `strSource` non può essere modificato dalla funzione chiamata.  
  
> [!NOTE]
>  Poiché non esiste una conversione standard da *typename*  **\***  a **const** *typename*  **\*** , è possibile passare un argomento di tipo **char \***  a [strcpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md). Tuttavia, il contrario non è true. non esiste alcuna conversione implicita per rimuovere il **const** attributo da un oggetto o puntatore.  
  
 Oggetto **const** puntatore di un tipo specificato può essere assegnato a un puntatore dello stesso tipo. Tuttavia, un puntatore che non è **const** non può essere assegnato a un **const** puntatore. Nel codice seguente vengono mostrate le assegnazioni corrette e quelle non corrette:  
  
```  
// const_pointer.cpp  
int *const cpObject = 0;  
int *pObject;  
  
int main() {  
pObject = cpObject;  
cpObject = pObject;   // C3892  
}  
```  
  
 Nell'esempio seguente viene illustrato come dichiarare un oggetto come const se si dispone di un puntatore a un puntatore a un oggetto.  
  
```  
// const_pointer2.cpp  
struct X {  
   X(int i) : m_i(i) { }  
   int m_i;  
};  
  
int main() {  
   // correct  
   const X cx(10);  
   const X * pcx = &cx;  
   const X ** ppcx = &pcx;  
  
   // also correct  
   X const cx2(20);  
   X const * pcx2 = &cx2;  
   X const ** ppcx2 = &pcx2;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Puntatori](../cpp/pointers-cpp.md)