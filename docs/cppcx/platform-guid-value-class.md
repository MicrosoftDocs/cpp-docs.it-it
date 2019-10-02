---
title: Classe di valori Platform::Guid
ms.date: 01/15/2019
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Guid
helpviewer_keywords:
- Platform::Guid Struct
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
ms.openlocfilehash: f63b2bb4fd5f809861622a4f6b255ee3725564b6
ms.sourcegitcommit: 4517932a67bbf2db16cfb122d3bef57a43696242
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2019
ms.locfileid: "71816585"
---
# <a name="platformguid-value-class"></a>Classe di valori Platform::Guid

Rappresenta un tipo [GUID](/previous-versions/cc317743(v%3dmsdn.10)) nel sistema di tipi di Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
public value struct Guid
```

### <a name="members"></a>Members

`Platform::Guid` ha i metodi `Equals()`, `GetHashCode()` e `ToString()` derivati dalla [Classe Platform:: Object](../cppcx/platform-object-class.md)e il metodo `GetTypeCode()` derivato dalla [Classe Platform:: Type](../cppcx/platform-type-class.md). `Platform::Guid` dispone inoltre dei membri seguenti.

|Member|Descrizione|
|------------|-----------------|
|[Guid](#ctor)|Inizializza una nuova istanza di un oggetto `Platform::Guid`.|
|[operator==](#operator-equality)|Operatore di uguaglianza.|
|[operator!=](#operator-inequality)|Operatore di disuguaglianza.|
|[operator&lt;](#operator-less)|Operatore minore di.|
|[operator()](#operator-call)|Converte `Platform::Guid` in `GUID`.|

### <a name="remarks"></a>Note

Per generare un nuovo `Platform::Guid`, usare il metodo statico [Windows:: Foundation:: GuidHelper:: CreateNewGuid](/uwp/api/windows.foundation.guidhelper.createnewguid#Windows_Foundation_GuidHelper_CreateNewGuid) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="ctor"></a>Costruttori GUID:: GUID

Inizializza una nuova istanza di un oggetto `Platform::Guid`.

### <a name="syntax"></a>Sintassi

```cpp
Guid(
    unsigned int a,
    unsigned short b,
    unsigned short c,
    unsigned char d,
    unsigned char e,
    unsigned char f,
    unsigned char g,
    unsigned char h,
    unsigned char i,
    unsigned char j,
    unsigned char k );

Guid(GUID m);

Guid(
    unsigned int a,
    unsigned short b,
    unsigned short c,
    Array<unsigned char>^ n );
```

### <a name="parameters"></a>Parametri

*a*<br/>
Primi 4 byte del `GUID`.

*b*<br/>
I 2 byte successivi del `GUID`.

*c*<br/>
I 2 byte successivi del `GUID`.

*d*<br/>
Byte successivo del `GUID`.

*e*<br/>
Byte successivo del `GUID`.

*f*<br/>
Byte successivo del `GUID`.

*g*<br/>
Byte successivo del `GUID`.

*h*<br/>
Byte successivo del `GUID`.

*i*<br/>
Byte successivo del `GUID`.

*j*<br/>
Byte successivo del `GUID`.

*k*<br/>
Byte successivo del `GUID`.

*m*<br/>
Un `GUID` nel formato di una [struttura Guid](/previous-versions/cc317743(v%3dmsdn.10)).

*n*<br/>
Gli 8 byte rimanenti del `GUID`.

## <a name="operator-equality"></a>Operatore Guid:: operator = =

Verifica l'uguaglianza tra due istanze di `Platform::Guid`.

### <a name="syntax"></a>Sintassi

```cpp
static bool Platform::Guid::operator==(Platform::Guid guid1, Platform::Guid guid2);
```

### <a name="parameters"></a>Parametri

*guid1*<br/>
Primo oggetto `Platform::Guid` da confrontare.

*guid2*<br/>
Secondo oggetto `Platform::Guid` da confrontare.

### <a name="return-value"></a>Valore restituito

True se le due istanze di @no__t 0 sono uguali.

### <a name="remarks"></a>Note

Preferisce usare l'operatore `==` invece del metodo statico [Windows:: Foundation:: GuidHelper:: Equals](/uwp/api/windows.foundation.guidhelper.equals) .

## <a name="operator-inequality"></a>Operatore Guid:: operator! =

Confronta due istanze di @no__t 0 per verificarne la disuguaglianza.

### <a name="syntax"></a>Sintassi

```cpp
static bool Platform::Guid::operator!=(Platform::Guid guid1, Platform::Guid guid2);
```

### <a name="parameters"></a>Parametri

*guid1*<br/>
Primo oggetto `Platform::Guid` da confrontare.

*guid2*<br/>
Secondo oggetto `Platform::Guid` da confrontare.

### <a name="return-value"></a>Valore restituito

True se le due istanze @no__t 0 non sono uguali.

## <a name="operator-less"></a>Operatore Guid:: operator @ no__t-1

Confronta due istanze di @no__t 0 per l'ordinamento.

### <a name="syntax"></a>Sintassi

```cpp
static bool Platform::Guid::operator<(Platform::Guid guid1, Platform::Guid guid2);
```

### <a name="parameters"></a>Parametri

*guid1*<br/>
Primo oggetto `Platform::Guid` da confrontare.

*guid2*<br/>
Secondo oggetto `Platform::Guid` da confrontare.

### <a name="return-value"></a>Valore restituito

True se *guid1* è ordinato prima di *guid2*. L'ordinamento è lessicografico dopo aver trattato ogni `Platform::Guid` come se fosse una matrice di valori senza segno a 4 32 bit. Questo non è l'ordine usato da SQL Server o .NET Framework, né è uguale all'ordinamento lessicografico in base alla rappresentazione di stringa.

Questo operatore viene fornito in modo che gli oggetti `Guid` possano essere utilizzati più facilmente C++ dalla libreria standard.

## <a name="operator-call"></a>Operatore Guid:: operator ()

Converte in modo implicito un `Platform::Guid` in una [struttura Guid](/previous-versions/cc317743(v%3dmsdn.10)).

### <a name="syntax"></a>Sintassi

```cpp
const GUID& Platform::Guid::operator();
```

### <a name="return-value"></a>Valore restituito

[Struttura Guid](/previous-versions/cc317743(v%3dmsdn.10)).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
