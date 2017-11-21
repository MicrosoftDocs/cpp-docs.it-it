---
title: Classe SafeInt | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: SafeInt
dev_langs: C++
helpviewer_keywords: SafeInt class
ms.assetid: 27a8f087-2511-46f9-8d76-2aeb66ca272f
caps.latest.revision: "16"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: a031176d6636aedddbeac28c858c777c26625f5a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="safeint-class"></a>Classe SafeInt
Estende le primitive di integer per evitare l'overflow di integer e consente di confrontare i diversi tipi di valori integer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T, typename E = _SAFEINT_DEFAULT_ERROR_POLICY>  
class SafeInt;  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Modello|Descrizione|  
|--------------|-----------------|  
|T|Il tipo di valore integer o un parametro booleano che `SafeInt` sostituisce.|  
|E|Tipo di dati enumerato che definisce i criteri di gestione degli errori.|  
|U|Il tipo di valore integer o un parametro booleano per l'operando secondario.|  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] rhs|Un parametro di input che rappresenta il valore sul lato destro dell'operatore in diverse funzioni autonome.|  
|[in] i|Un parametro di input che rappresenta il valore sul lato destro dell'operatore in diverse funzioni autonome.|  
|[in] bits|Un parametro di input che rappresenta il valore sul lato destro dell'operatore in diverse funzioni autonome.|  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[SafeInt::SafeInt](../windows/safeint-safeint.md)|Costruttore predefinito.|  
  
### <a name="assignment-operators"></a>Operatori di assegnazione  
  
|Nome|Sintassi|  
|----------|------------|  
|=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator= (const U& rhs)`|  
|=|`SafeInt<T,E>& operator= (const T& rhs) throw()`|  
|=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator= (const SafeInt<U, E>& rhs)`|  
|=|`SafeInt<T,E>& operator= (const SafeInt<T,E>& rhs) throw()`|  
  
### <a name="casting-operators"></a>Operatori di cast  
  
|Nome|Sintassi|  
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
  
|Nome|Sintassi|  
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
  
|Nome|Sintassi|  
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
  
|Nome|Sintassi|  
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
 La `SafeInt` classe protegge dall'overflow di integer nelle operazioni matematiche. Si consideri ad esempio l'aggiunta di due valori integer a 8 bit: uno con un valore pari a 200 e il secondo con un valore pari a 100. L'operazione matematica corretto sarebbe 200 + 100 = 300. Tuttavia, a causa il limite di integer a 8 bit, il bit superiore andranno perso e il compilatore restituisce 44 (300-2<sup>8</sup>) come risultato. Qualsiasi operazione che dipende da questa equazione matematica genera un comportamento imprevisto.  
  
 La `SafeInt` classe verifica se si verifica un overflow aritmetico o se il codice tenta di divisione per zero. In entrambi i casi, la classe chiama il gestore degli errori per informare il programma di potenziale problema.  
  
 Questa classe consente inoltre di confrontare due tipi diversi di numeri interi, purché siano `SafeInt` oggetti. In genere, quando si esegue un confronto, è prima necessario convertire i numeri per essere dello stesso tipo. Il cast di un numero in un altro tipo spesso richiede controlli per assicurarsi che vi sia alcuna perdita di dati.  
  
 Nella tabella di operatori in questo argomento sono elencati gli operatori matematici e di confronto supportati dalla `SafeInt` classe. Gli operatori matematici più restituiscono un `SafeInt` oggetto di tipo `T`.  
  
 Le operazioni di confronto tra un `SafeInt` e un tipo integrale può essere eseguito in entrambe le direzioni. Ad esempio, entrambi `SafeInt<int>(x) < y` e `y > SafeInt<int>(x)` siano validi e verrà restituito lo stesso risultato.  
  
 Molti operatori binari non supportano l'utilizzo di due diversi `SafeInt` tipi. Un esempio di questo è il `&` operatore. `SafeInt<T, E> & int`è supportato, ma `SafeInt<T, E> & SafeInt<U, E>` non. Nell'esempio di quest'ultimo, il compilatore non riconosce il tipo di parametro da restituire. Per risolvere questo problema è di eseguire il cast al tipo di base secondo parametro. Utilizzando gli stessi parametri, questa operazione può essere eseguita con `SafeInt<T, E> & (U)SafeInt<U, E>`.  
  
> [!NOTE]
>  Per qualsiasi operazione bit per bit, i due diversi parametri devono essere la stessa dimensione. Se le dimensioni sono differenti, il compilatore genererà un [ASSERT](../mfc/reference/diagnostic-services.md#assert) eccezione. I risultati di questa operazione non è possibile garantire l'accuratezza. Per risolvere questo problema, eseguire il cast di parametro più piccolo fino a quando è la stessa dimensione del parametro di dimensioni maggiori.  
  
 Per gli operatori shift, lo spostamento di più bit quelli esistenti per il tipo di modello verrà generata un'eccezione di ASSERT. Ciò non avrà alcun effetto in modalità di rilascio. Combinazione di due tipi di parametri SafeInt è possibile che gli operatori shift perché il tipo restituito è identico al tipo originale. Il numero sul lato destro dell'operatore indica solo il numero di bit da spostare.  
  
 Quando si esegue un confronto logico con un oggetto SafeInt, il confronto è rigorosamente aritmetico. Si consideri, ad esempio, queste espressioni:  
  
-   `SafeInt<uint>((uint)~0) > -1`  
  
-   `((uint)~0) > -1`  
  
 La prima istruzione si risolve in `true`, ma la seconda istruzione viene risolta in `false`. La negazione bit per bit 0 è 0xFFFFFFFF. Nella seconda istruzione, l'operatore di confronto predefinito Confronta 0xFFFFFFFF a 0xFFFFFFFF e lo considera uguali. L'operatore di confronto per il `SafeInt` classe consapevole del fatto che il secondo parametro è negativo, mentre il primo parametro è senza segno. Pertanto, anche se la rappresentazione di bit è identica, il `SafeInt` operatore logico è consapevole del fatto che l'intero senza segno è maggiore di -1.  
  
 Prestare attenzione quando si utilizza il `SafeInt` classe con il `?:` operatore ternario disponibile. Si consideri la seguente riga di codice.  
  
```  
Int x = flag ? SafeInt<unsigned int>(y) : -1;  
```  
  
 Il compilatore converte al seguente:  
  
```  
Int x = flag ? SafeInt<unsigned int>(y) : SafeInt<unsigned int>(-1);  
```  
  
 Se `flag` è `false`, il compilatore genera un'eccezione invece di assegnare il valore di -1 per `x`. Pertanto, per evitare questo comportamento, il codice corretto da utilizzare è la riga seguente.  
  
```  
Int x = flag ? (int) SafeInt<unsigned int>(y) : -1;  
```  
  
 `T`e `U` può essere assegnato un tipo booleano, un tipo di carattere o un tipo integer. Il valore integer tipi possono essere firmati o non firmati e qualsiasi dimensione da 8 bit a 64 bit.  
  
> [!NOTE]
>  Sebbene la `SafeInt` classe accetta qualsiasi tipo integer, esegue in modo più efficiente con tipi senza segno.  
  
 `E`è il meccanismo di gestione degli errori che `SafeInt` utilizza. Con la libreria SafeInt vengono forniti due meccanismi di gestione degli errori. Il criterio predefinito è `SafeIntErrorPolicy_SafeIntException`, che genera un [classe SafeIntException](../windows/safeintexception-class.md) eccezione quando si verifica un errore. L'altro criterio è `SafeIntErrorPolicy_InvalidParameter`, che arresta il programma se si verifica un errore.  
  
 Sono disponibili due opzioni per personalizzare i criteri di errore. La prima opzione consiste nell'impostare il parametro `E` quando si crea un `SafeInt`. Utilizzare questa opzione quando si desidera modificare la gestione degli errori dei criteri per uno solo `SafeInt`. L'altra opzione consiste nel definire `_SAFEINT_DEFAULT_ERROR_POLICY` sia la classe di gestione degli errori personalizzata prima di includere il `SafeInt` libreria. Utilizzare questa opzione quando si desidera modificare il valore predefinito di errori la gestione di criteri per tutte le istanze del `SafeInt` classe nel codice.  
  
> [!NOTE]
>  Una classe personalizzata che gestisce gli errori dalla Libreria SafeInt deve restituire il controllo al codice che ha chiamato il gestore degli errori. Dopo che viene chiamato il gestore degli errori, il risultato di `SafeInt` operazione non può essere considerato attendibile.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** msl::utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)