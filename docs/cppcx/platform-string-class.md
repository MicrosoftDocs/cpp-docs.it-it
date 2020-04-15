---
title: Classe Platform::String
ms.date: 10/16/2019
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::String::String
- VCCORLIB/Platform::String::Begin
- VCCORLIB/Platform::String::CompareOrdinal
- VCCORLIB/Platform::String::Concat
- VCCORLIB/Platform::String::Data
- VCCORLIB/Platform::String::Dispose
- VCCORLIB/Platform::String::End
- VCCORLIB/Platform::String::Equals
- VCCORLIB/Platform::String::GetHashCode
- VCCORLIB/Platform::String::IsEmpty
- VCCORLIB/Platform::String::IsFastPass
- VCCORLIB/Platform::String::Length
- VCCORLIB/Platform::String::ToString
helpviewer_keywords:
- Platform::String
ms.assetid: 72dd04a4-a694-40d3-b899-eaa0b503eab8
ms.openlocfilehash: 3f29c60d0d6a4618d97d8f750a048fcc18f976b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322120"
---
# <a name="platformstring-class"></a>Classe Platform::String

Rappresenta una raccolta sequenziale di caratteri Unicode, tipicamente utilizzata per rappresentare del testo. Per ulteriori informazioni ed esempi, vedere [Stringhe](../cppcx/strings-c-cx.md).

## <a name="syntax"></a>Sintassi

```cpp
public ref class String sealed : Object,
    IDisposable,
    IEquatable,
    IPrintable
```

## <a name="iterators"></a>Iterators

Per enumerare i caratteri in un oggetto String, è possibile utilizzare due funzioni di iteratore, che non sono membri della classe String, con la funzione del modello `std::for_each` .

|Membro|Descrizione|
|------------|-----------------|
|`const char16* begin(String^ s)`|Restituisce un puntatore che punta all'inizio dell'oggetto String specificato.|
|`const char16* end(String^ s)`|Restituisce un puntatore successivo alla fine dell'oggetto String specificato.|

## <a name="members"></a>Membri

La classe String eredita da Object e dalle interfacce IDisposable, IEquatable e IPrintable.

La classe String include inoltre i seguenti tipi di membri.

### <a name="constructors"></a>Costruttori

|Membro|Descrizione|
|------------|-----------------|
|[Stringa::Stringa](#ctor)|Inizializza una nuova istanza della classe String.|

### <a name="methods"></a>Metodi

La classe String eredita i metodi Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose() e ToString() da [Platform::Object Class](../cppcx/platform-object-class.md). La classe String utilizza anche i metodi seguenti.

|Metodo|Descrizione|
|------------|-----------------|
|[Stringa::Begin](#begin)|Restituisce un puntatore che punta all'inizio della stringa corrente.|
|[Stringa::CompareOrdinal](#compareordinal)|Confronta due oggetti `String` valutando i valori numerici dei caratteri corrispondenti nei due valori stringa rappresentati dagli oggetti.|
|[Stringa::Concat](#concat)|Concatena i valori di due oggetti String specificati.|
|[Stringa::Data](#data)|Restituisce un puntatore che punta all'inizio della stringa corrente.|
|[Stringa::Dispose](#dispose)|Libera o rilascia delle risorse.|
|[Stringa::Fine](#end)|Restituisce un puntatore successivo alla fine della stringa corrente.|
|[Stringa::Uguale a](#equals)|Indica se l'oggetto specificato è uguale all'oggetto corrente.|
|[Stringa::GetHashCode](#gethashcode)|Restituisce il codice hash relativo a questa istanza.|
|[Stringa::IsEmpty](#isempty)|Indica se l'oggetto String corrente è vuoto.|
|[Stringa::IsFastPass](#isfastpass)|Indica se l'oggetto String corrente partecipa a un'operazione di *passaggio rapido.* In questo tipo di operazione il conteggio dei riferimenti viene sospeso.|
|[Stringa::Lunghezza](#length)|Recupera la lunghezza dell'oggetto String corrente.|
|[Stringa::ToString](#tostring)|Restituisce un oggetto String il cui valore è uguale a quello dell'oggetto String corrente.|

### <a name="operators"></a>Operatori

La classe String dispone degli operatori seguenti.

|Membro|Descrizione|
|------------|-----------------|
|[Operatore String::operator](#operator-equality)|Indica se due oggetti String specificati hanno lo stesso valore.|
|[operatore+ Operatore](#operator-plus)|Concatena due oggetti stringa in un nuovo oggetto stringa.|
|[Operatore> String::operator](#operator-greater-than)|Indica se il valore di un oggetto String è maggiore del valore di un secondo oggetto String.|
|[String::operator e proprietà>operatore](#operator-greater-than-or-equals)|Indica se il valore di un oggetto String è maggiore o uguale al valore di un secondo oggetto String.|
|[Operatore String::operator!](#operator-inequality)|Indica se due oggetti String specificati hanno valori diversi.|
|[Operatore< String::operator](#operator-less-than)|Indica se il valore di un oggetto String è minore del valore di un secondo oggetto String.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8 (informazioni in due)

**Server minimo supportato:** Windows Server 2012 (informazioni in due)

**Spazio dei nomi:** Platform

**Intestazione** vccorlib.h (inclusa per impostazione predefinita)

## <a name="stringbegin-method"></a><a name="begin"></a>Metodo String::Begin

Restituisce un puntatore che punta all'inizio della stringa corrente.

### <a name="syntax"></a>Sintassi

```cpp
char16* Begin();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della stringa corrente.

## <a name="stringcompareordinal-method"></a><a name="compareordinal"></a>Metodo String::CompareOrdinal

Metodo statico che `String` confronta due oggetti valutando i valori numerici dei caratteri corrispondenti nei due valori stringa rappresentati dagli oggetti.

### <a name="syntax"></a>Sintassi

```cpp
static int CompareOrdinal( String^ str1, String^ str2 );
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto String.

*str2 (in cui*<br/>
Secondo oggetto String.

### <a name="return-value"></a>Valore restituito

Intero che indica la relazione lessicale tra i due termini di confronto. Nella tabella seguente sono elencati i valori restituiti possibili.

|Valore|Condizione|
|-----------|---------------|
|-1|`str1` è minore di `str2`.|
|0|`str1` è uguale `str2`.|
|1|`str1` è maggiore di `str2`.|

## <a name="stringconcat-method"></a><a name="concat"></a>Metodo String::Concat

Concatena i valori di due oggetti String specificati.

### <a name="syntax"></a>Sintassi

```cpp
String^ Concat( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto String o `null`.

*str2 (in cui*<br/>
Secondo oggetto String o `null`.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto String^ il cui valore è dato dalla concatenazione dei valori di `str1` e `str2`.

Se `str1` è `null` e `str2` è diverso da Null, viene restituito `str1`. Se `str2` è `null` e `str1` è diverso da Null, viene restituito `str2`. Se `str1` e `str2` sono entrambi `null`, viene restituita la stringa vuota (L"").

## <a name="stringdata-method"></a><a name="data"></a>Metodo String::Data

Restituisce un puntatore all'inizio del buffer di dati dell'oggetto come matrice di tipo C di elementi `char16` (`wchar_t`).

### <a name="syntax"></a>Sintassi

```cpp
const char16* Data();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio `const char16` di una matrice`char16` di caratteri `wchar_t`Unicode ( è un typedef per ).

### <a name="remarks"></a>Osservazioni

Puoi usare questo metodo per la conversione da `Platform::String^` a `wchar_t*`. Quando l'oggetto `String` esce dall'ambito, non viene più garantito che il puntatore a dati sia valido. Per archiviare i dati oltre `String` la durata dell'oggetto originale, utilizzare [wcscpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) per copiare la matrice in memoria allocata personalmente.

## <a name="stringdispose-method"></a><a name="dispose"></a>Metodo String::Dispose

Libera o rilascia delle risorse.

### <a name="syntax"></a>Sintassi

```cpp
virtual override void Dispose();
```

## <a name="stringend-method"></a><a name="end"></a>Metodo String::End

Restituisce un puntatore successivo alla fine della stringa corrente.

### <a name="syntax"></a>Sintassi

```cpp
char16* End();
```

### <a name="return-value"></a>Valore restituito

Puntatore successivo alla fine della stringa corrente.

### <a name="remarks"></a>Osservazioni

End() restituisce Begin() - Length.

## <a name="stringequals-method"></a><a name="equals"></a>Metodo String::Equals

Indica se la stringa specificata ha lo stesso valore dell'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
bool String::Equals(Object^ str);
bool String::Equals(String^ str);
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

**true** `str` se è uguale all'oggetto corrente; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questo metodo è equivalente alla proprietà [String::CompareOrdinal](#compareordinal)static . Nel primo overload, si prevede che il parametro `str` possa essere sottoposto a cast a un oggetto String^.

## <a name="stringgethashcode-method"></a><a name="gethashcode"></a>Metodo String::GetHashCode

Restituisce il codice hash relativo a questa istanza.

### <a name="syntax"></a>Sintassi

```cpp
virtual override int GetHashCode();
```

### <a name="return-value"></a>Valore restituito

Codice hash per l'istanza.

## <a name="stringisempty-method"></a><a name="isempty"></a>Metodo String::IsEmpty

Indica se l'oggetto String corrente è vuoto.

### <a name="syntax"></a>Sintassi

```cpp
bool IsEmpty();
```

### <a name="return-value"></a>Valore restituito

**true** se `String` l'oggetto corrente è **null** o la stringa vuota (L""); in caso contrario, **false**.

## <a name="stringisfastpass-method"></a><a name="isfastpass"></a>Metodo String::IsFastPass

Indica se l'oggetto String corrente partecipa a un'operazione di *passaggio rapido.* In questo tipo di operazione il conteggio dei riferimenti viene sospeso.

### <a name="syntax"></a>Sintassi

```cpp
bool IsFastPass();
```

### <a name="return-value"></a>Valore restituito

**true** se `String` l'oggetto corrente è fast-past; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

In una chiamata a una funzione in cui un oggetto con conteggio dei riferimenti è un parametro e la funzione chiamata legge semplicemente l'oggetto, il compilatore può sospendere il conteggio dei riferimenti in modo sicuro e migliorare le prestazioni di chiamata. Non vi è alcuna operazione utile che il codice possa eseguire tramite questa proprietà. Il sistema gestisce tutti i dettagli.

## <a name="stringlength-method"></a><a name="length"></a>Metodo String::Length

Recupera il numero di caratteri `String` nell'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
unsigned int Length();
```

### <a name="return-value"></a>Valore restituito

Numero di caratteri nell'oggetto corrente. `String`

### <a name="remarks"></a>Osservazioni

La lunghezza di una stringa senza caratteri è zero. La lunghezza della stringa seguente è 5:

```cpp
String^ str = "Hello";
int len = str->Length(); //len = 5
```

La matrice di caratteri restituita da [String::Data](#data) dispone di un carattere aggiuntivo, ovvero il carattere di terminazione NULL o ''0''. La lunghezza di questo carattere è inoltre di due byte.

## <a name="stringoperator-operator"></a><a name="operator-plus"></a>Operatore String::operator

Concatena due [String](../cppcx/platform-string-class.md) oggetti in un nuovo [String](../cppcx/platform-string-class.md) oggetto.

### <a name="syntax"></a>Sintassi

```cpp
bool String::operator+( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto `String`.

*str2 (in cui*<br/>
Secondo oggetto `String`, il cui contenuto verrà aggiunto a `str1`.

### <a name="return-value"></a>Valore restituito

**true** se *str1* è uguale a *str2*; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questo operatore crea un oggetto `String^` contenente i dati dei due operandi. Puoi usarlo per praticità quando non è fondamentale ottenere prestazioni estreme. Alcune chiamate a "`+`" in una funzione non saranno probabilmente rilevanti, ma se modifichi oggetti di grandi dimensioni o dati di testo in un ciclo rigido, usa tipi e meccanismi C++ standard.

## <a name="stringoperator-operator"></a><a name="operator-equality"></a>Operatore String::operator

Indica se due oggetti String specificati hanno lo stesso valore di testo.

### <a name="syntax"></a>Sintassi

```cpp
bool String::operator==( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto `String` da confrontare.

*str2 (in cui*<br/>
Secondo oggetto `String` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se il `str1` contenuto `str2`di è uguale a ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questo operatore equivale a [String::CompareOrdinal](#compareordinal).

## <a name="stringoperatorgt"></a><a name="operator-greater-than"></a>Stringa::operatore&gt;

Indica se il valore `String` di un oggetto è `String` maggiore del valore di un secondo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
bool String::operator>( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto `String`.

*str2 (in cui*<br/>
Secondo oggetto `String`.

### <a name="return-value"></a>Valore restituito

**true** se il `str1` valore di è `str2`maggiore del valore di ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questo operatore equivale a chiamare in modo esplicito [String::CompareOrdinal](#compareordinal) e ottenere un risultato maggiore di zero.

## <a name="stringoperatorgt"></a><a name="operator-greater-than-or-equals"></a>Stringa::operatore&gt;=

Indica se il valore `String` di un oggetto è maggiore o `String` uguale al valore di un secondo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
bool String::operator>=( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto `String`.

*str2 (in cui*<br/>
Secondo oggetto `String`.

### <a name="return-value"></a>Valore restituito

**true** se il `str1` valore di è maggiore `str2`o uguale al valore di ; in caso contrario, **false**.

## <a name="stringoperator"></a><a name="operator-inequality"></a>Stringa::operator!

Indica se due `String` oggetti specificati hanno valori diversi.

### <a name="syntax"></a>Sintassi

```cpp
bool String::operator!=( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto `String` da confrontare.

*str2 (in cui*<br/>
Secondo oggetto `String` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** `str1` se non `str2`è uguale a ; in caso contrario, **false**.

## <a name="stringoperatorlt"></a><a name="operator-less-than"></a>Stringa::operatore&lt;

Indica se il valore `String` di un oggetto è `String` minore del valore di un secondo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
bool String::operator<( String^ str1, String^ str2);
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Primo oggetto `String`.

*str2 (in cui*<br/>
Secondo oggetto `String`.

### <a name="return-value"></a>Valore restituito

**true** se il valore di *str1* è minore del valore di *str2*; in caso contrario, **false**.

## <a name="stringstring-constructor"></a><a name="ctor"></a>Costruttore String::String

Inizializza una nuova istanza `String` della classe con una copia dei dati della stringa di input.

### <a name="syntax"></a>Sintassi

```cpp
String();
String(char16* s);
String(char16* s, unsigned int n);
```

### <a name="parameters"></a>Parametri

*s*<br/>
Serie di caratteri "wide" che inizializzano la stringa char16

*N*<br/>
Numero che specifica la lunghezza della stringa.

### <a name="remarks"></a>Osservazioni

Se le prestazioni sono critiche e si controlla la durata della stringa di origine, è possibile usare Platform::StringReference al posto di String.If performance is critical and you control the lifetime of the source string, you can use [Platform::StringReference](../cppcx/platform-stringreference-class.md) in place of String.

### <a name="example"></a>Esempio

```cpp
String^ s = L"Hello!";
```

## <a name="stringtostring"></a><a name="tostring"></a>Stringa::ToString

Restituisce `String` un oggetto il cui valore è uguale alla stringa corrente.

### <a name="syntax"></a>Sintassi

```cpp
String^ String::ToString();
```

### <a name="return-value"></a>Valore restituito

Oggetto `String` il cui valore è uguale alla stringa corrente.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
