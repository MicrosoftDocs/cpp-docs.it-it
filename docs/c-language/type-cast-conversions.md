---
title: "Conversioni di cast di tipo | Microsoft Docs"
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
  - "conversioni [C++], cast di tipo"
  - "conversione di tipi di dati [C++], conversioni di cast di tipo"
  - "conversioni di tipi esplicite"
  - "tipo (cast)"
  - "cast di tipo [C++], informazioni su conversione di cast di tipo"
  - "conversioni di cast di tipo [C++]"
ms.assetid: 57ab5902-f12f-4326-a2f6-6282f1d4025a
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Conversioni di cast di tipo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare i cast di tipo per convertire i tipi in modo esplicito.  
  
 **Sintassi**  
  
 *cast\-expression*:  
 *unary expression*  
  
 **\(**  *type\-name*  **\)**  *cast\-expression*  
  
 *type\-name*:  
 *specifier\-qualifier\-list abstract\-declarator*  opt  
  
 *type\-name* è un tipo ed *cast\-expression* è un valore da convertire in tale tipo.  Un'espressione con un cast di tipo non è un l\-value.  *cast\-expression* viene convertito come se fosse stato assegnato a una variabile di tipo *type\-name*.  Le regole di conversione per le assegnazioni \(descritte in [Conversioni di assegnazione](../c-language/assignment-conversions.md)\) si applicano anche ai cast di tipo.  Nella tabella seguente sono illustrati i tipi per cui è possibile eseguire il cast in qualsiasi tipo specificato.  
  
### Cast di tipo validi  
  
|Tipi di destinazione|Potenziali origini|  
|--------------------------|------------------------|  
|Tipi integrali|Qualsiasi tipo di Integer o di tipo a virgola mobile o un puntatore a un oggetto|  
|A virgola mobile|Qualsiasi tipo aritmetico|  
|Puntatore a un oggetto o \(**void \***\)|Qualsiasi tipo di Integer \(**void \***\), un puntatore a un oggetto o un puntatore a funzione|  
|Puntatore a funzione|Qualsiasi tipo di integrale \(void \*\), un puntatore a un oggetto o un puntatore a funzione|  
|Una struttura, un'unione o una matrice|Nessuno|  
|Tipo void|Qualsiasi tipo|  
  
 È possibile eseguire il cast di un identificatore al tipo `void`.  Tuttavia, se il tipo specificato in un'espressione cast\-tipo non è `void`, l'identificatore di cui viene eseguito il cast al tipo non può essere un'espressione `void`.  È possibile eseguire il cast di qualsiasi espressione a `void`, ma non è possibile eseguire il cast di un'espressione di tipo `void` in alcun altro tipo.  Ad esempio, una funzione con il tipo restituito `void` non può avere il relativo cast restituito a un altro tipo.  
  
 Tenere presente che un'espressione **void \*** dispone di un puntatore a tipo a `void`, non al tipo `void`.  Se viene eseguito il cast di un oggetto al tipo `void`, l'espressione risultante non può essere assegnata ad alcun elemento.  Analogamente, un oggetto cast\-tipo non è un l\-value valido, pertanto nessuna assegnazione può essere eseguita in tale oggetto.  
  
 **Sezione specifica Microsoft**  
  
 Un cast di tipo può essere un'espressione l\-value se la dimensione dell'identificatore non cambia.  Per informazioni sulle espressioni di l\-value, vedere [Espressioni r\-value e l\-value](../c-language/l-value-and-r-value-expressions.md).  
  
 **Fine sezione specifica Microsoft**  
  
 È possibile convertire un'espressione nel tipo `void` con un cast, ma l'espressione risultante può essere utilizzata solo quando non è obbligatorio un valore.  Un puntatore a oggetto convertito nel tipo **void \*** e convertito nuovamente nel tipo originale restituirà il relativo valore originale.  
  
## Vedere anche  
 [Conversione di tipi](../c-language/type-conversions-c.md)