---
title: __inwordstring | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __inwordstring
- __inwordstring_cpp
dev_langs: C++
helpviewer_keywords:
- __inwordstring intrinsic
- rep insw instruction
ms.assetid: 6de37939-017a-4740-9e3d-7de78a30daba
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b1fd523a9d954b3ec42cec565d94f49511904f28
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="inwordstring"></a>__inwordstring
**Sezione specifica Microsoft**  
  
 Legge i dati dalla porta specificata utilizzando il `rep insw` istruzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __inwordstring(  
   unsigned short Port,  
   unsigned short* Buffer,  
   unsigned long Count  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `Port`  
 La porta da cui leggere.  
  
 [out] `Buffer`  
 I dati letti dalla porta viene scritto in questo caso.  
  
 [in] `Count`  
 Il numero di parole di dati da leggere.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__inwordstring`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)