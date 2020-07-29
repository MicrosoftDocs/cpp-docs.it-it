---
title: '&lt;string_view&gt;'
ms.date: 04/18/2019
helpviewer_keywords:
- string_view header
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
ms.openlocfilehash: 13b6f5c63b9426fc4c31527f0d1ae8291d07807f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222212"
---
# <a name="ltstring_viewgt"></a>&lt;string_view&gt;

Definisce il modello di classe `basic_string_view` e i tipi e gli operatori correlati. (Richiede l'opzione del compilatore [std: c++ 17](../build/reference/std-specify-language-standard-version.md) o versioni successive).

## <a name="syntax"></a>Sintassi

```cpp
#include <string_view>
```

## <a name="remarks"></a>Osservazioni

La famiglia string_view di specializzazioni di modelli fornisce un modo efficiente per passare un handle di sola lettura, indipendente dalle eccezioni e non proprietario ai dati di tipo carattere di qualsiasi oggetto di tipo stringa con il primo elemento della sequenza nella posizione zero. Un parametro di funzione di tipo `string_view` (ovvero un typedef per `basic_string_view<char>` ) può accettare argomenti come `std::string` , **char \* **o qualsiasi altra classe simile a una stringa di caratteri stretti per cui è definita una conversione implicita in `string_view` . Analogamente, un parametro `wstring_view` di `u16string_view` o `u32string_view` può accettare qualsiasi tipo stringa per cui è definita una conversione implicita. Per ulteriori informazioni, vedere [Basic_string_view Class](../standard-library/basic-string-view-class.md).

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[string_view](../standard-library/string-view-typedefs.md#string_view)|Specializzazione del modello di classe `basic_string_view` con elementi di tipo **`char`** .|
|[wstring_view](../standard-library/string-view-typedefs.md#wstring_view)|Specializzazione del modello di classe `basic_string_view` con elementi di tipo **`wchar_t`** .|
|[u16string_view](../standard-library/string-view-typedefs.md#u16string_view)|Specializzazione del modello di classe `basic_string_view` con elementi di tipo **`char16_t`** .|
|[u32string_view](../standard-library/string-view-typedefs.md#u32string_view)|Specializzazione del modello di classe `basic_string_view` con elementi di tipo **`char32_t`** .|

### <a name="operators"></a>Operatori

Gli \<string_view> operatori possono confrontare `string_view` oggetti con oggetti di qualsiasi tipo di stringa convertibile.

|Operatore|Descrizione|
|-|-|
|[operatore! =](../standard-library/string-view-operators.md#op_neq)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.|
|[operatore = =](../standard-library/string-view-operators.md#op_eq_eq)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.|
|[operatore<](../standard-library/string-view-operators.md#op_lt)|Verifica se l'oggetto sul lato sinistro dell'operatore è minore dell'oggetto a destra.|
|[operatore<=](../standard-library/string-view-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.|
|[operatore<\<](../standard-library/string-view-operators.md#op_lt_lt)|Funzione di modello che inserisce un oggetto `string_view` in un flusso di output.|
|[operatore>](../standard-library/string-view-operators.md#op_gt)|Verifica se l'oggetto sul lato sinistro dell'operatore è maggiore dell'oggetto a destra.|
|[operatore>=](../standard-library/string-view-operators.md#op_gt_eq)|Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.|

### <a name="literals"></a>Valori letterali

|Operatore|Descrizione|
|-|-|
|[SV](../standard-library/string-view-operators.md#op_sv)|Costruisce un oggetto `string_view` , `wstring_view` , `u16string_view` o `u32string_view` a seconda del tipo di valore letterale stringa a cui viene accodato.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe basic_string_view](../standard-library/basic-string-view-class.md)|Modello di classe che fornisce una visualizzazione di sola lettura in una sequenza di oggetti arbitrari di tipo carattere.|
|[hash](string-view-hash.md)|Oggetto funzione che produce un valore hash per un string_view.|

## <a name="requirements"></a>Requisiti

- **Intestazione:**\<string_view>

- **Spazio dei nomi:** std

- **Opzione del compilatore:** std: c++ 17 (o versione successiva)

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
