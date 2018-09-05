---
title: 'Classe platform:: changedstateexception | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ChangedStateException
- VCCORLIB/Platform::ChangedStateException::ChangedStateException
dev_langs:
- C++
helpviewer_keywords:
- Platform::ChangedStateException
ms.assetid: f894beac-9e80-4fac-ac25-89f1dbc0a6a4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 029242a466b7fbac0d967596c114eb0ad45aa569
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43760669"
---
# <a name="platformchangedstateexception-class"></a>Classe Platform::ChangedStateException
Generato quando lo stato interno di un oggetto viene modificato, invalidando in tal modo i risultati del metodo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class ChangedStateException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
### <a name="remarks"></a>Note  
 Ad esempio, questa eccezione viene generata quando i metodi di un iteratore di raccolta o di una visualizzazione di raccolta vengono chiamati dopo che la raccolta padre è stata modificata, invalidando i risultati del metodo.  
  
 Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md) .  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Platform::COMException](../cppcx/platform-comexception-class.md)