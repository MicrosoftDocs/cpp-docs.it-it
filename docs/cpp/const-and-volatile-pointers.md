---
title: "Puntatori const e volatile | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const (parola chiave) [C++], puntatori volatile"
  - "puntatori, e const"
  - "puntatori, e volatile"
  - "volatile (parola chiave) [C++], e puntatori"
ms.assetid: 0c92dc6c-400e-4342-b345-63ddfe649d7e
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Puntatori const e volatile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le parole chiave [const](../cpp/const-cpp.md) e [volatile](../cpp/volatile-cpp.md) modificano il modo in cui vengono trattati i puntatori.  La parola chiave **const** specifica che il puntatore non può essere modificato dopo l'inizializzazione per proteggerlo da modifiche successive.  
  
 La parola chiave `volatile` specifica che il valore associato al nome successivo può essere modificato da azioni diverse da quelle dell'applicazione utente.  Di conseguenza, la parola chiave `volatile` è utile per dichiarare oggetti presenti nella memoria condivisa a cui più processi possono accedere o in aree dati globali utilizzate per la comunicazione con le routine del servizio di interrupt.  
  
 Quando un nome viene dichiarato come `volatile`, il compilatore ricarica il valore dalla memoria tutte le volte che il programma vi accede.  In questo modo vengono ridotte notevolmente le ottimizzazioni possibili.  Tuttavia, quando lo stato di un oggetto può cambiare in modo imprevisto, questo è l'unico modo per garantire prestazioni del programma prevedibili.  
  
 Per dichiarare l'oggetto a cui il puntatore fa riferimento come **const** o `volatile`, utilizzare una dichiarazione del modulo:  
  
```  
const char *cpch;  
volatile char *vpch;  
```  
  
 Per dichiarare il valore del puntatore, ovvero l'indirizzo effettivo archiviato nel puntatore, come **const** o `volatile`, utilizzare una dichiarazione del modulo:  
  
```  
char * const pchc;  
char * volatile pchv;  
```  
  
 Nel linguaggio C\+\+ non sono consentite le assegnazioni che permetterebbero la modifica di un oggetto o di un puntatore dichiarato come **const**.  Tali assegnazioni rimuoverebbero le informazioni utilizzate per dichiarare l'oggetto o il puntatore, violando pertanto lo scopo della dichiarazione originale.  Si considerino le dichiarazioni seguenti:  
  
```  
const char cch = 'A';  
char ch = 'B';  
```  
  
 Date le dichiarazioni precedenti di due oggetti \(`cch`, di tipo **const char** e `ch`, di tipo **char\)**, la dichiarazione e le inizializzazioni seguenti sono valide:  
  
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
  
 La dichiarazione di `pch2` definisce un puntatore tramite cui un oggetto costante potrebbe essere modificato e pertanto non è consentita.  La dichiarazione di `pch3` specifica che `pointer` è costante, non l'oggetto. Non è pertanto consentita per lo stesso motivo della dichiarazione `pch2`.  
  
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
  
 I puntatori dichiarati come `volatile` o come una combinazione di **const** e `volatile` rispettano le stesse regole.  
  
 I puntatori agli oggetti **const** vengono spesso utilizzati nelle dichiarazioni di funzione nel modo indicato di seguito:  
  
```  
errno_t strcpy_s( char *strDestination, size_t numberOfElements, const char *strSource );  
```  
  
 Tramite l'istruzione precedente viene dichiarata una funzione, [strcpy\_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md), in cui due dei tre argomenti sono di tipo puntatore a `char`.  Poiché gli argomenti vengono passati per riferimento e non per valore, la funzione potrebbe modificare sia `strDestination` che `strSource` se `strSource` non è stato dichiarato come **const**.  La dichiarazione di `strSource` come **const** garantisce al chiamante che `strSource` non può essere modificato dalla funzione chiamata.  
  
> [!NOTE]
>  Poiché è presente una conversione standard da *typename* **\*** a **const** *typename* **\***, il passaggio di un argomento di tipo **char \*** a [strcpy\_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) è un'operazione valida.  L'operazione contraria tuttavia non è valida poiché non esiste alcuna conversione implicita per rimuovere l'attributo **const** da un oggetto o da un puntatore.  
  
 Un puntatore **const** di un tipo specificato può essere assegnato a un puntatore dello stesso tipo.  Un puntatore non **const**, tuttavia, non può essere assegnato a un puntatore **const**.  Nel codice seguente vengono mostrate le assegnazioni corrette e quelle non corrette:  
  
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
  
## Vedere anche  
 [Puntatori](../cpp/pointers-cpp.md)