---
title: nullptr | Documenti Microsoft
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
ms.openlocfilehash: f1bcfee3f408f6815e51740f9fc02d842afaa4d5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32419643"
---
# <a name="nullptr"></a>nullptr
Definisce una costante del puntatore null di tipo `std::nullptr_t`, che è convertibile in qualsiasi tipo di puntatore raw.  Sebbene sia possibile utilizzare la parola chiave `nullptr` senza includere alcuna intestazione, se il codice utilizza il tipo `std::nullptr_t`, è necessario definirlo includendo l'intestazione `<cstddef>`.  
  
> [!NOTE]
>  La parola chiave `nullptr` viene definita in C++/CLI per le applicazioni di codice gestito e non è intercambiabile con la parola chiave nello standard ISO C++. Se il codice può essere compilato utilizzando il [/clr](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore, che è destinato a codice gestito, quindi utilizzare `__nullptr` in qualsiasi riga di codice in cui è necessario garantire che il compilatore Usa l'interpretazione in C++ nativo. Per ulteriori informazioni, vedere [nullptr](../windows/nullptr-cpp-component-extensions.md).  
  
## <a name="remarks"></a>Note  
 Evitare l'utilizzo di `NULL` o zero (`0`) come costante del puntatore null; `nullptr` è meno vulnerabile a un utilizzo improprio e funziona meglio nella maggior parte delle situazioni.  Ad esempio, assegnando `func(std::pair<const char *, double>)`, quindi chiamando `func(std::make_pair(NULL, 3.14))` genera un errore di compilazione.  La macro NULL si espande in `0`, in modo che la chiamata `std::make_pair(0, 3.14)` restituisca `std::pair<int, double>`, che non è convertibile al tipo di parametro di func () `std::pair<const char *, double>`.  `func(std::make_pair(nullptr, 3.14))` chiamante viene compilato correttamente perché `std::make_pair(nullptr, 3.14)` restituisce `std::pair<std::nullptr_t, double>`, che è convertibile in `std::pair<const char *, double>`.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [nullptr](../windows/nullptr-cpp-component-extensions.md)