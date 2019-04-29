---
title: Classe di valori Platform::Guid
ms.date: 01/15/2019
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Guid
helpviewer_keywords:
- Platform::Guid Struct
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
ms.openlocfilehash: 64c70b619380d7c2ed4aaaecad3ee01a1d0f79c7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383321"
---
# <a name="platformguid-value-class"></a>Classe di valori Platform::Guid

Rappresenta un tipo [GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931) nel sistema di tipi di Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
public value struct Guid
```

### <a name="members"></a>Membri

`Platform::Guid` ha il `Equals()`, `GetHashCode()`, e `ToString()` i metodi derivati dal [classe platform:: Object](../cppcx/platform-object-class.md)e la `GetTypeCode()` metodo derivato dal [classe platform:: Type](../cppcx/platform-type-class.md). `Platform::Guid` dispone inoltre dei membri seguenti.

|Member|Descrizione|
|------------|-----------------|
|[Guid](#ctor)|Inizializza una nuova istanza di un oggetto `Platform::Guid`.|
|[operator==](#operator-equality)|Operatore di uguaglianza.|
|[operator!=](#operator-inequality)|Operatore di disuguaglianza.|
|[operator&lt;](#operator-less)|Operatore di minoranza.|
|[operator()](#operator-call)|Converte `Platform::Guid` in `GUID`.|

### <a name="remarks"></a>Note

Per generare un nuovo `Platform::Guid`, usare il [Windows::Foundation::GuidHelper::CreateNewGuid](/uwp/api/windows.foundation.guidhelper.createnewguid#Windows_Foundation_GuidHelper_CreateNewGuid) metodo statico.

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="ctor"></a> Costruttori GUID:: GUID

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
I primi 4 byte del `GUID`.

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
Oggetto `GUID` nel formato una [struttura GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931).

*n*<br/>
Gli 8 byte rimanenti del `GUID`.

## <a name="operator-equality"></a> GUID::operator Operator = =

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

True se i due `Platform::Guid` istanze sono uguali.

### <a name="remarks"></a>Note

Preferisce usare la `==` operatore anziché il [Windows::Foundation::GuidHelper::Equals](/uwp/api/windows.foundation.guidhelper.equals) metodo statico.

## <a name="operator-inequality"></a> GUID::operator! = (operatore)

Confronta due `Platform::Guid` istanze per verificarne la disuguaglianza.

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

True se i due `Platform::Guid` istanze non sono uguali.

## <a name="operator-less"></a> GUID::operator&lt; operatore

Confronta due `Platform::Guid` istanze per l'ordinamento.

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

True se *guid1* viene ordinato in posizione precedente *guid2*. L'ordinamento è lessicografico dopo considerare ogni `Platform::Guid` come se fosse una matrice di quattro valori senza segno a 32 bit. Ciò non è l'ordinamento usato da SQL Server o .NET Framework, non è identico ordine lessicografico dalla rappresentazione di stringa.

Questo operatore viene fornito in modo che `Guid` oggetti possono essere utilizzati più facilmente dalla libreria standard C++.

## <a name="operator-call"></a> Guid::operator() Operator

Converte in modo implicito una `Platform::Guid` a un [struttura GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931).

### <a name="syntax"></a>Sintassi

```cpp
const GUID& Platform::Guid::operator();
```

### <a name="return-value"></a>Valore restituito

Oggetto [struttura GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
