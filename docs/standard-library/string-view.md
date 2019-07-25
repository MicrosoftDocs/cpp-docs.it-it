---
title: '&lt;string_view&gt;'
ms.date: 04/18/2019
helpviewer_keywords:
- string_view header
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
ms.openlocfilehash: 47924c3d6bd1a2f45cdbac648f4f563c57ce8939
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459109"
---
# <a name="ltstringviewgt"></a>&lt;string_view&gt;

Definisce il modello `basic_string_view` di classe e i tipi e gli operatori correlati. (Richiede l'opzione del compilatore [std: c++ 17](../build/reference/std-specify-language-standard-version.md) o versioni successive).

## <a name="syntax"></a>Sintassi

```cpp
#include <string_view>
```

## <a name="remarks"></a>Note

La famiglia string_view di specializzazioni di modelli fornisce un modo efficiente per passare un handle di sola lettura, indipendente dalle eccezioni e non proprietario ai dati di tipo carattere di qualsiasi oggetto di tipo stringa con il primo elemento della sequenza nella posizione zero. Un parametro di funzione di `string_view` tipo (ovvero un typedef per `basic_string_view<char>`) `std::string`può accettare argomenti come, **char\*** o qualsiasi altra classe simile a una stringa di caratteri ristretti per cui una conversione implicita in `string_view`è definito. Analogamente, un parametro `wstring_view`di `u16string_view` o `u32string_view` può accettare qualsiasi tipo stringa per cui è definita una conversione implicita. Per ulteriori informazioni, vedere la [classe basic_string_view](../standard-library/basic-string-view-class.md).

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[string_view](../standard-library/string-view-typedefs.md#string_view)|Specializzazione del modello `basic_string_view` di classe con elementi di tipo **char**.|
|[wstring_view](../standard-library/string-view-typedefs.md#wstring_view)|Specializzazione del modello `basic_string_view` di classe con elementi di tipo **wchar_t**.|
|[u16string_view](../standard-library/string-view-typedefs.md#u16string_view)|Specializzazione del modello `basic_string_view` di classe con elementi di tipo `char16_t`.|
|[u32string_view](../standard-library/string-view-typedefs.md#u32string_view)|Specializzazione del modello `basic_string_view` di classe con elementi di tipo `char32_t`.|

### <a name="operators"></a>Operatori

Gli \<operatori string_view > possono confrontare `string_view` oggetti con oggetti di qualsiasi tipo di stringa convertibile.

|Operator|Descrizione|
|-|-|
|[operator!=](../standard-library/string-view-operators.md#op_neq)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.|
|[operator==](../standard-library/string-view-operators.md#op_eq_eq)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.|
|[operator<](../standard-library/string-view-operators.md#op_lt)|Verifica se l'oggetto sul lato sinistro dell'operatore è minore dell'oggetto a destra.|
|[operator<=](../standard-library/string-view-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.|
|[operator<\<](../standard-library/string-view-operators.md#op_lt_lt)|Funzione di modello che inserisce un `string_view` oggetto in un flusso di output.|
|[operator>](../standard-library/string-view-operators.md#op_gt)|Verifica se l'oggetto sul lato sinistro dell'operatore è maggiore dell'oggetto a destra.|
|[operator>=](../standard-library/string-view-operators.md#op_gt_eq)|Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.|

### <a name="literals"></a>Valori letterali

|Operator|Descrizione|
|-|-|
|[sv](../standard-library/string-view-operators.md#op_sv)|Costruisce un `string_view`oggetto `wstring_view`, `u16string_view`, o `u32string_view` a seconda del tipo di valore letterale stringa a cui viene accodato.|

### <a name="classes"></a>Classi

|Classe|DESCRIZIONE|
|-|-|
|[Classe basic_string_view](../standard-library/basic-string-view-class.md)|Modello di classe che fornisce una visualizzazione di sola lettura in una sequenza di oggetti arbitrari di tipo carattere.|
|[hash](string-view-hash.md)|Oggetto funzione che produce un valore hash per un string_view.|

## <a name="requirements"></a>Requisiti

- **Intestazione:** \<> string_view

- **Spazio dei nomi:** std

- **Opzione del compilatore:** std: c++ 17 (o versione successiva)

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
