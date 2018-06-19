---
title: 'Classe di valori platform:: sizet | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/PlatformSizeT::SizeT constructor
dev_langs:
- C++
helpviewer_keywords:
- Platform::SizeT Struct
ms.assetid: 0803612c-8ba1-430c-9b7b-1bebae88608d
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8c69bf34a7965c098f6a656907071e0899b785b4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33087734"
---
# <a name="platformsizet-value-class"></a>Classe di valori Platform::SizeT
Rappresenta la dimensione di un oggetto. SizeT è un tipo di dati senza segno.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class SizeT sealed : ValueType  
```  
  
### <a name="members"></a>Membri  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Costruttore SizeT::SizeT](#ctor)|Inizializza una nuova istanza della classe con il valore specificato.|  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  

 ## <a name="ctor"></a>  Costruttore sizet:: Sizet
Inizializza una nuova istanza di SizeT con il valore specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
SizeT( uint32 value1 );   SizeT( void* value2 );  
```  
  
### <a name="parameters"></a>Parametri  
 value1  
 Valore a 32 bit Unsigned.  
  
 value2  
 Puntatore a un valore a 32 bit Unsigned.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)