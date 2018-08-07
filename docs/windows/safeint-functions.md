---
title: Funzioni SafeInt | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- functions, SafeInt
ms.assetid: fdc208e5-5d8a-41a9-8271-567fd438958d
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b8a0475b5d3ba9053cd5d2df5ffd99ce9292ba8e
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39603455"
---
# <a name="safeint-functions"></a>Funzioni SafeInt
La libreria SafeInt offre diverse funzioni che è possibile usare senza creare un'istanza di [classe SafeInt](../windows/safeint-class.md). Se si desidera proteggere una singola operazione matematica da overflow di numeri interi, è possibile usare queste funzioni. Se si desidera proteggere più operazioni matematiche, è consigliabile creare **SafeInt** oggetti. È più efficiente per creare **SafeInt** oggetti rispetto all'utilizzo di queste funzioni più volte.  
  
 Queste funzioni consentono di confrontare o eseguire operazioni matematiche su due diversi tipi di parametri senza convertirli nello stesso tipo.  
  
 Ognuna di queste funzioni è disponibili due tipi di modello: `T` e `U`. Ognuno di questi tipi può essere un valore booleano, un carattere o un tipo integrale. Tipi integrali possono essere con o senza segno e qualsiasi dimensione, da 8 bit a 64 bit.  
  
## <a name="in-this-section"></a>In questa sezione  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[SafeAdd](../windows/safeadd.md)|Somma due numeri e protegge dall'overflow.|  
|[SafeCast](../windows/safecast.md)|Esegue il cast di un tipo di parametro a un altro tipo.|  
|[SafeDivide](../windows/safedivide.md)|Divide due numeri e protegge da divisione per zero.|  
|[SafeEquals](../windows/safeequals.md), [SafeGreaterThan](../windows/safegreaterthan.md), [SafeGreaterThanEquals](../windows/safegreaterthanequals.md), [SafeLessThan](../windows/safelessthan.md), [SafeLessThanEquals](../windows/safelessthanequals.md), [ SafeNotEquals](../windows/safenotequals.md)|Confronta due numeri. Queste funzioni consentono di confrontare due tipi diversi di numeri senza modificare i relativi tipi.|  
|[SafeModulus](../windows/safemodulus.md)|Esegue l'operazione di modulo in due numeri.|  
|[SafeMultiply](../windows/safemultiply.md)|Moltiplica due numeri insieme e protegge dall'overflow.|  
|[SafeSubtract](../windows/safesubtract.md)|Sottrae due numeri e protegge dall'overflow.|  
  
## <a name="related-sections"></a>Sezioni correlate  
  
|Sezione|Descrizione|  
|-------------|-----------------|  
|[Classe SafeInt](../windows/safeint-class.md)|Il **SafeInt** classe.|  
|[Classe SafeIntException](../windows/safeintexception-class.md)|La classe di eccezione specifica per la libreria SafeInt.|