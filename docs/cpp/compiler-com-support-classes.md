---
title: Classi di supporto COM del compilatore
ms.date: 11/04/2016
f1_keywords:
- _com_raise_error
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
ms.openlocfilehash: 066fe797bc500625e96e027777a70f278b88cddb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50479664"
---
# <a name="compiler-com-support-classes"></a>Classi di supporto COM del compilatore

**Sezione specifica Microsoft**

Le classi standard vengono utilizzate per supportare alcuni tipi COM. Le classi sono definite \<Comdef. h > e i file di intestazione generati dalla libreria dei tipi.

|Classe|Scopo|
|-----------|-------------|
|[_bstr_t](../cpp/bstr-t-class.md)|Esegue il wrapping del tipo `BSTR` per fornire operatori e metodi utili.|
|[_com_error](../cpp/com-error-class.md)|Definisce l'oggetto errore generato da [com_raise_error](../cpp/com-raise-error.md) nella maggior parte degli errori.|
|[_com_ptr_t](../cpp/com-ptr-t-class.md)|Incapsula i puntatori a interfaccia COM e automatizza le chiamate richieste a `AddRef`, `Release`, e `QueryInterface`.|
|[_variant_t](../cpp/variant-t-class.md)|Esegue il wrapping del tipo `VARIANT` per fornire operatori e metodi utili.|

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Supporto COM del compilatore](../cpp/compiler-com-support.md)<br/>
[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)