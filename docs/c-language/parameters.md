---
title: "Parametri | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "... (puntini di sospensione)"
  - "argomenti [C++], funzione"
  - "puntini di sospensione (...), parametri"
  - "argomenti di funzioni, e parametri"
  - "funzione (parametri)"
  - "funzione (parametri), sintassi"
  - "funzioni [C], parametri"
  - "parametri [C++]"
  - "parametri [C++], funzione"
ms.assetid: 8f2b8026-78b5-4e21-86a3-bf0f91f05689
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parametri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli argomenti sono nomi dei valori passati a una funzione da una chiamata di funzione.  I parametri sono i valori che la funzione prevede di ricevere.  In un prototipo di funzione, le parentesi dopo il nome della funzione contengono un elenco completo dei parametri della funzione e dei relativi tipi.  Le dichiarazioni di parametro specificano i tipi, le dimensioni e gli identificatori dei valori archiviati nei parametri.  
  
## Sintassi  
 *function\-definition*:  
 *declaration\-specifiers*  opt *attribute\-seq* opt *declarator declaration\-list* opt *compound\-statement*  
  
 \/\* *attribute\-seq* è specifico di Microsoft \*\/  
  
 *declarator* :  
 *pointer*  opt *direct\-declarator*  
  
 *direct\-declarator*:\/\* Dichiaratore di funzione \*\/  
 *direct\-declarator*  **\(**  *parameter\-type\-list*  **\)** \/\* Dichiaratore nuovo stile \*\/  
  
 *parameter\-type\-list*: \/\* Elenco di parametri \*\/  
 *parameter\-list*  
  
 *parameter\-list*  **,...**  
  
 *parameter\-list*:  
 *parameter\-declaration*  
  
 *parameter\-list*  **,**  *parameter\-declaration*  
  
 *parameter\-declaration*:  
 *declaration\-specifiers declarator*  
  
 *declaration\-specifiers abstract\-declarator*  opt  
  
 *parameter\-type\-list* è una sequenza di dichiarazioni di parametro separate da virgole.  Il formato di ogni parametro in un elenco di parametri è il seguente:  
  
```  
[register]  type-specifier [declarator]   
```  
  
 I parametri di funzione dichiarati con l'attributo **auto** generano errori.  Gli identificatori dei parametri vengono utilizzati nel corpo della funzione per fare riferimento ai valori passati alla funzione.  È possibile assegnare un nome ai parametri in un prototipo, ma i nomi diventano esterni all'ambito alla fine della dichiarazione.  I nomi dei parametri possono essere pertanto assegnati in modo analogo o diverso nella definizione di funzione.  Questi identificatori non possono essere ridefiniti nel blocco più esterno del corpo della funzione, ma possono essere ridefiniti nei blocchi interni e annidati come se l'elenco di parametri fosse un blocco di inclusione.  
  
 Ogni identificatore in *parameter\-type\-list* deve essere preceduto dall'identificatore di tipo appropriato, come illustrato nell'esempio seguente:  
  
```  
void new( double x, double y, double z )  
{  
    /* Function body here */  
}  
```  
  
 Se nell'elenco di parametri è presente almeno un parametro, l'elenco può terminare con una virgola seguita da tre punti \(**, ...**\).  Questa costruzione, denominata "notazione con i puntini di sospensione", indica un numero variabile di argomenti passati alla funzione. Per ulteriori informazioni, vedere [Chiamate con un numero variabile di argomenti](../c-language/calls-with-a-variable-number-of-arguments.md). Tuttavia, una chiamata alla funzione deve avere almeno un numero di argomenti pari al numero dei parametri prima dell'ultima virgola.  
  
 Se alla funzione non deve essere passato alcun parametro, l'elenco dei parametri viene sostituito dalla parola chiave `void`.  Questo utilizzo di `void` è diverso dal relativo utilizzo come identificatore di tipo.  
  
 L'ordine e il tipo di parametri, incluso qualsiasi utilizzo della notazione con i puntini di sospensione, devono essere identici in tutte le dichiarazioni di funzione, se presenti, e nella definizione di funzione.  I tipi degli argomenti dopo le conversioni aritmetiche consuete devono essere compatibili con l'assegnazione dei tipi dei parametri corrispondenti. Per informazioni sulle conversioni aritmetiche, vedere la pagina relativa alle [conversioni aritmetiche consuete](../c-language/usual-arithmetic-conversions.md). Gli argomenti dopo i puntini di sospensione non vengono controllati.  Un parametro può avere qualsiasi tipo fondamentale, di struttura, unione, puntatore o matrice.  
  
 Il compilatore, se necessario, esegue le conversioni aritmetiche consuete in modo indipendente su ogni parametro e ogni argomento.  Dopo la conversione, nessun parametro è più breve di `int` e nessun parametro è di tipo **float** a meno che il tipo di parametro venga specificato in modo esplicito come **float** nel prototipo.  Ciò significa, ad esempio, che la dichiarazione di un parametro come `char` equivale alla dichiarazione dello stesso come `int`.  
  
## Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)