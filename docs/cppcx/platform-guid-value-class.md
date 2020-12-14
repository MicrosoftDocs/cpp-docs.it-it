---
description: 'Altre informazioni su: classe di valori Platform:: GUID'
title: Classe di valori Platform::Guid
ms.date: 01/15/2019
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Guid
helpviewer_keywords:
- Platform::Guid Struct
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
ms.openlocfilehash: 4c2ffc5096e6b40266fef0934acc562edf721c24
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195190"
---
# <a name="platformguid-value-class"></a>Classe di valori Platform::Guid

Rappresenta un tipo [GUID] (/Windows/Win32/API/guiddef/NS-guiddef-GUID nel sistema di tipi di Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
public value struct Guid
```

### <a name="members"></a>Members

`Platform::Guid` contiene i `Equals()` `GetHashCode()` metodi, e `ToString()` derivati dalla [Classe Platform:: Object](../cppcx/platform-object-class.md)e il `GetTypeCode()` metodo derivato dalla [Classe Platform:: Type](../cppcx/platform-type-class.md). `Platform::Guid` dispone inoltre dei membri seguenti.

|Membro|Descrizione|
|------------|-----------------|
|[GUID](#ctor)|Inizializza una nuova istanza di `Platform::Guid`.|
|[operatore = =](#operator-equality)|Operatore Equals.|
|[operatore! =](#operator-inequality)|Operatore Not equals.|
|[operatore&lt;](#operator-less)|Operatore Less than.|
|[operatore ()](#operator-call)|Converte `Platform::Guid` in `GUID`.|

### <a name="remarks"></a>Commenti

Per generare un nuovo oggetto `Platform::Guid` , usare il metodo statico [Windows:: Foundation:: GuidHelper:: CreateNewGuid](/uwp/api/windows.foundation.guidhelper.createnewguid) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="guidguid-constructors"></a><a name="ctor"></a> Costruttori GUID:: GUID

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

*un*<br/>
Primi 4 byte di `GUID` .

*b*<br/>
I 2 byte successivi dell'oggetto `GUID` .

*c*<br/>
I 2 byte successivi dell'oggetto `GUID` .

*d*<br/>
Successivo byte di `GUID`.

*e*<br/>
Successivo byte di `GUID`.

*f*<br/>
Successivo byte di `GUID`.

*g*<br/>
Successivo byte di `GUID`.

*h*<br/>
Successivo byte di `GUID`.

*i*<br/>
Successivo byte di `GUID`.

*j*<br/>
Successivo byte di `GUID`.

*k*<br/>
Successivo byte di `GUID`.

*m*<br/>
Oggetto `GUID` nella forma di una [struttura Guid](/windows/win32/api/guiddef/ns-guiddef-guid).

*n*<br/>
Gli 8 byte rimanenti di `GUID` .

## <a name="guidoperator-operator"></a><a name="operator-equality"></a> Operatore Guid:: operator = =

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

True se le due `Platform::Guid` istanze sono uguali.

### <a name="remarks"></a>Commenti

Preferisce usare l' `==` operatore anziché il metodo statico [Windows:: Foundation:: GuidHelper:: Equals](/uwp/api/windows.foundation.guidhelper.equals) .

## <a name="guidoperator-operator"></a><a name="operator-inequality"></a> Operatore Guid:: operator! =

Verifica l'ineguaglianza tra due istanze di `Platform::Guid`.

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

True se le due `Platform::Guid` istanze non sono uguali.

## <a name="guidoperatorlt-operator"></a><a name="operator-less"></a>Operatore Guid:: operator &lt;

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

True se *guid1* è ordinato prima di *guid2*. L'ordinamento è lessicografico dopo aver trattato ogni `Platform::Guid` come se fosse una matrice di valori senza segno a 4 32 bit. Questo non è l'ordine usato da SQL Server o .NET Framework, né è uguale all'ordinamento lessicografico in base alla rappresentazione di stringa.

Questo operatore viene fornito in modo che `Guid` gli oggetti possano essere utilizzati più facilmente dalla libreria standard C++.

## <a name="guidoperator-operator"></a><a name="operator-call"></a> Operatore Guid:: operator ()

Converte in modo implicito un oggetto `Platform::Guid` in una [struttura Guid](/windows/win32/api/guiddef/ns-guiddef-guid).

### <a name="syntax"></a>Sintassi

```cpp
const GUID& Platform::Guid::operator();
```

### <a name="return-value"></a>Valore restituito

[Struttura Guid](/windows/win32/api/guiddef/ns-guiddef-guid).

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
