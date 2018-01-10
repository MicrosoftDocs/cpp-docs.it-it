---
title: Funzioni SafeInt | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: functions, SafeInt
ms.assetid: fdc208e5-5d8a-41a9-8271-567fd438958d
caps.latest.revision: "13"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6ae482b7f58d64a46b82b32c6c6d62d7f69f0dce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="safeint-functions"></a>Funzioni SafeInt
La libreria SafeInt fornisce numerose funzioni che è possibile utilizzare senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md). Se si desidera proteggere una singola operazione matematica da overflow di integer, è possibile utilizzare queste funzioni. Se si desidera proteggere più operazioni matematiche, è consigliabile creare `SafeInt` oggetti. È più efficiente per creare `SafeInt` oggetti anziché utilizzare queste funzioni più volte.  
  
 Queste funzioni consentono di confrontare o eseguire operazioni matematiche su due diversi tipi di parametri senza dover prima convertirli nello stesso tipo.  
  
 Ognuna di queste funzioni include due tipi di modello: `T` e `U`. Ognuno di questi tipi può essere un valore booleano, un carattere o un tipo integrale. Tipi integrali possono essere firmati o non firmati e di qualsiasi dimensione da 8 bit a 64 bit.  
  
## <a name="in-this-section"></a>In questa sezione  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[SafeAdd](../windows/safeadd.md)|Somma due numeri e protegge dall'overflow.|  
|[SafeCast](../windows/safecast.md)|Esegue il cast di un tipo di parametro a un altro tipo.|  
|[SafeDivide](../windows/safedivide.md)|Divide due numeri e consente di proteggere divisione per zero.|  
|[SafeEquals](../windows/safeequals.md), [SafeGreaterThan](../windows/safegreaterthan.md), [SafeGreaterThanEquals](../windows/safegreaterthanequals.md), [SafeLessThan](../windows/safelessthan.md), [SafeLessThanEquals](../windows/safelessthanequals.md), [SafeNotEquals](../windows/safenotequals.md)|Confronta due numeri. Queste funzioni consentono di confrontare due tipi diversi di numeri senza modificare i relativi tipi.|  
|[SafeModulus](../windows/safemodulus.md)|Esegue l'operazione modulo su due numeri.|  
|[SafeMultiply](../windows/safemultiply.md)|Moltiplica due numeri insieme e protegge dall'overflow.|  
|[SafeSubtract](../windows/safesubtract.md)|Sottrae due numeri e protegge dall'overflow.|  
  
## <a name="related-sections"></a>Sezioni correlate  
  
|Sezione|Descrizione|  
|-------------|-----------------|  
|[Classe SafeInt](../windows/safeint-class.md)|Classe `SafeInt`.|  
|[Classe SafeIntException](../windows/safeintexception-class.md)|La classe di eccezione specifica per la libreria SafeInt.|