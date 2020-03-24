---
title: Classi di supporto COM del compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
ms.openlocfilehash: a8b0845fdfa96c1cb4b8b67e9d39169d9f4d3737
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189702"
---
# <a name="compiler-com-support-classes"></a>Classi di supporto COM del compilatore

**Sezione specifica Microsoft**

Le classi standard vengono utilizzate per supportare alcuni tipi COM. Le classi sono definite in \<> Comdef. h e i file di intestazione generati dalla libreria dei tipi.

|Classe|Scopo|
|-----------|-------------|
|[_bstr_t](../cpp/bstr-t-class.md)|Esegue il wrapping del tipo `BSTR` per fornire operatori e metodi utili.|
|[_com_error](../cpp/com-error-class.md)|Definisce l'oggetto errore generato da [_com_raise_error](../cpp/com-raise-error.md) nella maggior parte degli errori.|
|[_com_ptr_t](../cpp/com-ptr-t-class.md)|Incapsula i puntatori all'interfaccia COM e automatizza le chiamate necessarie per `AddRef`, `Release`e `QueryInterface`.|
|[_variant_t](../cpp/variant-t-class.md)|Esegue il wrapping del tipo `VARIANT` per fornire operatori e metodi utili.|

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Supporto COM del compilatore](../cpp/compiler-com-support.md)<br/>
[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)
