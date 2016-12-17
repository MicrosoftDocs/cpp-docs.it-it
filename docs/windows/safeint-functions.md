---
title: "Funzioni SafeInt | Microsoft Docs"
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
  - "funzioni, SafeInt"
ms.assetid: fdc208e5-5d8a-41a9-8271-567fd438958d
caps.latest.revision: 13
caps.handback.revision: 13
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Funzioni SafeInt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria SafeInt fornisce numerose funzioni che è possibile utilizzare senza creare un'istanza di [Classe SafeInt](../windows/safeint-class.md).  Se si desidera proteggere una sola operazione matematica dall'overflow di Integer, è possibile utilizzare queste funzioni.  Se si desidera proteggere più operazioni matematiche, è necessario creare oggetti di `SafeInt`.  È più efficiente creare oggetti di `SafeInt` che utilizzare questo più volte funzioni.  
  
 Queste funzioni consentono di confrontare o eseguire operazioni matematiche su due diversi tipi di parametri senza dover convertirli nello stesso tipo per primo.  
  
 Ognuna di queste funzioni sono disponibili due tipi di modello: `T` e `U`.  Ciascuno di tali tipi può essere un valore booleano, un carattere, o un tipo integrale.  I tipi integrali possono essere firmati o senza segno e qualsiasi dimensione di 8 bit a 64 bit.  
  
## In questa sezione  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[SafeAdd](../windows/safeadd.md)|Somma due numeri e protegge dall'overflow.|  
|[SafeCast](../windows/safecast.md)|Cast di un tipo di parametro a un altro.|  
|[SafeDivide](../windows/safedivide.md)|Divide due numeri e protegge dalla divisione per zero.|  
|[SafeEquals](../windows/safeequals.md), [SafeGreaterThan](../windows/safegreaterthan.md), [SafeGreaterThanEquals](../windows/safegreaterthanequals.md), [SafeLessThan](../windows/safelessthan.md), [SafeLessThanEquals](../windows/safelessthanequals.md), [SafeNotEquals](../windows/safenotequals.md)|Confronta due numeri.  Queste funzioni consentono di confrontare due tipi diversi di numeri senza modificare i tipi.|  
|[SafeModulus](../windows/safemodulus.md)|L'azione modulo in due numeri.|  
|[SafeMultiply](../windows/safemultiply.md)|Moltiplica raccolta due numeri e protegge dall'overflow.|  
|[SafeSubtract](../windows/safesubtract.md)|Sottrae due numeri e protegge dall'overflow.|  
  
## Sezioni correlate  
  
|Sezione|Descrizione|  
|-------------|-----------------|  
|[Classe SafeInt](../windows/safeint-class.md)|Classe `SafeInt`.|  
|[Classe SafeIntException](../windows/safeintexception-class.md)|La classe di eccezione specifica della libreria SafeInt.|