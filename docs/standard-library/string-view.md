---
title: '&lt;string_view&gt;'
ms.date: 04/18/2019
helpviewer_keywords:
- string_view header
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
ms.openlocfilehash: 8952416cf37fc4d8d281d6ced9b8264495ec3799
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346979"
---
# <a name="ltstringviewgt"></a>&lt;string_view&gt;

Definisce il modello di classe `basic_string_view` e relativi tipi e operatori. (Richiede l'opzione del compilatore [/std: c + + 17](../build/reference/std-specify-language-standard-version.md) o versioni successive.)

## <a name="syntax"></a>Sintassi

```cpp
#include <string_view>
```

## <a name="remarks"></a>Note

La famiglia di string_view di specializzazioni del modello offre un modo efficiente per passare un handle di sola lettura indipendente dalle eccezioni, che non possiede i dati di tipo carattere tutti gli oggetti di tipo stringa con il primo elemento della sequenza nella posizione zero. Un parametro della funzione di tipo `string_view` (ovvero un typedef per `basic_string_view<char>`) possono accettare argomenti, ad esempio `std::string`, **char\***, o qualsiasi altra classe di tipo stringa di caratteri narrow per il quale implicita la conversione a `string_view` è definito. Analogamente, un parametro di `wstring_view`, `u16string_view` o `u32string_view` può accettare qualsiasi tipo di stringa per cui è definita una conversione implicita. Per altre informazioni, vedere [basic_string_view classe](../standard-library/basic-string-view-class.md).

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[string_view](../standard-library/string-view-typedefs.md#string_view)|Una specializzazione del modello di classe `basic_string_view` con elementi di tipo **char**.|
|[wstring_view](../standard-library/string-view-typedefs.md#wstring_view)|Una specializzazione del modello di classe `basic_string_view` con elementi di tipo **wchar_t**.|
|[u16string_view](../standard-library/string-view-typedefs.md#u16string_view)|Una specializzazione del modello di classe `basic_string_view` con elementi di tipo `char16_t`.|
|[u32string_view](../standard-library/string-view-typedefs.md#u32string_view)|Una specializzazione del modello di classe `basic_string_view` con elementi di tipo `char32_t`.|

### <a name="operators"></a>Operatori

Il \<string_view > possono confrontare gli operatori `string_view` su oggetti di qualsiasi convertibile tipi stringa.

|Operatore|Descrizione|
|-|-|
|[operator!=](../standard-library/string-view-operators.md#op_neq)|Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.|
|[operator==](../standard-library/string-view-operators.md#op_eq_eq)|Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.|
|[operator<](../standard-library/string-view-operators.md#op_lt)|Verifica se l'oggetto sul lato sinistro dell'operatore è minore dell'oggetto a destra.|
|[operator<=](../standard-library/string-view-operators.md#op_lt_eq)|Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.|
|[operator<\<](../standard-library/string-view-operators.md#op_lt_lt)|Una funzione di modello che inserisce un `string_view` in un flusso di output.|
|[operator>](../standard-library/string-view-operators.md#op_gt)|Verifica se l'oggetto sul lato sinistro dell'operatore è maggiore rispetto all'oggetto sul lato destro.|
|[operator>=](../standard-library/string-view-operators.md#op_gt_eq)|Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.|

### <a name="literals"></a>Valori letterali

|Operatore|Descrizione|
|-|-|
|[sv](../standard-library/string-view-operators.md#op_sv)|Costruisce un `string_view`, `wstring_view`, `u16string_view`, o `u32string_view` a seconda del tipo di valore letterale stringa a cui viene aggiunto.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe basic_string_view](../standard-library/basic-string-view-class.md)|Un modello di classe che fornisce una visualizzazione di sola lettura in una sequenza di oggetti arbitrari di tipo carattere.|
|[hash](string-view-hash.md)|Oggetto funzione che produce un valore hash per un string_view.|

## <a name="requirements"></a>Requisiti

- **Intestazione:** \<string_view >

- **Spazio dei nomi:** std

- **L'opzione del compilatore:** /std: c + + 17 (o versioni successive)

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
