---
title: Attributi (C++/CX)
ms.date: 12/30/2016
ms.assetid: 4438e03c-4de3-433d-abcc-31aa863bc0e0
ms.openlocfilehash: 13a2639a877d1ba926d74511addcf72763967d85
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462244"
---
# <a name="attributes-ccx"></a>Attributi (C++/CX)

Un attributo è un tipo speciale di classe di riferimento che può essere anteposto tra parentesi quadre ai metodi e tipi Windows Runtime per specificare determinati comportamenti nella creazione dei metadati. Diversi attributi predefiniti, ad esempio, [Windows::Foundation::Metadata::WebHostHidden](https://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.webhosthiddenattribute.aspx), vengono comunemente usati in C + + c++ /CLI codice /CX. Nell'esempio riportato di seguito viene mostrata l'applicazione dell'attributo a una classe:

[!code-cpp[cx_attributes#01](../cppcx/codesnippet/CPP/cx_attributes/class1.h#01)]

## <a name="custom-attributes"></a>Attributi personalizzati

Puoi anche definire attributi personalizzati. Gli attributi personalizzati devono essere conformi a queste regole di Windows Runtime:

- Gli attributi personalizzati possono contenere solo campi pubblici.

- I campi degli attributi personalizzati possono essere inizializzati quando l'attributo viene applicato a una classe.

- Un campo può essere uno dei seguenti tipi:

   - int32 (int)

   - uint32 (int non firmato)

   - bool

   - Platform::String^

   - Windows::Foundation::HResult

   - Platform::Type^

   - classe enum pubblica (include le enumerazioni definite dall'utente)

Nell'esempio riportato di seguito viene mostrato come definire un attributo personalizzato e quindi inizializzarlo quando lo si utilizza.

[!code-cpp[cx_attributes#02](../cppcx/codesnippet/CPP/cx_attributes/class1.h#02)]

## <a name="see-also"></a>Vedere anche

[Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti al linguaggio Visual C++](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)