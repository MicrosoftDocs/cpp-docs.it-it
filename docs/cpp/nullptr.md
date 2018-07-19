---
title: nullptr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- nullptr_cpp
dev_langs:
- C++
helpviewer_keywords:
- nullptr keyword [C++]
ms.assetid: e9d80ea6-2506-4eb5-b47b-2349df085832
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dd7d7c9ccf70286040d06e7e01400299b806157e
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940979"
---
# <a name="nullptr"></a>nullptr
Definisce una costante del puntatore null di tipo `std::nullptr_t`, che è convertibile in qualsiasi tipo di puntatore raw.  Sebbene sia possibile usare la parola chiave **nullptr** senza includere alcuna intestazione, se il codice Usa il tipo `std::nullptr_t`, quindi è necessario definirlo includendo l'intestazione `<cstddef>`.  
  
> [!NOTE]
>  Il **nullptr** (parola chiave) viene anche definita in C + + / CLI per applicazioni di codice gestito e non è intercambiabile con la parola chiave C++ Standard ISO. Se il codice può essere compilato utilizzando la [/clr](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore, che è destinata a codice gestito, quindi usare `__nullptr` in tutte le righe di codice in cui è necessario garantire che il compilatore utilizzi l'interpretazione in C++ nativo. Per altre informazioni, vedere [nullptr](../windows/nullptr-cpp-component-extensions.md).  
  
## <a name="remarks"></a>Note  
 Evitare di usare NULL o zero (`0`) come una costante puntatore null; **nullptr** è meno vulnerabile a un uso improprio e funziona meglio nella maggior parte delle situazioni.  Ad esempio, assegnando `func(std::pair<const char *, double>)`, quindi chiamando `func(std::make_pair(NULL, 3.14))` genera un errore di compilazione.  La macro NULL si espande in `0`, in modo che la chiamata `std::make_pair(0, 3.14)` restituisca `std::pair<int, double>`, che non è convertibile al tipo di parametro di func () `std::pair<const char *, double>`.  `func(std::make_pair(nullptr, 3.14))` chiamante viene compilato correttamente perché `std::make_pair(nullptr, 3.14)` restituisce `std::pair<std::nullptr_t, double>`, che è convertibile in `std::pair<const char *, double>`.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [nullptr](../windows/nullptr-cpp-component-extensions.md)