---
title: "selectany | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "selectany_cpp"
  - "selectany"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], selectany"
  - "selectany __declspec (parola chiave)"
ms.assetid: 9c353017-5a42-4f50-b741-bd13da1ce84d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# selectany
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Viene indicato al compilatore che l'elemento dati globale \(variabile o oggetto\) è una funzione inclusa nel pacchetto \(COMDAT\) a scelta.  
  
## Sintassi  
  
```  
  
__declspec( selectany ) declarator  
```  
  
## Note  
 In fase di collegamento, se sono visualizzate più definizioni di COMDAT, il linker ne sceglie una e ignora il resto.  Se l'opzione del linker [\/opt:REF](../build/reference/opt-optimizations.md) \(ottimizzazioni\) è selezionata, viene eseguita l'eliminazione COMDAT, in modo da rimuovere tutti gli elementi dati senza riferimenti presenti nell'output del linker.  
  
 I costruttori e l'assegnazione attraverso funzione globale o metodi statici presenti nella dichiarazione non creano un riferimento e non impediscono l'eliminazione di \/opt:REF.  Non si dovrebbe contare sugli effetti collaterali di tale codice, quando non esistono altri riferimenti ai dati.  
  
 Per gli oggetti globali, inizializzati in modo dinamico, `selectany` rimuove anche il codice di inizializzazione senza riferimenti dell'oggetto.  
  
 In genere, un elemento dati globale può essere inizializzato solo una volta, in un progetto DLL o EXE.  `selectany` può essere utilizzato per inizializzare i dati globali definiti dalle intestazioni, quando la stessa intestazione è presente in più file di origine.  `selectany` è disponibile sia per i compilatori C\+\+ che per i compilatori C.  
  
> [!NOTE]
>  `selectany` può essere applicato solo all'effettiva inizializzazione degli elementi di dati globali che sono visibili esternamente.  
  
## Esempio  
 In questo codice viene illustrato come utilizzare l'attributo `selectany`:  
  
```  
//Correct - x1 is initialized and externally visible   
__declspec(selectany) int x1=1;  
  
//Incorrect - const is by default static in C++, so   
//x2 is not visible externally (This is OK in C, since  
//const is not by default static in C)  
const __declspec(selectany) int x2 =2;  
  
//Correct - x3 is extern const, so externally visible  
extern const __declspec(selectany) int x3=3;  
  
//Correct - x4 is extern const, so it is externally visible  
extern const int x4;  
const __declspec(selectany) int x4=4;  
  
//Incorrect - __declspec(selectany) is applied to the uninitialized  
//declaration of x5  
extern __declspec(selectany) int x5;  
  
// OK: dynamic initialization of global object  
class X {  
public:  
X(int i){i++;};  
int i;  
};  
  
__declspec(selectany) X x(1);  
```  
  
## Esempio  
 In questo codice viene illustrato come utilizzare l'attributo `selectany` per garantire la riduzione di dati COMDAT quando si utilizza anche l'opzione del linker [\/opt:ICF](../build/reference/opt-optimizations.md).  Si noti che i dati devono essere contrassegnati con `selectany` e devono essere inseriti in una sezione **const** di sola lettura.  È necessario specificare esplicitamente la sezione di sola lettura.  
  
```  
// selectany2.cpp  
// in the following lines, const marks the variables as read only  
__declspec(selectany) extern const int ix = 5;  
__declspec(selectany) extern const int jx = 5;  
int main() {  
   int ij;  
   ij = ix + jx;  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)