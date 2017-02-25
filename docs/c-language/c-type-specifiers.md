---
title: "Identificatori di tipi C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "identificatori, tipo"
  - "identificatori di tipi, C"
ms.assetid: fbe13441-04c3-4829-b047-06d374adc2b6
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Identificatori di tipi C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli identificatori di tipo nelle dichiarazioni definiscono il tipo di una dichiarazione di funzione o variabile.  
  
## Sintassi  
 *type\-specifier*:  
 **void**  
  
 **char**  
  
 **short**  
  
 **int**  
  
 **long**  
  
 **float**  
  
 **double**  
  
 **signed**  
  
 **unsigned**  
  
 *struct\-or\-union\-specifier*  
  
 *enum\-specifier*  
  
 *typedef\-name*  
  
 I tipi **signed char**, **signed int**, **signed short int** e **signed long int**, insieme alle relative controparti `unsigned` e a `enum`, vengono denominati tipi "integrali".  Gli identificatori di tipo **float**, **double** e `long double` sono definiti come tipi "mobili" o "a virgola mobile".  È possibile utilizzare qualsiasi identificatore di tipo a virgola mobile o integrale in una dichiarazione di funzione o variabile.  Se un *type\-specifier* non viene fornito in una dichiarazione, si presuppone che sia `int`.  
  
 Le parole chiave facoltative **signed** e `unsigned` possono precedere o seguire uno dei tipi integrali, eccetto `enum`, e possono essere utilizzate da sole come identificatori di tipo, nel qual caso vengono riconosciute come **signed int** e `unsigned int`.  Se utilizzata da sola, si presuppone che la parola chiave `int` sia **signed**.  Se utilizzate da sole, le parole chiave **long** e **short** vengono riconosciute come **long int** e `short int`.  
  
 I tipi di enumerazione sono considerati tipi di base.  Gli identificatori di tipo per i tipi di enumerazione sono illustrati in [Dichiarazioni di enumerazioni](../c-language/c-enumeration-declarations.md).  
  
 La parola chiave `void` dispone di tre utilizzi: specificare un tipo restituito dalla funzione, specificare un elenco di tipi di argomento per una funzione che non accetta argomenti e specificare un puntatore a un tipo non specificato.  È possibile utilizzare il tipo `void` per dichiarare le funzioni che non restituiscono valori o per dichiarare un puntatore a un tipo non specificato.  Vedere [Argomenti](../c-language/arguments.md) per informazioni su `void` quando viene visualizzato da solo tra parentesi dopo il nome di una funzione.  
  
 **Sezione specifica Microsoft**  
  
 Il controllo dei tipi è ora conforme a ANSI, vale a dire che il tipo **short** e il tipo `int` sono tipi distinti.  Ad esempio, questa è una ridefinizione del compilatore Microsoft C che è stata accettata da versioni precedenti del compilatore.  
  
```  
int   myfunc();  
short myfunc();  
```  
  
 Nell'esempio seguente viene inoltre generato un avviso su un riferimento indiretto a tipi diversi:  
  
```  
int *pi;  
short *ps;  
  
ps = pi;  /* Now generates warning */  
```  
  
 Il compilatore Microsoft C genera inoltre gli avvisi per le differenze nel segno.  Ad esempio:  
  
```  
signed int *pi;  
unsigned int *pu  
  
pi = pu;  /* Now generates warning */  
```  
  
 Le espressioni di tipo `void` vengono valutate per gli effetti collaterali.  Non è possibile utilizzare il valore \(inesistente\) di un'espressione con tipo `void` in nessun modo, né convertire un'espressione `void` \(mediante conversione implicita o esplicita\) in un qualsiasi tipo eccetto `void`.  Se si utilizza un'espressione di qualsiasi altro tipo in un contesto in cui viene richiesta un'espressione `void`, il valore viene rimosso.  
  
 Per essere conforme alla specifica ANSI, **void\*\*** non può essere utilizzato come **int\*\***.  Solo **void\*** può essere utilizzato come puntatore a un tipo non specificato.  
  
 **Fine sezione specifica Microsoft**  
  
 È possibile creare gli identificatori di tipo aggiuntivi con dichiarazioni `typedef`, come descritto in [Dichiarazioni typedef](../c-language/typedef-declarations.md).  Vedere [Archiviazione dei tipi di base](../c-language/storage-of-basic-types.md) per informazioni sulla dimensione di ogni tipo.  
  
## Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)