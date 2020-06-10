---
title: Classe SafeInt
ms.date: 10/22/2018
ms.topic: reference
f1_keywords:
- SafeInt
- SafeInt::SafeInt
- SafeInt.SafeInt
helpviewer_keywords:
- SafeInt class
- SafeInt class, constructor
ms.assetid: 27a8f087-2511-46f9-8d76-2aeb66ca272f
ms.openlocfilehash: a7c0de8b5fd64fb9746f4c503189fcad409f1e85
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620945"
---
# <a name="safeint-class"></a>Classe SafeInt

Estende le primitive Integer per impedire l'overflow di Integer e consente di confrontare tipi Integer diversi.

> [!NOTE]
> La versione più recente di questa libreria si trova in [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt) .

## <a name="syntax"></a>Sintassi

```cpp
template<typename T, typename E = _SAFEINT_DEFAULT_ERROR_POLICY>
class SafeInt;
```

### <a name="parameters"></a>Parametri

| Modello  |  Descrizione |
|--------|------------|
| T         |  Tipo Integer o parametro booleano sostituito da `SafeInt`. |
| E         |  Tipo di dati enumerato che definisce i criteri di gestione degli errori. |
| U         |  Tipo Integer o parametro booleano per il secondo operando. |

| Parametro  |  Description |
|---------|-----------------|
| *rhs*      |  [in] Parametro di input che rappresenta il valore sul lato destro dell'operatore in numerose funzioni autonome. |
| *i*        |  [in] Parametro di input che rappresenta il valore sul lato destro dell'operatore in numerose funzioni autonome. |
| *bit*     |  [in] Parametro di input che rappresenta il valore sul lato destro dell'operatore in numerose funzioni autonome. |

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                          |  Descrizione |
|---------------------------|--------------------|
| [SafeInt:: SafeInt](#safeint)  |  Costruttore predefinito. |

### <a name="assignment-operators"></a>Operatori di assegnazione

| Name  |  Sintassi |
|----|---------|
| =     |  `template<typename U>`<br />`SafeInt<T,E>& operator= (const U& rhs)` |
| =     |  `SafeInt<T,E>& operator= (const T& rhs) throw()` |
| =     |  `template<typename U>`<br />`SafeInt<T,E>& operator= (const SafeInt<U, E>& rhs)` |
| =     |  `SafeInt<T,E>& operator= (const SafeInt<T,E>& rhs) throw()` |

### <a name="casting-operators"></a>Operatori di cast

| Name              |  Sintassi |
|------|---------------------------------|
| bool              |  `operator bool() throw()` |
| char              |  `operator char() const` |
| signed char       |  `operator signed char() const` |
| unsigned char     |  `operator unsigned char() const` |
| __int16           |  `operator __int16() const` |
| unsigned __int16  |  `operator unsigned __int16() const` |
| __int32           |  `operator __int32() const` |
| unsigned __int32  |  `operator unsigned __int32() const` |
| long              |  `operator long() const` |
| unsigned long     |  `operator unsigned long() const` |
| __int64           |  `operator __int64() const` |
| unsigned __int64  |  `operator unsigned __int64() const` |
| wchar_t           |  `operator wchar_t() const` |

### <a name="comparison-operators"></a>Operatori di confronto

| Name  |  Sintassi |
|----|----------------|
| \<     |  `template<typename U>`<br /><br /> `bool operator< (U rhs) const throw()` |
| \<     |  `bool operator< (SafeInt<T,E> rhs) const throw()` |
| \>=    |  `template<typename U>`<br /><br /> `bool operator>= (U rhs) const throw()` |
| \>=    |  `Bool operator>= (SafeInt<T,E> rhs) const throw()` |
| \>     |  `template<typename U>`<br /><br /> `bool operator> (U rhs) const throw()` |
| \>     |  `Bool operator> (SafeInt<T,E> rhs) const throw()` |
| \<=    |  `template<typename U>`<br /><br /> `bool operator<= (U rhs) const throw()` |
| \<=    |  `bool operator<= (SafeInt<T,E> rhs) const throw()` |
| ==    |  `template<typename U>`<br /><br /> `bool operator== (U rhs) const throw()` |
| ==    |  `bool operator== (bool rhs) const throw()` |
| ==    |  `bool operator== (SafeInt<T,E> rhs) const throw()` |
| !=    |  `template<typename U>`<br /><br /> `bool operator!= (U rhs) const throw()` |
| !=    |  `bool operator!= (bool b) const throw()` |
| !=    |  `bool operator!= (SafeInt<T,E> rhs) const throw()` |

### <a name="arithmetic-operators"></a>Operatori aritmetici

| Name  |  Sintassi |
|----|--------------|
| +     |  `const SafeInt<T,E>& operator+ () const throw()` |
| -     |  `SafeInt<T,E> operator- () const` |
| ++    |  `SafeInt<T,E>& operator++ ()` |
| --    |  `SafeInt<T,E>& operator-- ()` |
| %     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator% (U rhs) const` |
| %     |  `SafeInt<T,E> operator% (SafeInt<T,E> rhs) const` |
| %=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (U rhs)` |
| %=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (SafeInt<U, E> rhs)` |
| \*     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator* (U rhs) const` |
| \*     |  `SafeInt<T,E> operator* (SafeInt<T,E> rhs) const` |
| \*=    |  `SafeInt<T,E>& operator*= (SafeInt<T,E> rhs)` |
| \*=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (U rhs)` |
| \*=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (SafeInt<U, E> rhs)` |
| /     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator/ (U rhs) const` |
| /     |  `SafeInt<T,E> operator/ (SafeInt<T,E> rhs ) const` |
| /=    |  `SafeInt<T,E>& operator/= (SafeInt<T,E> i)` |
| /=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (U i)` |
| /=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (SafeInt<U, E> i)` |
| +     |  `SafeInt<T,E> operator+ (SafeInt<T,E> rhs) const` |
| +     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator+ (U rhs) const` |
| +=    |  `SafeInt<T,E>& operator+= (SafeInt<T,E> rhs)` |
| +=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (U rhs)` |
| +=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (SafeInt<U, E> rhs)` |
| -     |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator- (U rhs) const` |
| -     |  `SafeInt<T,E> operator- (SafeInt<T,E> rhs) const` |
| -=    |  `SafeInt<T,E>& operator-= (SafeInt<T,E> rhs)` |
| -=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (U rhs)` |
| -=    |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (SafeInt<U, E> rhs)` |

### <a name="logical-operators"></a>Operatori logici

| Name     |  Sintassi |
|------|--------------|
| !        |  `bool operator !() const throw()` |
| ~        |  `SafeInt<T,E> operator~ () const throw()` |
| \<\<       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (U bits) const throw()` |
| \<\<       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (SafeInt<U, E> bits) const throw()` |
| \<\<=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (U bits) throw()` |
| \<\<=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (SafeInt<U, E> bits) throw()` |
| \>\>       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (U bits) const throw()` |
| \>\>       |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (SafeInt<U, E> bits) const throw()` |
| \>\>=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (U bits) throw()` |
| \>\>=      |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (SafeInt<U, E> bits) throw()` |
| &        |  `SafeInt<T,E> operator& (SafeInt<T,E> rhs) const throw()` |
| &        |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator& (U rhs) const throw()` |
| &=       |  `SafeInt<T,E>& operator&= (SafeInt<T,E> rhs) throw()` |
| &=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (U rhs) throw()` |
| &=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (SafeInt<U, E> rhs) throw()` |
| ^        |  `SafeInt<T,E> operator^ (SafeInt<T,E> rhs) const throw()` |
| ^        |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator^ (U rhs) const throw()` |
| ^=       |  `SafeInt<T,E>& operator^= (SafeInt<T,E> rhs) throw()` |
| ^=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (U rhs) throw()` |
| ^=       |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (SafeInt<U, E> rhs) throw()` |
| &#124;   |  `SafeInt<T,E> operator&#124; (SafeInt<T,E> rhs) const throw()` |
| &#124;   |  `template<typename U>`<br /><br /> `SafeInt<T,E> operator&#124; (U rhs) const throw()` |
| &#124;=  |  `SafeInt<T,E>& operator&#124;= (SafeInt<T,E> rhs) throw()` |
| &#124;=  |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (U rhs) throw()` |
| &#124;=  |  `template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (SafeInt<U, E> rhs) throw()` |

## <a name="remarks"></a>Osservazioni

La classe `SafeInt` protegge dall'overflow di Integer nelle operazioni matematiche. Si consideri, ad esempio, la somma di due Integer a 8 bit: uno ha un valore pari a 200 e il secondo un valore pari a 100. L'operazione matematica corretta sarebbe 200 + 100 = 300. Tuttavia, a causa del limite di 8 bit per gli Integer, il bit superiore andrà perso e il compilatore restituirà 44 (300 - 2<sup>8</sup>) come risultato. Qualsiasi operazione che dipende da questa equazione matematica genererà un comportamento imprevisto.

La classe `SafeInt` controlla se si verifica un overflow aritmetico o se il codice prova a eseguire una divisione per zero. In entrambi i casi la classe chiama il gestore degli errori per informare il programma del potenziale problema.

Questa classe consente anche di confrontare due tipi Integer diversi, a condizione che siano oggetti `SafeInt`. In genere, quando si esegue un confronto, è prima necessario convertire i numeri affinché siano dello stesso tipo. Il cast di un numero in un altro tipo spesso richiede controlli per assicurarsi che non vi sia alcuna perdita di dati.

La tabella relativa agli operatori in questo argomento elenca gli operatori matematici e di confronto supportati dalla classe `SafeInt`. La maggior parte degli operatori matematici restituisce un oggetto `SafeInt` di tipo `T`.

Le operazioni di confronto tra un oggetto `SafeInt` e un tipo di dati integrale possono essere eseguite in entrambe le direzioni. Ad esempio, entrambe le operazioni `SafeInt<int>(x) < y` e `y> SafeInt<int>(x)` sono valide e restituiscono lo stesso risultato.

Molti operatori binari non supportano l'uso di due tipi `SafeInt` diversi. Un esempio è costituito dall'operatore `&`. L'operazione `SafeInt<T, E> & int` è supportata, mentre `SafeInt<T, E> & SafeInt<U, E>` no. Nell'ultimo esempio, il compilatore non sa quale tipo di parametro restituire. Per risolvere questo problema è possibile eseguire il cast del secondo parametro nel tipo di base. Usando gli stessi parametri, questa operazione può essere eseguita con `SafeInt<T, E> & (U)SafeInt<U, E>`.

> [!NOTE]
> Per le operazioni bit per bit, i due diversi parametri devono avere le stesse dimensioni. Se le dimensioni sono differenti, il compilatore genererà un'eccezione [ASSERT](../mfc/reference/diagnostic-services.md#assert). Non è possibile garantire l'accuratezza dei risultati di questa operazione. Per risolvere questo problema, eseguire il cast del parametro più piccolo fino a quando non ha le stesse dimensioni del parametro più grande.

Per gli operatori shift, lo spostamento di un numero di bit maggiore di quelli esistenti per il tipo di modello genera un'eccezione ASSERT. Ciò non ha alcun effetto nella modalità di rilascio. La combinazione di due tipi di parametri SafeInt è possibile per gli operatori shift perché il tipo restituito è identico al tipo originale. Il numero a destra dell'operatore indica solo il numero di bit da spostare.

Quando si esegue un confronto logico con un oggetto SafeInt, il confronto è strettamente aritmetico. Prendere ad esempio in considerazione queste espressioni:

- `SafeInt<uint>((uint)~0) > -1`

- `((uint)~0) > -1`

La prima istruzione si risolve in **true**, ma la seconda istruzione si risolve in `false`. La negazione bit per bit di 0 è 0xFFFFFFFF. Nella seconda istruzione l'operatore di confronto predefinito confronta 0xFFFFFFFF e 0xFFFFFFFF e li considera uguali. L'operatore di confronto per la classe `SafeInt` rileva che il secondo parametro è negativo, mentre il primo parametro è senza segno. Di conseguenza, anche se la rappresentazione in bit è identica, l'operatore logico `SafeInt` determina che il valore intero senza segno è maggiore di -1.

Fare attenzione quando si usa la classe `SafeInt` insieme all'operatore ternario `?:`. Considerare la riga di codice seguente.

```cpp
Int x = flag ? SafeInt<unsigned int>(y) : -1;
```

Il compilatore la converte in quanto segue:

```cpp
Int x = flag ? SafeInt<unsigned int>(y) : SafeInt<unsigned int>(-1);
```

Se `flag` è `false`, il compilatore genera un'eccezione invece di assegnare il valore -1 a `x`. Pertanto, per evitare questo comportamento, il codice corretto da usare è la riga seguente.

```cpp
Int x = flag ? (int) SafeInt<unsigned int>(y) : -1;
```

È possibile assegnare a `T` e `U` un tipo booleano, un tipo di carattere o un tipo Integer. I tipi Integer possono essere con o senza segno e avere qualsiasi dimensione tra 8 bit e 64 bit.

> [!NOTE]
> Anche se la classe `SafeInt` accetta qualsiasi tipo di Integer, è più efficace con i tipi senza segno.

`E` è il meccanismo di gestione degli errori usato da `SafeInt`. Con la libreria SafeInt vengono forniti due meccanismi di gestione degli errori. Il criterio predefinito è `SafeIntErrorPolicy_SafeIntException`, che genera un'eccezione della [classe SafeIntException](safeintexception-class.md) quando si verifica un errore. L'altro criterio è `SafeIntErrorPolicy_InvalidParameter`, che arresta il programma se si verifica un errore.

Ci sono due opzioni per personalizzare i criteri di gestione degli errori. La prima opzione consiste nell'impostare il parametro `E` quando si crea un oggetto `SafeInt`. Usare questa opzione quando si vuole modificare il criterio di gestione degli errori per un solo oggetto `SafeInt`. L'altra opzione consiste nel definire _SAFEINT_DEFAULT_ERROR_POLICY come classe personalizzata di gestione degli errori prima di includere la libreria `SafeInt`. Usare questa opzione quando si vuole modificare il criterio predefinito di gestione degli errori per tutte le istanze della classe `SafeInt` nel codice.

> [!NOTE]
> Una classe personalizzata che gestisce gli errori dalla libreria SafeInt non deve restituire il controllo al codice che ha chiamato il gestore degli errori. Una volta chiamato il gestore degli errori, il risultato dell'operazione `SafeInt` non può essere considerato attendibile.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SafeInt`

## <a name="requirements"></a>Requisiti

**Intestazione:** safeint.h

**Spazio dei nomi:** msl::utilities

## <a name="safeintsafeint"></a><a name="safeint"></a>SafeInt:: SafeInt

Costruisce un oggetto `SafeInt`.

```cpp
SafeInt() throw

SafeInt (
   const T& i
) throw ()

SafeInt (
   bool b
) throw ()

template <typename U>
SafeInt (
   const SafeInt <U, E>& u
)

I template <typename U>
SafeInt (
   const U& i
)
```

### <a name="parameters"></a>Parametri

*i*<br/>
[in] Valore per il nuovo oggetto `SafeInt`. Deve trattarsi di un parametro di tipo T o U, a seconda del costruttore.

*b*<br/>
[in] Valore booleano per il nuovo oggetto `SafeInt`.

*u*<br/>
[in] Oggetto `SafeInt` di tipo U. Il nuovo oggetto `SafeInt` avrà lo stesso valore di *u*, ma sarà di tipo T.

U è il tipo di dati archiviato in `SafeInt`. Può trattarsi di un tipo booleano, carattere o Integer. Se è un tipo Integer, può essere con o senza segno e compreso tra 8 e 64 bit.

### <a name="remarks"></a>Osservazioni

Il parametro di input per il costruttore, *i* o *u*, deve essere un tipo booleano, carattere o Integer. Se è un altro tipo di parametro, la classe `SafeInt` chiama [static_assert](../cpp/static-assert.md) per indicare un parametro di input non valido.

I costruttori che usano il tipo di modello `U` convertono automaticamente il parametro di input nel tipo specificato da `T`. La classe `SafeInt` converte i dati senza alcuna perdita di dati. Segnala al gestore degli errori `E` se non è possibile convertire i dati nel tipo `T` senza perdita di dati.

Se si crea un oggetto `SafeInt` da un parametro booleano, è necessario inizializzare il valore immediatamente. Non è possibile costruire un oggetto `SafeInt` usando il codice `SafeInt<bool> sb;`. In questo caso, verrà generato un errore di compilazione.
