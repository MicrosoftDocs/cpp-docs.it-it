---
title: Classe wbuffer_convert
ms.date: 11/04/2016
f1_keywords:
- xlocmon/stdext::cvt::wbuffer_convert
helpviewer_keywords:
- wbuffer_convert class
ms.assetid: 4a56f9bf-4138-4612-b516-525fea401358
ms.openlocfilehash: 8de0091af93120290105ce7603fae5acff257b76
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688535"
---
# <a name="wbuffer_convert-class"></a>Classe wbuffer_convert

Descrive un buffer del flusso che controlla la trasmissione di elementi da e verso un buffer del flusso di byte.

## <a name="syntax"></a>Sintassi

```cpp
template <class Codecvt, class Elem = wchar_t, class Traits = std::char_traits<Elem>>
class wbuffer_convert
    : public std::basic_streambuf<Elem, Traits>
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Codecvt*|Facet delle [impostazioni locali](../standard-library/locale-class.md) che rappresenta l'oggetto di conversione.|
|*Elem*|Tipo di elemento a caratteri "wide".|
|*Tratti*|Tratti associati a *Elem*.|

## <a name="remarks"></a>Note

Questo modello di classe descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `_Elem`, i cui tratti di carattere sono descritti dalla classe `Traits`, da e verso un buffer del flusso di byte di tipo `std::streambuf`.

La conversione tra una sequenza di valori `Elem` e sequenze multibyte viene eseguita da un oggetto della classe `Codecvt<Elem, char, std::mbstate_t>`, che soddisfa i requisiti del facet standard di conversione del codice `std::codecvt<Elem, char, std::mbstate_t>`.

Un oggetto di questo modello di classe archivia:

- Un puntatore al buffer del flusso di byte sottostante

- Un puntatore all'oggetto di conversione allocato, che viene liberato quando viene eliminato definitivamente l'oggetto [wbuffer_convert](../standard-library/wbuffer-convert-class.md).
