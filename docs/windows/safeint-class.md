---
title: Classe SafeInt | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeInt
dev_langs:
- C++
helpviewer_keywords:
- SafeInt class
ms.assetid: 27a8f087-2511-46f9-8d76-2aeb66ca272f
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a575538d2527aba25d62dff1a8ba4d89402f5cfb
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40019332"
---
# <a name="safeint-class"></a>Classe SafeInt
Estende le primitive di integer per evitare l'overflow di numeri interi e consente di confrontare i diversi tipi di numeri interi.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T, typename E = _SAFEINT_DEFAULT_ERROR_POLICY>  
class SafeInt;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Modello|Descrizione|  
|--------------|-----------------|  
|T|Il tipo di numero intero o un parametro booleano che **SafeInt** sostituisce.|  
|E|Un tipo di dati enumerati che definisce i criteri di gestione degli errori.|  
|G|Il tipo di numero intero o un parametro booleano per l'operando secondario.|  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *rhs*|Un parametro di input che rappresenta il valore sul lato destro dell'operatore in numerose funzioni autonome.|  
|[in] *ho*|Un parametro di input che rappresenta il valore sul lato destro dell'operatore in numerose funzioni autonome.|  
|[in] *bits*|Un parametro di input che rappresenta il valore sul lato destro dell'operatore in numerose funzioni autonome.|  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[SafeInt::SafeInt](../windows/safeint-safeint.md)|Costruttore predefinito.|  
  
### <a name="assignment-operators"></a>Operatori di assegnazione  
  
|nome|Sintassi|  
|----------|------------|  
|=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator= (const U& rhs)`|  
|=|`SafeInt<T,E>& operator= (const T& rhs) throw()`|  
|=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator= (const SafeInt<U, E>& rhs)`|  
|=|`SafeInt<T,E>& operator= (const SafeInt<T,E>& rhs) throw()`|  
  
### <a name="casting-operators"></a>Operatori di cast  
  
|nome|Sintassi|  
|----------|------------|  
|bool|`operator bool() throw()`|  
|char|`operator char() const`|  
|signed char|`operator signed char() const`|  
|unsigned char|`operator unsigned char() const`|  
|__int16|`operator __int16() const`|  
|unsigned __int16|`operator unsigned __int16() const`|  
|__int32|`operator __int32() const`|  
|unsigned __int32|`operator unsigned __int32() const`|  
|long|`operator long() const`|  
|unsigned long|`operator unsigned long() const`|  
|__int64|`operator __int64() const`|  
|unsigned __int64|`operator unsigned __int64() const`|  
|wchar_t|`operator wchar_t() const`|  
  
### <a name="comparison-operators"></a>Operatori di confronto  
  
|nome|Sintassi|  
|----------|------------|  
|<|`template<typename U>`<br /><br /> `bool operator< (U rhs) const throw()`|  
|<|`bool operator< (SafeInt<T,E> rhs) const throw()`|  
|>=|`template<typename U>`<br /><br /> `bool operator>= (U rhs) const throw()`|  
|>=|`Bool operator>= (SafeInt<T,E> rhs) const throw()`|  
|>|`template<typename U>`<br /><br /> `bool operator> (U rhs) const throw()`|  
|>|`Bool operator> (SafeInt<T,E> rhs) const throw()`|  
|<=|`template<typename U>`<br /><br /> `bool operator<= (U rhs) const throw()`|  
|<=|`bool operator<= (SafeInt<T,E> rhs) const throw()`|  
|==|`template<typename U>`<br /><br /> `bool operator== (U rhs) const throw()`|  
|==|`bool operator== (bool rhs) const throw()`|  
|==|`bool operator== (SafeInt<T,E> rhs) const throw()`|  
|!=|`template<typename U>`<br /><br /> `bool operator!= (U rhs) const throw()`|  
|!=|`bool operator!= (bool b) const throw()`|  
|!=|`bool operator!= (SafeInt<T,E> rhs) const throw()`|  
  
### <a name="arithmetic-operators"></a>Operatori aritmetici  
  
|nome|Sintassi|  
|----------|------------|  
|+|`const SafeInt<T,E>& operator+ () const throw()`|  
|-|`SafeInt<T,E> operator- () const`|  
|++|`SafeInt<T,E>& operator++ ()`|  
|--|`SafeInt<T,E>& operator-- ()`|  
|%|`template<typename U>`<br /><br /> `SafeInt<T,E> operator% (U rhs) const`|  
|%|`SafeInt<T,E> operator% (SafeInt<T,E> rhs) const`|  
|%=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (U rhs)`|  
|%=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (SafeInt<U, E> rhs)`|  
|*|`template<typename U>`<br /><br /> `SafeInt<T,E> operator* (U rhs) const`|  
|*|`SafeInt<T,E> operator* (SafeInt<T,E> rhs) const`|  
|*=|`SafeInt<T,E>& operator*= (SafeInt<T,E> rhs)`|  
|*=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (U rhs)`|  
|*=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (SafeInt<U, E> rhs)`|  
|/|`template<typename U>`<br /><br /> `SafeInt<T,E> operator/ (U rhs) const`|  
|/|`SafeInt<T,E> operator/ (SafeInt<T,E> rhs ) const`|  
|/=|`SafeInt<T,E>& operator/= (SafeInt<T,E> i)`|  
|/=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (U i)`|  
|/=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (SafeInt<U, E> i)`|  
|+|`SafeInt<T,E> operator+ (SafeInt<T,E> rhs) const`|  
|+|`template<typename U>`<br /><br /> `SafeInt<T,E> operator+ (U rhs) const`|  
|+=|`SafeInt<T,E>& operator+= (SafeInt<T,E> rhs)`|  
|+=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (U rhs)`|  
|+=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (SafeInt<U, E> rhs)`|  
|-|`template<typename U>`<br /><br /> `SafeInt<T,E> operator- (U rhs) const`|  
|-|`SafeInt<T,E> operator- (SafeInt<T,E> rhs) const`|  
|-=|`SafeInt<T,E>& operator-= (SafeInt<T,E> rhs)`|  
|-=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (U rhs)`|  
|-=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (SafeInt<U, E> rhs)`|  
  
### <a name="logical-operators"></a>Operatori logici  
  
|nome|Sintassi|  
|----------|------------|  
|!|`bool operator !() const throw()`|  
|~|`SafeInt<T,E> operator~ () const throw()`|  
|<<|`template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (U bits) const throw()`|  
|<<|`template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (SafeInt<U, E> bits) const throw()`|  
|<<=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (U bits) throw()`|  
|<<=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (SafeInt<U, E> bits) throw()`|  
|>>|`template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (U bits) const throw()`|  
|>>|`template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (SafeInt<U, E> bits) const throw()`|  
|>>=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (U bits) throw()`|  
|>>=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (SafeInt<U, E> bits) throw()`|  
|&|`SafeInt<T,E> operator& (SafeInt<T,E> rhs) const throw()`|  
|&|`template<typename U>`<br /><br /> `SafeInt<T,E> operator& (U rhs) const throw()`|  
|&=|`SafeInt<T,E>& operator&= (SafeInt<T,E> rhs) throw()`|  
|&=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (U rhs) throw()`|  
|&=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (SafeInt<U, E> rhs) throw()`|  
|^|`SafeInt<T,E> operator^ (SafeInt<T,E> rhs) const throw()`|  
|^|`template<typename U>`<br /><br /> `SafeInt<T,E> operator^ (U rhs) const throw()`|  
|^=|`SafeInt<T,E>& operator^= (SafeInt<T,E> rhs) throw()`|  
|^=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (U rhs) throw()`|  
|^=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (SafeInt<U, E> rhs) throw()`|  
|&#124;|`SafeInt<T,E> operator&#124; (SafeInt<T,E> rhs) const throw()`|  
|&#124;|`template<typename U>`<br /><br /> `SafeInt<T,E> operator&#124; (U rhs) const throw()`|  
|&#124;=|`SafeInt<T,E>& operator&#124;= (SafeInt<T,E> rhs) throw()`|  
|&#124;=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (U rhs) throw()`|  
|&#124;=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (SafeInt<U, E> rhs) throw()`|  
  
## <a name="remarks"></a>Note  
 Il **SafeInt** classe protegge dall'overflow di integer nelle operazioni matematiche. Ad esempio, è consigliabile aggiungere due integer a 8 bit: uno è un valore pari a 200 e il secondo contiene un valore pari a 100. L'operazione matematica corretto sarebbe 200 + 100 = 300. Tuttavia, a causa del limite di integer a 8 bit, il bit superiore andranno perso e il compilatore restituisce 44 (300-2<sup>8</sup>) come risultato. Qualsiasi operazione che dipende da questa equazione matematica genererà un comportamento imprevisto.  
  
 Il **SafeInt** classe controlla se si verifica un overflow aritmetico o se il codice tenta di dividere per zero. In entrambi i casi, la classe chiama il gestore degli errori per informare l'utente tramite il programma di potenziale problema.  
  
 Questa classe consente inoltre di confrontare due tipi diversi di numeri interi, purché siano **SafeInt** oggetti. In genere, quando si esegue un confronto, è prima necessario convertire i numeri per essere dello stesso tipo. Esegue il cast di un numero in un altro tipo spesso richiede controlli per assicurarsi che non vi sia alcuna perdita di dati.  
  
 La tabella operatori in questo argomento vengono elencati gli operatori matematici e di confronto supportati dal **SafeInt** classe. Gli operatori matematici più restituiscono un **SafeInt** oggetto di tipo `T`.  
  
 Operazioni di confronto tra un **SafeInt** e un tipo integrale può essere eseguito in entrambe le direzioni. Ad esempio, sia `SafeInt<int>(x) < y` e `y> SafeInt<int>(x)` siano validi e restituirà lo stesso risultato.  
  
 Molti operatori binari non supportano l'utilizzo di due diversi **SafeInt** tipi. Un esempio di questo è il `&` operatore. `SafeInt<T, E> & int` è supportato, ma `SafeInt<T, E> & SafeInt<U, E>` non. Nell'esempio quest'ultimo, il compilatore non conosce il tipo di parametro da restituire. Per risolvere questo problema è eseguire il cast il secondo parametro nel tipo di base. Usando gli stessi parametri, questa operazione può essere eseguita con `SafeInt<T, E> & (U)SafeInt<U, E>`.  
  
> [!NOTE]
>  Per qualsiasi operazione bit per bit, i due parametri diversi devono essere le stesse dimensioni. Se le dimensioni sono differenti, il compilatore genererà un [ASSERT](../mfc/reference/diagnostic-services.md#assert) eccezione. I risultati di questa operazione non possono essere garantiti sia preciso. Per risolvere questo problema, eseguire il cast di parametro più piccolo fino a quando non si tratta delle stesse dimensioni di parametro più grande.  
  
 Per gli operatori shift, shifting più bit superiore a quello esistente per il tipo di modello genererà un'eccezione ASSERT. Si avrà alcun effetto in modalità di rilascio. La combinazione di due tipi di parametri SafeInt è possibile per gli operatori di spostamento perché il tipo restituito è identico al tipo originale. Il numero a destra dell'operatore indica solo il numero di bit da spostare.  
  
 Quando si esegue un confronto logico con un solo oggetto SafeInt, il confronto è rigorosamente aritmetico. Ad esempio, prendere in considerazione queste espressioni:  
  
-   `SafeInt<uint>((uint)~0) > -1`  
  
-   `((uint)~0) > -1`  
  
 La prima istruzione si risolve in **true**, ma la seconda istruzione viene risolto **false**. La negazione bit per bit 0 è 0xFFFFFFFF. Nella seconda istruzione, l'operatore di confronto predefinito Confronta 0xFFFFFFFF per 0xFFFFFFFF e considerate uguali. L'operatore di confronto per il **SafeInt** classe si rende conto che il secondo parametro è negativo, mentre il primo parametro è senza segno. Di conseguenza, anche se la rappresentazione di bit è identica, il **SafeInt** operatore logico si rende conto che l'intero senza segno è maggiore di -1.  
  
 Prestare attenzione quando si usa la **SafeInt** classe assieme i `?:` operatore ternario. Si consideri la seguente riga di codice.  
  
```cpp  
Int x = flag ? SafeInt<unsigned int>(y) : -1;  
```  
  
 Il compilatore lo converte al seguente:  
  
```cpp  
Int x = flag ? SafeInt<unsigned int>(y) : SafeInt<unsigned int>(-1);  
```  
  
 Se `flag` viene **false**, il compilatore genera un'eccezione anziché assegnare il valore -1 per `x`. Pertanto, per evitare questo comportamento, il codice corretto da usare è la riga seguente.  
  
```cpp  
Int x = flag ? (int) SafeInt<unsigned int>(y) : -1;  
```  
  
 `T` e `U` può essere assegnato un tipo Boolean, tipo di carattere o di tipo integer. L'intero tipi possono essere con o senza segno e qualsiasi dimensione, da 8 bit a 64 bit.  
  
> [!NOTE]
>  Anche se il **SafeInt** classe accetta qualsiasi tipo di numero intero, viene eseguita in modo più efficiente con tipi senza segno.  
  
 `E` è il meccanismo di gestione degli errori che **SafeInt** Usa. Vengono forniti due meccanismi di gestione degli errori con la libreria SafeInt. I criteri predefiniti `SafeIntErrorPolicy_SafeIntException`, che genera una [classe SafeIntException](../windows/safeintexception-class.md) eccezione quando si verifica un errore. L'altro criterio è `SafeIntErrorPolicy_InvalidParameter`, che arresta il programma se si verifica un errore.  
  
 Sono disponibili due opzioni per personalizzare i criteri di errore. La prima opzione consiste nell'impostare il parametro `E` quando si crea un' **SafeInt**. Usare questa opzione quando si desidera modificare il criterio di gestione per uno solo errori **SafeInt**. L'altra opzione consiste nel definire _SAFEINT_DEFAULT_ERROR_POLICY per essere la classe di gestione degli errori personalizzata prima di includere il **SafeInt** libreria. Usare questa opzione quando si desidera modificare i criteri per tutte le istanze di gestione degli errori di impostazione predefinita il **SafeInt** classe nel codice.  
  
> [!NOTE]
>  Una classe personalizzata che gestisce gli errori dalla Libreria SafeInt non deve restituire il controllo al codice che ha chiamato il gestore degli errori. Una volta chiamato il gestore degli errori, il risultato del **SafeInt** operazione non è attendibile.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** MSL:: Utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)