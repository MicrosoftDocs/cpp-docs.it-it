---
title: _CxxThrowException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _CxxThrowException
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- CxxThrowException
- _CxxThrowException
dev_langs:
- C++
helpviewer_keywords:
- _CxxThrowException function
- CxxThrowException function
ms.assetid: 0b90bef5-b7d2-46e0-88e2-59e531e01a4d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 70746446ec2b943913604d5940d468373c018aa4
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="cxxthrowexception"></a>_CxxThrowException

Compila il record di eccezione e chiama l'ambiente di runtime per iniziare a elaborare l'eccezione.

## <a name="syntax"></a>Sintassi

```C
extern "C" void __stdcall _CxxThrowException(
   void* pExceptionObject
   _ThrowInfo* pThrowInfo
);
```

### <a name="parameters"></a>Parametri

*pExceptionObject* l'oggetto che ha generato l'eccezione.

*pThrowInfo* le informazioni necessarie per elaborare l'eccezione.

## <a name="remarks"></a>Note

Questo metodo è incluso in un file del compilatore che il compilatore usa per elaborare le eccezioni. Non chiamare il metodo direttamente dal codice.

## <a name="requirements"></a>Requisiti

**Origine:** Throw.cpp

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
