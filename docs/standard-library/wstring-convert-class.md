---
description: 'Altre informazioni su: wstring_convert Class'
title: Classe wstring_convert
ms.date: 11/04/2016
f1_keywords:
- wstring/stdext::cvt::wstring_convert
- locale/std::wstring_convert::byte_string
- locale/std::wstring_convert::wide_string
- locale/std::wstring_convert::state_type
- locale/std::wstring_convert::int_type
- locale/std::wstring_convert::from_bytes
- locale/std::wstring_convert::to_bytes
- locale/std::wstring_convert::converted
- locale/std::wstring_convert::state
helpviewer_keywords:
- stdext::cvt [C++], wstring_convert
- std::wstring_convert [C++], byte_string
- std::wstring_convert [C++], wide_string
- std::wstring_convert [C++], state_type
- std::wstring_convert [C++], int_type
- std::wstring_convert [C++], from_bytes
- std::wstring_convert [C++], to_bytes
- std::wstring_convert [C++], converted
- std::wstring_convert [C++], state
ms.assetid: e34f5b65-d572-4bdc-ac69-20778712e376
ms.openlocfilehash: 53c3e311967295294d158bb0342d365d45f5e031
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187741"
---
# <a name="wstring_convert-class"></a>Classe wstring_convert

Il modello di classe `wstring_convert` esegue le conversioni tra una stringa di caratteri "wide" e una stringa di byte.

## <a name="syntax"></a>Sintassi

```cpp
template <class Codecvt, class Elem = wchar_t>
class wstring_convert
```

### <a name="parameters"></a>Parametri

*Codecvt*\
Facet delle [impostazioni locali](../standard-library/locale-class.md) che rappresenta l'oggetto di conversione.

*Elem*\
Tipo di elemento a caratteri "wide".

## <a name="remarks"></a>Commenti

Il modello di classe descrive un oggetto che controlla le conversioni tra oggetti stringa estesi della classe `std::basic_string<Elem>` e gli oggetti stringa di byte della classe `std::basic_string<char>` (noto anche come `std::string` ). Il modello di classe definisce i tipi `wide_string` e `byte_string` come sinonimi per questi due tipi. La conversione tra una sequenza di valori `Elem` (archiviati in un oggetto `wide_string`) e sequenze multibyte (archiviate in un oggetto `byte_string`) viene eseguita da un oggetto della classe `Codecvt<Elem, char, std::mbstate_t>`, che soddisfa i requisiti del facet standard di conversione del codice `std::codecvt<Elem, char, std::mbstate_t>`.

Un oggetto di questo modello di classe archivia:

- Una stringa di byte da visualizzare in caso di errori

- Una stringa di caratteri "wide" da visualizzare in caso di errori

- Un puntatore all'oggetto di conversione allocato (che viene liberato quando viene eliminato definitivamente l'oggetto wbuffer_convert)

- Un oggetto conversion state di tipo [state_type](#state_type)

- Un conteggio delle conversioni

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[wstring_convert](#wstring_convert)|Costruisce un oggetto di tipo `wstring_convert`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[byte_string](#byte_string)|Tipo che rappresenta una stringa di tipo byte.|
|[wide_string](#wide_string)|Tipo che rappresenta una stringa di tipo wide.|
|[state_type](#state_type)|Tipo che rappresenta lo stato della conversione.|
|[int_type](#int_type)|Tipo che rappresenta un Integer.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[from_bytes](#from_bytes)|Converte una stringa di byte in una stringa di caratteri "wide".|
|[to_bytes](#to_bytes)|Converte una stringa di caratteri "wide" in una stringa di byte.|
|[converted](#converted)|Restituisce il numero di conversioni riuscite.|
|[state](#state)|Restituisce un oggetto che rappresenta lo stato della conversione.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="wstring_convertbyte_string"></a><a name="byte_string"></a> wstring_convert:: byte_string

Tipo che rappresenta una stringa di tipo byte.

```cpp
typedef std::basic_string<char> byte_string;
```

### <a name="remarks"></a>Commenti

Il tipo è sinonimo di `std::basic_string<char>`.

## <a name="wstring_convertconverted"></a><a name="converted"></a> wstring_convert:: convertito

Restituisce il numero di conversioni riuscite.

```cpp
size_t converted() const;
```

### <a name="return-value"></a>Valore restituito

Numero di conversioni riuscite.

### <a name="remarks"></a>Commenti

Il numero di conversioni riuscite viene archiviato nell'oggetto del conteggio di conversione.

## <a name="wstring_convertfrom_bytes"></a><a name="from_bytes"></a> wstring_convert:: from_bytes

Converte una stringa di byte in una stringa di caratteri "wide".

```cpp
wide_string from_bytes(char Byte);
wide_string from_bytes(const char* ptr);
wide_string from_bytes(const byte_string& Bstr);
wide_string from_bytes(const char* first, const char* last);
```

### <a name="parameters"></a>Parametri

*Byte*\
Sequenza di byte a elemento singolo da convertire.

*PTR*\
Sequenza di caratteri con terminazione Null di tipo C da convertire.

*BSTR*\
Oggetto [byte_string](#byte_string) da convertire.

*prima*\
Il primo carattere in un intervallo di caratteri da convertire.

*Ultima*\
L'ultimo carattere in un intervallo di caratteri da convertire.

### <a name="return-value"></a>Valore restituito

Oggetto stringa di caratteri "wide" risultante dalla conversione.

### <a name="remarks"></a>Commenti

Se l'oggetto [stato](../standard-library/wstring-convert-class.md) di conversione *non* è stato costruito con un valore esplicito, viene impostato sul valore predefinito (lo stato iniziale della conversione) prima dell'inizio della conversione. In caso contrario, verrà lasciato invariato.

Il numero di elementi di input convertiti correttamente viene archiviato nell'oggetto conteggio di conversione. Se non si verificano errori di conversione, la funzione membro restituisce la stringa di caratteri "wide" convertita. In caso contrario, se l'oggetto è stato costruito con un inizializzatore per il messaggio di errore con stringa di caratteri "wide", la funzione membro restituisce l'oggetto messaggio di errore con stringa di caratteri "wide". In caso contrario, la funzione membro genera un oggetto della classe [range_error](../standard-library/range-error-class.md).

## <a name="wstring_convertint_type"></a><a name="int_type"></a> wstring_convert:: int_type

Tipo che rappresenta un Integer.

```cpp
typedef typename wide_string::traits_type::int_type int_type;
```

### <a name="remarks"></a>Commenti

Il tipo è sinonimo di `wide_string::traits_type::int_type`.

## <a name="wstring_convertstate"></a><a name="state"></a> wstring_convert:: state

Restituisce un oggetto che rappresenta lo stato della conversione.

```cpp
state_type state() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [conversion state](../standard-library/wstring-convert-class.md) che rappresenta lo stato della conversione.

### <a name="remarks"></a>Commenti

## <a name="wstring_convertstate_type"></a><a name="state_type"></a> wstring_convert:: state_type

Tipo che rappresenta lo stato della conversione.

```cpp
typedef typename Codecvt::state_type state_type;
```

### <a name="remarks"></a>Commenti

Il tipo descrive un oggetto che può rappresentare uno stato di conversione. Il tipo è sinonimo di `Codecvt::state_type`.

## <a name="wstring_convertto_bytes"></a><a name="to_bytes"></a> wstring_convert:: to_bytes

Converte una stringa di caratteri "wide" in una stringa di byte.

```cpp
byte_string to_bytes(Elem Char);
byte_string to_bytes(const Elem* Wptr);
byte_string to_bytes(const wide_string& Wstr);
byte_string to_bytes(const Elem* first, const Elem* last);
```

### <a name="parameters"></a>Parametri

*Char*\
Carattere wide da convertire.

*Wptr*\
Sequenza con terminazione Null di tipo C, che inizia da `wptr`, da convertire.

*WSTR*\
Oggetto [wide_string](#wide_string) da convertire.

*prima*\
Primo elemento nell'intervallo di elementi da convertire.

*Ultima*\
Ultimo elemento nell'intervallo di elementi da convertire.

### <a name="remarks"></a>Commenti

Se l'oggetto [stato](../standard-library/wstring-convert-class.md) di conversione *non* è stato costruito con un valore esplicito, viene impostato sul valore predefinito (lo stato iniziale della conversione) prima dell'inizio della conversione. In caso contrario, verrà lasciato invariato.

Il numero di elementi di input convertiti correttamente viene archiviato nell'oggetto conteggio di conversione. Se non si verificano errori di conversione, la funzione membro restituisce la stringa di byte convertita. In caso contrario, se l'oggetto è stato costruito con un inizializzatore per il messaggio di errore con stringa di byte, la funzione membro restituisce l'oggetto messaggio di errore con stringa di byte. In caso contrario, la funzione membro genera un oggetto della classe [range_error](../standard-library/range-error-class.md).

## <a name="wstring_convertwide_string"></a><a name="wide_string"></a> wstring_convert:: wide_string

Tipo che rappresenta una stringa di tipo wide.

```cpp
typedef std::basic_string<Elem> wide_string;
```

### <a name="remarks"></a>Commenti

Il tipo è sinonimo di `std::basic_string<Elem>`.

## <a name="wstring_convertwstring_convert"></a><a name="wstring_convert"></a> wstring_convert:: wstring_convert

Costruisce un oggetto di tipo `wstring_convert`.

```cpp
wstring_convert(Codecvt *Pcvt = new Codecvt);
wstring_convert(Codecvt *Pcvt, state_type _State);
wstring_convert(const byte_string& _Berr, const wide_string& Werr = wide_string());
```

### <a name="parameters"></a>Parametri

*\*Pcvt*\
Oggetto di tipo `Codecvt` per eseguire la conversione.

*_State*\
Oggetto di tipo [state_type](#state_type) che rappresenta lo stato della conversione.

*_Berr*\
L'oggetto [byte_string](#byte_string) da visualizzare in caso di errori.

*Werr*\
L'oggetto [wide_string](#wide_string) da visualizzare in caso di errori.

### <a name="remarks"></a>Commenti

Il primo costruttore archivia *Pcvt_arg* nell'[oggetto di conversione](../standard-library/wstring-convert-class.md)
