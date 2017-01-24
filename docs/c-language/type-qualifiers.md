---
title: "Qualificatori di tipo | Microsoft Docs"
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
  - "const (parola chiave) [C]"
  - "memoria, accesso volatile"
  - "qualificatori per tipi"
  - "qualificatori di tipo"
  - "volatile (parola chiave) [C]"
  - "volatile (parola chiave) [C], qualificatore di tipo"
  - "volatile (parola chiave) [C], identificatore di tipi"
ms.assetid: bb4c6744-1dd7-40a8-b4eb-f5585be30908
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Qualificatori di tipo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I qualificatori di tipo forniscono una delle due proprietà a un identificatore.  Il qualificatore di tipo **const** dichiara un oggetto come non modificabile.  Il qualificatore di tipo `volatile` dichiara un elemento il cui valore può essere modificato legittimamente da un elemento sotto il controllo del programma in cui è visualizzato, ad esempio un thread contemporaneamente in esecuzione.  
  
 I due qualificatori di tipo, **const** e `volatile`, possono apparire solo una volta in una dichiarazione.  I qualificatori di tipo possono essere visualizzati con qualsiasi identificatore di tipo; tuttavia, non possono apparire dopo la prima virgola in una dichiarazione multipla dell'elemento.  Ad esempio le seguenti dichiarazioni sono valide:  
  
```  
typedef volatile int VI;  
const int ci;  
```  
  
 Queste dichiarazioni non sono valide:  
  
```  
typedef int *i, volatile *vi;  
float f, const cf;     
```  
  
 I qualificatori di tipo sono rilevanti solo in caso di accesso agli identificatori come l\-value nelle espressioni.  Per informazioni su l\-value ed espressioni, vedere [Espressioni r\-value e l\-value](../c-language/l-value-and-r-value-expressions.md).  
  
## Sintassi  
 *type\-qualifier*:  
 **constvolatile**  
  
 Le seguenti dichiarazioni **const** e `volatile` sono valide:  
  
```  
int const *p_ci;       /* Pointer to constant int */  
int const (*p_ci);     /* Pointer to constant int */  
int *const cp_i;       /* Constant pointer to int */  
int (*const cp_i);     /* Constant pointer to int */  
int volatile vint;     /* Volatile integer        */  
```  
  
 Se la specifica di un tipo matrice include i qualificatori di tipo, viene qualificato l'elemento, non il tipo di matrice.  Se la specifica del tipo di funzione include i qualificatori, il comportamento non è definito.  Né `volatile` né **const** hanno impatto sull'intervallo di valori o proprietà aritmetiche dell'oggetto.  
  
 In questo elenco viene descritto come utilizzare **const** e `volatile`.  
  
-   La parola chiave **const** può essere utilizzata per modificare un tipo fondamentale o aggregato, un puntatore a un oggetto di qualsiasi tipo o un elemento `typedef`.  Se un elemento viene dichiarato con solo il qualificatore di tipo **const**, il relativo tipo viene considerato **const int**.  Una variabile **const** può essere inizializzata o può essere inserita in un'area di sola lettura di archiviazione.  La parola chiave **const** è utile ai puntatori di dichiarazione a **const** poiché richiede che la funzione non modifichi il puntatore in alcun modo.  
  
-   Il compilatore presuppone che, in un punto qualsiasi del programma, a una variabile `volatile` possa accedere un processo sconosciuto che utilizza o modifica il valore.  Di conseguenza, indipendentemente dalle ottimizzazioni specificate nella riga di comando, il codice per ogni assegnazione o riferimento di una variabile `volatile` deve essere generato anche se sembra non produrre alcun effetto.  
  
     Se `volatile` viene utilizzato da solo, viene utilizzato `int`.  L'identificatore di tipo `volatile` può essere utilizzato per fornire accesso affidabile a posizioni di memoria speciali.  Utilizzare `volatile` con oggetti dati a cui è possibile accedere o che possono essere modificati dai gestori del segnale, mediante l'esecuzione contemporanea di programmi o mediante hardware speciale come i registri di I\/O mappati alla memoria.  È possibile dichiarare una variabile come `volatile` per la sua durata oppure eseguire il cast di un solo riferimento che sia `volatile`.  
  
-   Un elemento può essere **const** e `volatile`, in questo caso l'elemento non può essere modificato legittimamente dal proprio programma, ma può essere modificato da un processo asincrono.  
  
## Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)