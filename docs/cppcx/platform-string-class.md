---
title: 'Classe platform:: String | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
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
dev_langs:
- C++
helpviewer_keywords:
- Platform::String
ms.assetid: 72dd04a4-a694-40d3-b899-eaa0b503eab8
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3c665b6767ea7a7a7d97d232f5253f8e182e6b0a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformstring-class"></a>Classe Platform::String
Rappresenta una raccolta sequenziale di caratteri Unicode, tipicamente utilizzata per rappresentare del testo. Per ulteriori informazioni ed esempi, vedere [stringhe](../cppcx/strings-c-cx.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
public ref class String sealed : Object,  
    IDisposable,  
    IEquatable,  
    IPrintable  
```  
  
## <a name="iterators"></a>Iterators  
 Per enumerare i caratteri in un oggetto String, è possibile utilizzare due funzioni di iteratore, che non sono membri della classe String, con la funzione del modello `std::for_each` .  
  
|Member|Descrizione|  
|------------|-----------------|  
|`const char16* begin(String^ s)`|Restituisce un puntatore che punta all'inizio dell'oggetto String specificato.|  
|`const char16* end(String^ s)`|Restituisce un puntatore successivo alla fine dell'oggetto String specificato.|  
  
### <a name="members"></a>Membri  
 La classe String eredita da Object e dalle interfacce IDisposable, IEquatable e IPrintable.  
  
 La classe String include inoltre i seguenti tipi di membri.  
  
 **Costruttori**  
  
|Member|Descrizione|  
|------------|-----------------|  
|[String::String](#ctor)|Inizializza una nuova istanza della classe String.|  
  
 **Metodi**  
  
 La classe String eredita i metodi Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose() e ToString() da [Platform::Object Class](../cppcx/platform-object-class.md). La classe String utilizza anche i metodi seguenti.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[String::Begin](#begin)|Restituisce un puntatore che punta all'inizio della stringa corrente.|  
|[String::CompareOrdinal](#compareordinal)|Confronta due oggetti `String` valutando i valori numerici dei caratteri corrispondenti nei due valori stringa rappresentati dagli oggetti.|  
|[String::Concat](#concat)|Concatena i valori di due oggetti String specificati.|  
|[String::Data](#data)|Restituisce un puntatore che punta all'inizio della stringa corrente.|  
|[String::Dispose](#dispose)|Libera o rilascia delle risorse.|  
|[String::End](#end)|Restituisce un puntatore successivo alla fine della stringa corrente.|  
|[String:: Equals](#equals)|Indica se l'oggetto specificato è uguale all'oggetto corrente.|  
|[String::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|  
|[String::IsEmpty](#isempty)|Indica se l'oggetto String corrente è vuoto.|  
|[String::IsFastPass](#isfastpass)|Indica se l'oggetto String corrente è coinvolto in un'operazione di *passaggio rapido* . In questo tipo di operazione il conteggio dei riferimenti viene sospeso.|  
|[String:: Length](#length)|Recupera la lunghezza dell'oggetto String corrente.|  
|[String::ToString](#tostring)|Restituisce un oggetto String il cui valore è uguale a quello dell'oggetto String corrente.|  
  
 **Operatori**  
  
 La classe String include gli operatori seguenti.  
  
|Member|Descrizione|  
|------------|-----------------|  
|[String:: operator = = (operatore)](#operator-equality)|Indica se due oggetti String specificati hanno lo stesso valore.|  
|[operatore+ Operatore](#operator-plus)|Concatena due oggetti stringa in un nuovo oggetto stringa.|  
|[String:: operator > (operatore)](#operator-greater-than)|Indica se il valore di un oggetto String è maggiore del valore di un secondo oggetto String.|  
|[String:: operator > = (operatore)](#operator-greater-than-or-equals)|Indica se il valore di un oggetto String è maggiore o uguale al valore di un secondo oggetto String.|  
|[String:: operator! = (operatore)](#operator-inequality)|Indica se i valori di due oggetti String specificati sono differenti.|  
|[String:: operator < (operatore)](#operator-less-than)|Indica se il valore di un oggetto String è minore del valore di un secondo oggetto String.|  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione** vccorlib.h (inclusa per impostazione predefinita)  

 
## <a name="begin"></a>  Metodo String:: begin
Restituisce un puntatore che punta all'inizio della stringa corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
char16* Begin()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'inizio della stringa corrente.  
  
## <a name="compareordinal"></a>  Metodo String:: CompareOrdinal
Confronta due oggetti `String` valutando i valori numerici dei caratteri corrispondenti nei due valori stringa rappresentati dagli oggetti.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
int CompareOrdinal(  
           String^ str1,   
           String^ str2)  
  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String.  
  
 `str2`  
 Secondo oggetto String.  
  
### <a name="return-value"></a>Valore restituito  
 Intero che indica la relazione lessicale tra i due termini di confronto. Nella tabella seguente sono elencati i valori restituiti possibili.  
  
|Valore|Condizione|  
|-----------|---------------|  
|-1|`str1` è minore di `str2`.|  
|0|`str1` è uguale `str2`.|  
|1|`str1` è maggiore di `str2`.|  
  


## <a name="concat"></a>  Metodo String:: concat
Concatena i valori di due oggetti String specificati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
String^ Concat( String^ str1, String^ str2)  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String o `null`.  
  
 `str2`  
 Secondo oggetto String o `null`.  
  
### <a name="return-value"></a>Valore restituito  
 Nuovo oggetto String^ il cui valore è dato dalla concatenazione dei valori di `str1` e `str2`.  
  
 Se `str1` è `null` e `str2` non lo è, `str1` viene restituito. Se `str2` è `null` e `str1` non lo è, `str2` viene restituito. Se `str1` e `str2` sono entrambi `null`, viene restituita la stringa vuota (L"").  
  


## <a name="data"></a>  Metodo String:: data
Restituisce un puntatore all'inizio del buffer di dati dell'oggetto come matrice di tipo C di elementi `char16` (`wchar_t`).  
  
### <a name="syntax"></a>Sintassi  
  
```  
const char16* Data()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'inizio di un `const char16` matrice di caratteri Unicode (`char16` è un typedef per `wchar_t`).  
  
### <a name="remarks"></a>Note  
 Puoi usare questo metodo per la conversione da `Platform::String^` a `wchar_t*`. Quando l'oggetto `String` esce dall'ambito, non viene più garantito che il puntatore a dati sia valido. Per archiviare i dati oltre la durata dell'originale `String` oggetto, usare [wcscpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) per copiare la matrice nella memoria che hai allocato manualmente.  
  


## <a name="dispose"></a>  Metodo String:: Dispose
Libera o rilascia delle risorse.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
virtual override void Dispose()  
```  

## <a name="end"></a>  Metodo String:: end
Restituisce un puntatore successivo alla fine della stringa corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
char16* End()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore successivo alla fine della stringa corrente.  
  
### <a name="remarks"></a>Note  
 End () restituisce Begin () + Length.  
  


## <a name="equals"></a>  Metodo String:: Equals
Indica se la stringa specificata ha lo stesso valore dell'oggetto corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool String::Equals(Object^ str);  
  
bool String::Equals(String^ str);  
  
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 Oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `str` è uguale all'oggetto corrente; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo equivale al [String:: CompareOrdinal](#compareordinal). Nel primo overload, si prevede che il parametro `str` possa essere sottoposto a cast a un oggetto String^.  
  


## <a name="gethashcode"></a>  String::GetHashCode Method
Restituisce il codice hash per l'istanza.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
virtual override int GetHashCode()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Codice hash per l'istanza.  
  


## <a name="isempty"></a>  Metodo String:: IsEmpty
Indica se l'oggetto String corrente è vuoto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
bool IsEmpty()  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto String corrente è `null` o la stringa vuota (L""); in caso contrario, `false`.  
  


## <a name="isfastpass"></a>  Metodo String:: isfastpass
Indica se l'oggetto String corrente è coinvolto in un'operazione di *passaggio rapido* . In questo tipo di operazione il conteggio dei riferimenti viene sospeso.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
bool IsFastPass();  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto String corrente è passato rapidamente; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 In una chiamata a una funzione in cui un oggetto con conteggio dei riferimenti è un parametro e la funzione chiamata legge semplicemente l'oggetto, il compilatore può sospendere il conteggio dei riferimenti in modo sicuro e migliorare le prestazioni di chiamata. Non vi è alcuna operazione utile che il codice possa eseguire tramite questa proprietà. Il sistema gestisce tutti i dettagli.  
  


## <a name="length"></a>  Metodo String:: Length
Recupera il numero di caratteri nell'oggetto in formato stringa corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
unsigned int Length()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di caratteri nell'oggetto in formato stringa corrente.  
  
### <a name="remarks"></a>Note  
 La lunghezza di una stringa senza caratteri è zero. La lunghezza della stringa seguente è 5:  
  
```    
String^ str = "Hello";  
int len = str->Length(); //len = 5  
```  
  
 Matrice di caratteri restituita dal [String:: data](#data) è un carattere aggiuntivo, ovvero il carattere di terminazione NULL o '\0'. La lunghezza di questo carattere è inoltre di due byte.  
  


## <a name="operator-plus"></a>  String::operator+ Operator
Concatena due [stringa](../cppcx/platform-string-class.md) oggetti in un nuovo [stringa](../cppcx/platform-string-class.md) oggetto.
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
bool String::operator+( String^ str1, String^ str2)  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto `String`.  
  
 `str2`  
 Secondo oggetto `String`, il cui contenuto verrà aggiunto a `str1`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `str1` è uguale a `str2`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo operatore crea un oggetto `String^` contenente i dati dei due operandi. Puoi usarlo per praticità quando non è fondamentale ottenere prestazioni estreme. Alcune chiamate a "`+`" in una funzione non saranno probabilmente rilevanti, ma se modifichi oggetti di grandi dimensioni o dati di testo in un ciclo rigido, usa tipi e meccanismi C++ standard.  
  
##  <a name="operator-equality">String:: operator = = (operatore)</a>
Indica se due oggetti String specificati hanno lo stesso valore di testo.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
bool String::operator==( String^ str1, String^ str2)  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String da confrontare.  
  
 `str2`  
 Secondo oggetto String da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il contenuto di `str1` è uguale a `str2`. In caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo operatore equivale a [String:: CompareOrdinal](#compareordinal).  
  


##  <a name="operator-greater-than"></a>  String::operator&gt; 
Indica se il valore di un oggetto String è maggiore del valore di un secondo oggetto String.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
bool String::operator>( String^ str1, String^ str2)  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String.  
  
 `str2`  
 Secondo oggetto String.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il valore di `str1` è maggiore del valore di `str2`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo operatore equivale a chiamare in modo esplicito [String:: CompareOrdinal](#compareordinal) e ottenere un risultato maggiore di zero.  
  


## <a name="operator-greater-than-or-equals"></a> String::operator&gt;= 
Indica se il valore di un oggetto String è maggiore o uguale al valore di un secondo oggetto String.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
bool String::operator>=( String^ str1, String^ str2) 
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String.  
  
 `str2`  
 Secondo oggetto String.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il valore di `str1` è maggiore o uguale al valore di `str2`; in caso contrario, `false`.  
  


## <a name="operator-inequality"></a> String::operator!= 
Indica se i valori di due oggetti String specificati sono differenti.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
bool String::operator!=( String^ str1, String^ str2)  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String da confrontare.  
  
 `str2`  
 Secondo oggetto String da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `str1` non è uguale a `str2`; in caso contrario, `false`.   


## <a name="operator-less-than"></a> String:: operator&lt; 
Indica se il valore di un oggetto String è minore del valore di un secondo oggetto String.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
bool String::operator<( String^ str1, String^ str2)  
```  
  
### <a name="parameters"></a>Parametri  
 `str1`  
 Primo oggetto String.  
  
 `str2`  
 Secondo oggetto String.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il valore di `str1` è minore del valore di `str2`; in caso contrario, `false`.  
  
## <a name="ctor"></a> Costruttore String:: String
Inizializza una nuova istanza della classe String con una copia dei dati della stringa di input.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
String();    
String(char16* s)  
String(char16* s, unsigned int n)  
```  
  
### <a name="parameters"></a>Parametri  
 `s`  
 Serie di caratteri "wide" che inizializzano la stringa char16  
  
 `n`  
 Numero che specifica la lunghezza della stringa.  
  
### <a name="remarks"></a>Note  
 Se le prestazioni sono essenziali e controlli la durata della stringa di origine, è possibile utilizzare [platform:: stringreference](../cppcx/platform-stringreference-class.md) invece di String.  
### <a name="example"></a>Esempio  
  
```cpp  
String^ s = L"Hello!";  
```  
  
## <a name="tostring"></a> String::ToString
Restituisce un oggetto String il cui valore è uguale a quello dell'oggetto String corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
String^ String::ToString()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto String il cui valore è uguale a quello dell'oggetto String corrente.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)