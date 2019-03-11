---
title: Classe Platform::StringReference
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::StringReference::StringReference
- VCCORLIB/Platform::StringReference::Data
- VCCORLIB/Platform::StringReference::Length
- VCCORLIB/Platform::StringReference::GetHSTRING
- VCCORLIB/Platform::StringReference::GetString
ms.assetid: 2d09c7ec-0f16-458e-83ed-7225a1b9221e
ms.openlocfilehash: 7b6ab42dc630ce7e0014534064e8f1ce6da00857
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750923"
---
# <a name="platformstringreference-class"></a>Classe Platform::StringReference

Tipo di ottimizzazione che puoi usare per passare dati in formato stringa dai parametri di input di `Platform::String^` ad altri metodi con un minimo di operazioni di copia.

## <a name="syntax"></a>Sintassi

```cpp
class StringReference
```

### <a name="remarks"></a>Note

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[StringReference::StringReference](#ctor)|Due costruttori per creare istanze di `StringReference`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[StringReference::Data](#data)|Restituisce i dati in formato stringa come matrice di valori char16.|
|[StringReference::Length](#length)|Restituisce il numero di caratteri della stringa.|
|[StringReference::GetHSTRING](#gethstring)|Restituisce i dati in formato stringa come HSTRING.|
|[StringReference::GetString](#getstring)|Restituisce i dati in formato stringa come `Platform::String^`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[StringReference::operator=](#operator-assign)|Assegna `StringReference` a una nuova istanza di `StringReference` .|
|[StringReference::operator()](#operator-call)|Converte `StringReference` in `Platform::String^`.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Intestazione:** vccorlib.h

## <a name="data"></a>  Metodo stringreference:: data

Restituisce i contenuti di questo `StringReference` come matrice di valori char16.

### <a name="syntax"></a>Sintassi

```cpp
const ::default::char16 * Data() const;
```

### <a name="return-value"></a>Valore restituito

Matrice di caratteri di testo UNICODE char16.

## <a name="gethstring"></a>  Metodo stringreference:: Gethstring

Restituisce il contenuto della stringa come `__abi_HSTRING`.

### <a name="syntax"></a>Sintassi

```cpp
__abi_HSTRING GetHSTRING() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `__abi_HSTRING` contenente i dati in formato stringa.

### <a name="remarks"></a>Note

## <a name="getstring"></a>  Metodo stringreference:: GetString

Restituisce il contenuto della stringa come `Platform::String^`.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(no_release_return) __declspec(no_refcount)
    ::Platform::String^ GetString() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `Platform::String^` contenente i dati in formato stringa.

## <a name="length"></a>  Metodo stringreference:: Length

Restituisce il numero di caratteri della stringa.

### <a name="syntax"></a>Sintassi

```cpp
unsigned int Length() const;
```

### <a name="return-value"></a>Valore restituito

Intero senza segno che specifica il numero di caratteri nella stringa.

### <a name="remarks"></a>Note

## <a name="operator-assign"></a>  Stringreference:: operator = (operatore)

Assegna l'oggetto specificato all'oggetto `StringReference` corrente.

### <a name="syntax"></a>Sintassi

```cpp
StringReference& operator=(const StringReference& __fstrArg);
StringReference& operator=(const ::default::char16* __strArg);
```

### <a name="parameters"></a>Parametri

*__fstrArg*<br/>
Indirizzo di un oggetto `StringReference` utilizzato per inizializzare l'oggetto `StringReference` corrente.

*__strArg*<br/>
Puntatore a una matrice di valori char16 utilizzata per inizializzare l'oggetto `StringReference` corrente.

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto di tipo `StringReference`.

### <a name="remarks"></a>Note

In quanto `StringReference` è una classe C++ standard e non una classe di riferimento, non viene visualizzato nei **Visualizzatore oggetti**.

## <a name="operator-call"></a>  StringReference::operator()  Operator

Converte un oggetto `StringReference` in un oggetto `Platform::String^`.

### <a name="syntax"></a>Sintassi

```cpp
__declspec(no_release_return) __declspec(no_refcount)
         operator ::Platform::String^() const;
```

### <a name="return-value"></a>Valore restituito

Handle a un oggetto di tipo `Platform::String`.

## <a name="ctor"></a>  Costruttore StringReference::StringReference

Inizializza una nuova istanza della classe `StringReference`.

### <a name="syntax"></a>Sintassi

```cpp
StringReference();
StringReference(const StringReference& __fstrArg);
StringReference(const ::default::char16* __strArg);
StringReference(const ::default::char16* __strArg, size_t __lenArg);
```

### <a name="parameters"></a>Parametri

*__fstrArg*<br/>

  `StringReference` i cui dati vengono utilizzati per inizializzare la nuova istanza.

*__strArg*<br/>
Puntatore a una matrice di valori char16 utilizzata per inizializzare la nuova istanza.

*__lenArg*<br/>
Numero di elementi in `__strArg`.

### <a name="remarks"></a>Note

La prima versione di questo costruttore rappresenta il costruttore predefinito. La seconda versione inizializza la nuova classe `StringReference` dell'istanza dall'oggetto specificato dal parametro `__fstrArg`. Il terzo e il quarto overload inizializzano una nuova istanza di `StringReference` da una matrice di valori char16. char16 rappresenta un carattere di testo UNICODE a 16 bit.

## <a name="see-also"></a>Vedere anche

[Classe Platform::StringReference](../cppcx/platform-stringreference-class.md)
