---
title: Classe di valori Platform::Guid
ms.date: 01/15/2019
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Guid
helpviewer_keywords:
- Platform::Guid Struct
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
ms.openlocfilehash: 3849074f93424912b1dc5b93883482a6cb55892a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750660"
---
# <a name="platformguid-value-class"></a>Classe di valori Platform::Guid

Rappresenta un tipo [GUID](/windows/win32/api/guiddef/ns-guiddef-guid nel sistema di tipi di Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
public value struct Guid
```

### <a name="members"></a>Membri

`Platform::Guid`dispone `Equals()`dei `GetHashCode()`metodi `ToString()` , e derivati dalla classe `GetTypeCode()` [Platform::Object](../cppcx/platform-object-class.md)e del metodo derivato dalla classe [Platform::Type](../cppcx/platform-type-class.md). `Platform::Guid`ha anche i seguenti membri.

|Membro|Descrizione|
|------------|-----------------|
|[Guid](#ctor)|Inizializza una nuova istanza di `Platform::Guid`.|
|[operatore di comando](#operator-equality)|Operatore Equals.|
|[operatore!](#operator-inequality)|Operatore Not equals.|
|[Operatore&lt;](#operator-less)|Operatore Less than.|
|[operator()](#operator-call)|Converte `Platform::Guid` in `GUID`.|

### <a name="remarks"></a>Osservazioni

Per generare `Platform::Guid`un nuovo , utilizzare il metodo statico [Windows::Foundation::GuidHelper::CreateNewGuid](/uwp/api/windows.foundation.guidhelper.createnewguid#Windows_Foundation_GuidHelper_CreateNewGuid) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8 (informazioni in due)

**Server minimo supportato:** Windows Server 2012 (informazioni in due)

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="guidguid-constructors"></a><a name="ctor"></a>Costruttori Guid::Guid

Inizializza una nuova istanza di `Platform::Guid`.

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

*Un*<br/>
I primi 4 `GUID`byte del file .

*B*<br/>
I successivi 2 `GUID`byte del file .

*C*<br/>
I successivi 2 `GUID`byte del file .

*d*<br/>
Successivo byte di `GUID`.

*e*<br/>
Successivo byte di `GUID`.

*F*<br/>
Successivo byte di `GUID`.

*G*<br/>
Successivo byte di `GUID`.

*H*<br/>
Successivo byte di `GUID`.

*Ho*<br/>
Successivo byte di `GUID`.

*J*<br/>
Successivo byte di `GUID`.

*K*<br/>
Successivo byte di `GUID`.

*M*<br/>
Oggetto `GUID` nel formato struttura [GUID](/windows/win32/api/guiddef/ns-guiddef-guid).

*n*<br/>
I restanti 8 `GUID`byte dell'oggetto .

## <a name="guidoperator-operator"></a><a name="operator-equality"></a>Guid::operatore

Verifica l'uguaglianza tra due istanze di `Platform::Guid`.

### <a name="syntax"></a>Sintassi

```cpp
static bool Platform::Guid::operator==(Platform::Guid guid1, Platform::Guid guid2);
```

### <a name="parameters"></a>Parametri

*guid1 (informazioni in stato di guida*<br/>
Primo oggetto `Platform::Guid` da confrontare.

*guid2 (informazioni in due)*<br/>
Secondo oggetto `Platform::Guid` da confrontare.

### <a name="return-value"></a>Valore restituito

True se `Platform::Guid` le due istanze sono uguali.

### <a name="remarks"></a>Osservazioni

Preferire l'utilizzo dell'operatore `==` anziché del metodo statico [Windows::Foundation::GuidHelper::Equals.](/uwp/api/windows.foundation.guidhelper.equals)

## <a name="guidoperator-operator"></a><a name="operator-inequality"></a>Operatore Guid::operator!

Verifica l'ineguaglianza tra due istanze di `Platform::Guid`.

### <a name="syntax"></a>Sintassi

```cpp
static bool Platform::Guid::operator!=(Platform::Guid guid1, Platform::Guid guid2);
```

### <a name="parameters"></a>Parametri

*guid1 (informazioni in stato di guida*<br/>
Primo oggetto `Platform::Guid` da confrontare.

*guid2 (informazioni in due)*<br/>
Secondo oggetto `Platform::Guid` da confrontare.

### <a name="return-value"></a>Valore restituito

True se `Platform::Guid` le due istanze non sono uguali.

## <a name="guidoperatorlt-operator"></a><a name="operator-less"></a>Guid::operatore Operatore&lt;

Confronta due `Platform::Guid` istanze per l'ordinamento.

### <a name="syntax"></a>Sintassi

```cpp
static bool Platform::Guid::operator<(Platform::Guid guid1, Platform::Guid guid2);
```

### <a name="parameters"></a>Parametri

*guid1 (informazioni in stato di guida*<br/>
Primo oggetto `Platform::Guid` da confrontare.

*guid2 (informazioni in due)*<br/>
Secondo oggetto `Platform::Guid` da confrontare.

### <a name="return-value"></a>Valore restituito

True se *guid1* viene ordinato prima *di guid2*. L'ordinamento è lessicografico dopo `Platform::Guid` aver trattato ciascuno come se fosse una matrice di quattro valori senza segno a 32 bit. Questo non è l'ordinamento utilizzato da SQL Server o .NET Framework, né è lo stesso come l'ordinamento lessicografico per rappresentazione di stringa.

Questo operatore viene `Guid` fornito in modo che gli oggetti possano essere utilizzati più facilmente dalla libreria standard di C.

## <a name="guidoperator-operator"></a><a name="operator-call"></a>Guid::operator() Operatore

Converte in `Platform::Guid` modo implicito un oggetto in una [struttura GUID](/windows/win32/api/guiddef/ns-guiddef-guid).

### <a name="syntax"></a>Sintassi

```cpp
const GUID& Platform::Guid::operator();
```

### <a name="return-value"></a>Valore restituito

Struttura [GUID](/windows/win32/api/guiddef/ns-guiddef-guid).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
