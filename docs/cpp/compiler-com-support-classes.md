---
description: 'Altre informazioni su: classi di supporto COM del compilatore'
title: Classi di supporto COM del compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 6d800d9b-b902-4033-9639-740a30b06f88
ms.openlocfilehash: e2f921e9c3ebe759109d741630afe56f6af30bbc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344705"
---
# <a name="compiler-com-support-classes"></a>Classi di supporto COM del compilatore

**Specifico di Microsoft**

Le classi standard vengono utilizzate per supportare alcuni tipi COM. Le classi sono definite in \<comdef.h> e i file di intestazione generati dalla libreria dei tipi.

|Classe|Scopo|
|-----------|-------------|
|[_bstr_t](../cpp/bstr-t-class.md)|Esegue il wrapping del tipo `BSTR` per fornire operatori e metodi utili.|
|[_com_error](../cpp/com-error-class.md)|Definisce l'oggetto errore generato da [_com_raise_error](../cpp/com-raise-error.md) nella maggior parte degli errori.|
|[_com_ptr_t](../cpp/com-ptr-t-class.md)|Incapsula i puntatori all'interfaccia COM e automatizza le chiamate richieste a `AddRef` , `Release` e `QueryInterface` .|
|[_variant_t](../cpp/variant-t-class.md)|Esegue il wrapping del tipo `VARIANT` per fornire operatori e metodi utili.|

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Supporto COM del compilatore](../cpp/compiler-com-support.md)<br/>
[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)<br/>
[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)
