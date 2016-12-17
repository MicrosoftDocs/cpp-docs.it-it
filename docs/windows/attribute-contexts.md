---
title: "Attribute Contexts | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++], contexts"
ms.assetid: 3086351f-77a8-4048-99e9-3b6b041b9437
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attribute Contexts
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli attributi C\+\+ possono essere descritti utilizzando quattro campi di base: la destinazione può essere applicato \(**si applica a**\), se sono ripetibili o meno \(**ripetibile**\), la presenza di associazione degli altri attributi \(**attributi obbligatori**\) e incompatibilità con altri attributi \(**attributi non validi**\).  Questi campi vengono elencati in una tabella descrittiva nell'argomento di riferimento di ogni attributo.  Ognuno di questi campi viene descritto di seguito.  
  
## Si applica a  
 Questo campo vengono descritti gli elementi del linguaggio diversi di C\+\+ come destinazioni validi per l'attributo specificato.  Ad esempio, se un attributo specifica la “classe„ in **si applica a** campo, questo indica che l'attributo può essere applicato solo a una classe valida di C\+\+.  Se l'attributo viene applicato a una funzione membro di una classe, un errore di sintassi risulterebbe.  
  
 Per ulteriori informazioni, vedere [Attributi da utilizzare](../windows/attributes-by-usage.md).  
  
## ripetibile  
 Questo campo indica se l'attributo può essere applicato ripetutamente allo stesso database di destinazione.  La maggior parte degli attributi non è ripetibile.  
  
## attributi obbligatori  
 Questo elenchi campi altri attributi che devono essere presenti ovvero applicate allo stesso database di destinazione\) per l'attributo specificato funzionino correttamente.  Per un attributo è raro disporre di tutte le voci per questo campo.  
  
## attributi non validi  
 Questo elenchi campi altri attributi che sono incompatibili con l'attributo specificato.  Per un attributo è raro disporre di tutte le voci per questo campo.  
  
## Vedere anche  
 [C\+\+ Attributes Reference](../windows/cpp-attributes-reference.md)