---
title: "Classe SafeInt | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "SafeInt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SafeInt (classe)"
ms.assetid: 27a8f087-2511-46f9-8d76-2aeb66ca272f
caps.latest.revision: 16
caps.handback.revision: 16
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Classe SafeInt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Estende le primitive integer per impedire l'overflow di integer e consente di confrontare diversi tipi di integer.  
  
## Sintassi  
  
```  
template<typename T, typename E = _SAFEINT_DEFAULT_ERROR_POLICY>  
class SafeInt;  
```  
  
#### Parametri  
  
|Modello|Descrizione|  
|-------------|-----------------|  
|T|Il tipo di parametro integer o booleano che viene sostituito da `SafeInt`.|  
|E|Un tipo di dati enumerato che definisce i criteri di gestione degli errori.|  
|U|Il tipo di parametro integer o booleano per l'operando secondario.|  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] rhs|Un parametro di input che rappresenta il valore a destra dell'operatore in diverse funzioni autonome.|  
|\[in\] i|Un parametro di input che rappresenta il valore a destra dell'operatore in diverse funzioni autonome.|  
|\[in\] bits|Un parametro di input che rappresenta il valore a destra dell'operatore in diverse funzioni autonome.|  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[SafeInt::SafeInt](../windows/safeint-safeint.md)|Costruttore predefinito.|  
  
### Operatori di assegnazione  
  
|Nome|Sintassi|  
|----------|--------------|  
|\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator= (const U& rhs)`|  
|\=|`SafeInt<T,E>& operator= (const T& rhs) throw()`|  
|\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator= (const SafeInt<U, E>& rhs)`|  
|\=|`SafeInt<T,E>& operator= (const SafeInt<T,E>& rhs) throw()`|  
  
### Operatori di cast  
  
|Nome|Sintassi|  
|----------|--------------|  
|bool|`operator bool() throw()`|  
|char|`operator char() const`|  
|signed char|`operator signed char() const`|  
|unsigned char|`operator unsigned char() const`|  
|\_\_int16|`operator __int16() const`|  
|unsigned \_\_int16|`operator unsigned __int16() const`|  
|\_\_int32|`operator __int32() const`|  
|unsigned \_\_int32|`operator unsigned __int32() const`|  
|long|`operator long() const`|  
|unsigned long|`operator unsigned long() const`|  
|\_\_int64|`operator __int64() const`|  
|unsigned \_\_int64|`operator unsigned __int64() const`|  
|wchar\_t|`operator wchar_t() const`|  
  
### Operatori di confronto  
  
|Nome|Sintassi|  
|----------|--------------|  
|\<|`template<typename U>`<br /><br /> `bool operator< (U rhs) const throw()`|  
|\<|`bool operator< (SafeInt<T,E> rhs) const throw()`|  
|\>\=|`template<typename U>`<br /><br /> `bool operator>= (U rhs) const throw()`|  
|\>\=|`Bool operator>= (SafeInt<T,E> rhs) const throw()`|  
|\>|`template<typename U>`<br /><br /> `bool operator> (U rhs) const throw()`|  
|\>|`Bool operator> (SafeInt<T,E> rhs) const throw()`|  
|\<\=|`template<typename U>`<br /><br /> `bool operator<= (U rhs) const throw()`|  
|\<\=|`bool operator<= (SafeInt<T,E> rhs) const throw()`|  
|\=\=|`template<typename U>`<br /><br /> `bool operator== (U rhs) const throw()`|  
|\=\=|`bool operator== (bool rhs) const throw()`|  
|\=\=|`bool operator== (SafeInt<T,E> rhs) const throw()`|  
|\!\=|`template<typename U>`<br /><br /> `bool operator!= (U rhs) const throw()`|  
|\!\=|`bool operator!= (bool b) const throw()`|  
|\!\=|`bool operator!= (SafeInt<T,E> rhs) const throw()`|  
  
### Operatori aritmetici  
  
|Nome|Sintassi|  
|----------|--------------|  
|\+|`const SafeInt<T,E>& operator+ () const throw()`|  
|\-|`SafeInt<T,E> operator- () const`|  
|\+\+|`SafeInt<T,E>& operator++ ()`|  
|\-\-|`SafeInt<T,E>& operator-- ()`|  
|%|`template<typename U>`<br /><br /> `SafeInt<T,E> operator% (U rhs) const`|  
|%|`SafeInt<T,E> operator% (SafeInt<T,E> rhs) const`|  
|%\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (U rhs)`|  
|%\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator%= (SafeInt<U, E> rhs)`|  
|\*|`template<typename U>`<br /><br /> `SafeInt<T,E> operator* (U rhs) const`|  
|\*|`SafeInt<T,E> operator* (SafeInt<T,E> rhs) const`|  
|\*\=|`SafeInt<T,E>& operator*= (SafeInt<T,E> rhs)`|  
|\*\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (U rhs)`|  
|\*\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator*= (SafeInt<U, E> rhs)`|  
|\/|`template<typename U>`<br /><br /> `SafeInt<T,E> operator/ (U rhs) const`|  
|\/|`SafeInt<T,E> operator/ (SafeInt<T,E> rhs ) const`|  
|\/\=|`SafeInt<T,E>& operator/= (SafeInt<T,E> i)`|  
|\/\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (U i)`|  
|\/\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator/= (SafeInt<U, E> i)`|  
|\+|`SafeInt<T,E> operator+ (SafeInt<T,E> rhs) const`|  
|\+|`template<typename U>`<br /><br /> `SafeInt<T,E> operator+ (U rhs) const`|  
|\+\=|`SafeInt<T,E>& operator+= (SafeInt<T,E> rhs)`|  
|\+\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (U rhs)`|  
|\+\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator+= (SafeInt<U, E> rhs)`|  
|\-|`template<typename U>`<br /><br /> `SafeInt<T,E> operator- (U rhs) const`|  
|\-|`SafeInt<T,E> operator- (SafeInt<T,E> rhs) const`|  
|\-\=|`SafeInt<T,E>& operator-= (SafeInt<T,E> rhs)`|  
|\-\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (U rhs)`|  
|\-\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator-= (SafeInt<U, E> rhs)`|  
  
### Operatori logici  
  
|Nome|Sintassi|  
|----------|--------------|  
|\!|`bool operator !() const throw()`|  
|~|`SafeInt<T,E> operator~ () const throw()`|  
|\<\<|`template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (U bits) const throw()`|  
|\<\<|`template<typename U>`<br /><br /> `SafeInt<T,E> operator<< (SafeInt<U, E> bits) const throw()`|  
|\<\<\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (U bits) throw()`|  
|\<\<\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator<<= (SafeInt<U, E> bits) throw()`|  
|\>\>|`template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (U bits) const throw()`|  
|\>\>|`template<typename U>`<br /><br /> `SafeInt<T,E> operator>> (SafeInt<U, E> bits) const throw()`|  
|\>\>\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (U bits) throw()`|  
|\>\>\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator>>= (SafeInt<U, E> bits) throw()`|  
|&|`SafeInt<T,E> operator& (SafeInt<T,E> rhs) const throw()`|  
|&|`template<typename U>`<br /><br /> `SafeInt<T,E> operator& (U rhs) const throw()`|  
|&\=|`SafeInt<T,E>& operator&= (SafeInt<T,E> rhs) throw()`|  
|&\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (U rhs) throw()`|  
|&\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&= (SafeInt<U, E> rhs) throw()`|  
|^|`SafeInt<T,E> operator^ (SafeInt<T,E> rhs) const throw()`|  
|^|`template<typename U>`<br /><br /> `SafeInt<T,E> operator^ (U rhs) const throw()`|  
|^\=|`SafeInt<T,E>& operator^= (SafeInt<T,E> rhs) throw()`|  
|^\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (U rhs) throw()`|  
|^\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator^= (SafeInt<U, E> rhs) throw()`|  
|&#124;|`SafeInt<T,E> operator&#124; (SafeInt<T,E> rhs) const throw()`|  
|&#124;|`template<typename U>`<br /><br /> `SafeInt<T,E> operator&#124; (U rhs) const throw()`|  
|&#124;\=|`SafeInt<T,E>& operator&#124;= (SafeInt<T,E> rhs) throw()`|  
|&#124;\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (U rhs) throw()`|  
|&#124;\=|`template<typename U>`<br /><br /> `SafeInt<T,E>& operator&#124;= (SafeInt<U, E> rhs) throw()`|  
  
## Note  
 La classe `SafeInt` protegge da overflow di integer nelle operazioni matematiche.  Ad esempio, si consideri l'addizione di due integer a 8 bit: uno con un valore di 200 e il secondo con un valore di 100.  L'operazione matematica corretta è 200 \+ 100 \= 300.  Tuttavia, a causa del limite degli integer a 8 bit, il primo bit verrà perso e il compilatore restituirà 44 \(300 \- 2<sup>8</sup>\) come risultato.  Qualsiasi operazione che dipende da questa equazione matematica genererà un comportamento imprevisto.  
  
 La classe `SafeInt` controlla se si verifica un overflow aritmetico o se il codice tenta di dividere per zero.  In entrambi i casi, la classe chiama il gestore degli errori per avvisare il programma del problema potenziale.  
  
 Questa classe consente di confrontare due tipi diversi di integer, posto che siano oggetti `SafeInt`.  In genere, quando si esegue un confronto, è necessario innanzitutto convertire numeri perché siano dello stesso tipo.  Eseguire il cast di un numero in un tipo diverso richiede spesso dei controlli per garantire che non vi sia una perdita di dati.  
  
 La tabella degli operatori in questo argomento elenca gli operatori matematici e di confronto supportati dalla classe `SafeInt`.  La maggior parte degli operatori matematici restituiscono un oggetto `SafeInt` di tipo `T`.  
  
 Le operazioni di confronto tra un `SafeInt` e un tipo integrale possono essere eseguite in entrambe le direzioni.  Ad esempio, sia `SafeInt<int>(x) < y` che `y > SafeInt<int>(x)` sono validi e restituiscono lo stesso risultato.  
  
 Molti operatori binari non supportano l'utilizzo di due tipi diversi di `SafeInt`.  Un esempio è l'operatore di `&`.  `SafeInt<T, E> & int` è supportato, invece `SafeInt<T, E> & SafeInt<U, E>` no.  Nell'esempio precedente, il compilatore non sa quale tipo di parametro restituire.  Una soluzione a questo problema consiste nell'eseguire il cast del secondo parametro al tipo base.  Utilizzando gli stessi parametri, questa operazione può essere eseguita con `SafeInt<T, E> & (U)SafeInt<U, E>`.  
  
> [!NOTE]
>  Per tutte le operazioni bit a bit, i due parametri diversi devono avere le stesse dimensioni.  Se le dimensioni sono diverse, il compilatore genererà un'eccezione [ASSERT](../Topic/ASSERT%20\(MFC\).md).  Non è possibile garantire che i risultati di questa operazione siano accurati.  Per risolvere questo problema, eseguire il cast del parametro più piccolo finché è della stessa dimensione del parametro più grande.  
  
 Per gli operatori di spostamento, scorrere più bit di quelli esistenti per il tipo di modello genera un'eccezione di ASSERT.  Ciò non avrà alcun effetto in modalità di rilascio.  Combinare due tipi di parametri SafeInt è possibile per gli operatori di spostamento poiché il tipo restituito corrisponde al tipo originale.  Il numero sul lato destro dell'operatore indica solo il numero di bit da scorrere.  
  
 Quando si esegue un confronto logico con un oggetto SafeInt, il confronto è strettamente aritmetico.  Ad esempio, considerare le seguenti espressioni:  
  
-   `SafeInt<uint>((uint)~0) > -1`  
  
-   `((uint)~0) > -1`  
  
 La prima istruzione avrà valore `true`, ma la seconda istruzione avrà valore `false`.  La negazione bit a bit di 0 è 0xFFFFFFFF.  Nella seconda istruzione, l'operatore di confronto predefinito confronta 0xFFFFFFFF con 0xFFFFFFFF e li considera come uguali.  L'operatore di confronto per la classe `SafeInt` si accorge che il secondo parametro è negativo mentre il primo parametro è senza segno.  Pertanto, sebbene la rappresentazione in bit sia identica, l'operatore logico di `SafeInt` si accorge che l'intero senza segno è maggiore di \-1.  
  
 Prestare attenzione quando si utilizza la classe `SafeInt` insieme all'operatore ternario `?:`.  Si consideri la seguente riga di codice .  
  
```  
Int x = flag ? SafeInt<unsigned int>(y) : -1;  
```  
  
 Il compilatore la converte nella seguente:  
  
```  
Int x = flag ? SafeInt<unsigned int>(y) : SafeInt<unsigned int>(-1);  
```  
  
 Se `flag` è `false`, il compilatore genera un'eccezione anziché assegnare il valore \-1 a `x`.  Di conseguenza, per evitare questo comportamento, il codice corretto da utilizzare è la seguente riga.  
  
```  
Int x = flag ? (int) SafeInt<unsigned int>(y) : -1;  
```  
  
 `T` e `U` possono essere assegnati a un tipo boolean, a un tipo character, o a un tipo integer.  I tipi integer possono essere con o senza segno e possono avere qualsiasi dimensione, da 8 bit a 64 bit.  
  
> [!NOTE]
>  Sebbene la classe `SafeInt` accetti qualsiasi tipo di integer, risulta essere più efficiente con i tipi senza segno.  
  
 `E` è il meccanismo di gestione degli errori utilizzato da `SafeInt`.  Due meccanismi di gestione degli errori vengono forniti dalla libreria SafeInt.  Il criterio predefinito è `SafeIntErrorPolicy_SafeIntException`, che genera un'eccezione [Classe SafeIntException](../windows/safeintexception-class.md) quando si verifica un errore.  L'altro criterio è `SafeIntErrorPolicy_InvalidParameter`, che interrompe il programma se si verifica un errore.  
  
 Sono disponibili due opzioni per personalizzare i criteri di errore.  La prima opzione consiste nell'impostare il parametro `E` quando si crea un `SafeInt`.  Utilizzare questa opzione quando si desidera modificare i criteri di gestione degli errori per un solo `SafeInt`.  L'altra opzione consiste nel definire `_SAFEINT_DEFAULT_ERROR_POLICY` come classe personalizzata di gestione degli errori prima di importare la libreria `SafeInt`.  Utilizzare questa opzione quando si desidera modificare i criteri predefiniti di gestione degli errori per tutte le istanze della classe `SafeInt` nel codice.  
  
> [!NOTE]
>  Una classe personalizzata che gestisce gli errori dalla libreria SafeInt non deve restituire il controllo al codice che ha chiamato il gestore degli errori.  Dopo che il gestore errori viene chiamato, il risultato dell'operazione `SafeInt` non può essere ritenuto attendibile.  
  
## Requisiti  
 **Intestazione:** safeint.h  
  
 **Spazio dei nomi:** msl::utilities  
  
## Vedere anche  
 [Miscellaneous Support Libraries Classes](http://msdn.microsoft.com/it-it/406fd46e-d53f-4096-ab40-36aa754c7a5c)   
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeIntException](../windows/safeintexception-class.md)