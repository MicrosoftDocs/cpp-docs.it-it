---
title: Classe sub_match | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- regex/std::sub_match
- regex/std::sub_match::matched
- regex/std::sub_match::compare
- regex/std::sub_match::length
- regex/std::sub_match::str
- regex/std::sub_match::difference_type
- regex/std::sub_match::iterator
- regex/std::sub_match::value_type
dev_langs: C++
helpviewer_keywords:
- std::sub_match [C++]
- std::sub_match [C++], matched
- std::sub_match [C++], compare
- std::sub_match [C++], length
- std::sub_match [C++], str
- std::sub_match [C++], difference_type
- std::sub_match [C++], iterator
- std::sub_match [C++], value_type
ms.assetid: 804e2b9e-d16a-4c4c-ac60-024e0b2dd0e8
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0d26e17fd496507f6985f7896eb01f7a79c900e1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="submatch-class"></a>Classe sub_match
Descrive una sottocorrispondenza.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class BidIt>  
class sub_match  
 : public std::pair<BidIt, BidIt> {  
public:  
    bool matched;  
    int compare(const sub_match& right) const;  
    int compare(const basic_string<value_type>& right) const;   
    int compare(const value_type *right) const;   
    difference_type length() const;  
    operator basic_string<value_type>() const;
    basic_string<value_type> str() const;
  
    // typedefs
    typedef typename iterator_traits<BidIt>::value_type value_type;  
    typedef typename iterator_traits<BidIt>::difference_type difference_type;  
    typedef BidIt iterator;  
 };  
```  
  
#### <a name="parameters"></a>Parametri  
 `BidIt`  
 Tipo di iteratore per le sottocorrispondenze.  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un oggetto che definisce una sequenza di caratteri corrispondente a un gruppo Capture in una chiamata a [regex_match](../standard-library/regex-functions.md#regex_match) o a [regex_search](../standard-library/regex-functions.md#regex_search). Oggetti di tipo [classe match_results](../standard-library/match-results-class.md) contengono una matrice di questi oggetti, una per ogni gruppo Capture nell'espressione regolare usata nella ricerca.  
  
 Se il gruppo Capture non è corrispondente, il membro di dati dell'oggetto `matched` contiene false e i due iteratori `first` e `second` (ereditati dalla base `std::pair`) sono uguali. Se il gruppo Capture è corrispondente, `matched` contiene true, l'iteratore `first` punta al primo carattere nella sequenza di destinazione corrispondente al gruppo Capture e l'iteratore `second` punti punta a una posizione dopo l'ultimo carattere nel database di destinazione che corrisponda al gruppo Capture. Si noti che per una corrispondenza di lunghezza zero il membro `matched` è true, i due iteratori saranno uguali ed entrambi punteranno alla posizione della corrispondenza.  
  
 Una corrispondenza zero si può verificare quando un gruppo Capture è costituito solamente da un'asserzione o da una ripetizione che consente zero ripetizioni. Ad esempio:  
  
 "^" corrisponde alla sequenza di destinazione "a"; l'oggetto `sub_match` corrispondente al gruppo Capture 0 contiene gli iteratori che entrambi puntano al primo carattere della sequenza.  
  
 "b(a*)b" corrisponde alla sequenza di destinazione "bb"; l'oggetto `sub_match` corrispondente al gruppo Capture 1 contiene gli iteratori che entrambi puntano al secondo carattere della sequenza.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<regex>  
  
 **Spazio dei nomi:** std  
  
##  <a name="compare"></a>  sub_match::compare  
 Confronta una sottocorrispondenza rispetto a una sequenza.  
  
```  
int compare(const sub_match& right) const;
int compare(const basic_string<value_type>& str) const;
int compare(const value_type *ptr) const;
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Sottocorrispondenza da confrontare.  
  
 `str`  
 Stringa da confrontare.  
  
 `ptr`  
 Sequenza con terminazione null da confrontare.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro confronta la sequenza corrispondente `[first, second)` con la sequenza corrispondente `[right.first, right.second)`. La seconda funzione membro confronta la sequenza corrispondente `[first, second)` con la sequenza di caratteri `[right.begin(), right.end())`. La terza funzione membro confronta la sequenza corrispondente `[first, second)` con la sequenza di caratteri `[right, right + std::char_traits<value_type>::length(right))`.  
  
 Ogni funzione restituisce:  
  
 Un valore negativo se il primo valore differente nella sequenza risulta inferiore rispetto all'elemento corrispondente nella sequenza di operandi (come determinato da `std::char_traits<value_type>::compare`) o se le due sequenze hanno un prefisso comune, ma la sequenza di destinazione è più lunga  
  
 Zero se le due sequenze risultano uguali elemento per elemento e hanno la stessa lunghezza  
  
 Un valore positivo in caso contrario  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_compare.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="difference_type"></a>  sub_match::difference_type  
 Tipo di differenza iteratore.  
  
```  
typedef typename iterator_traits<BidIt>::difference_type difference_type;  
```  
  
### <a name="remarks"></a>Note  
 typedef è sinonimo di `iterator_traits<BidIt>::difference_type`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_difference_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="iterator"></a>  sub_match::iterator  
 Tipo di iteratore.  
  
```  
typedef BidIt iterator;  
```  
  
### <a name="remarks"></a>Note  
 Typedef è un sinonimo dell'argomento di tipo modello `Bidit`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_iterator.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="length"></a>  sub_match::length  
 Restituisce la lunghezza di una sottocorrispondenza.  
  
```  
difference_type length() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza corrispondente oppure zero se non era presente alcuna sequenza corrispondente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_length.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="matched"></a>  sub_match::matched  
 Indica se la corrispondenza ha avuto esito positivo.  
  
```  
bool matched;  
```  
  
### <a name="remarks"></a>Note  
 Il membro contiene `true` solo se il gruppo Capture associato a `*this` fa parte della corrispondenza di espressione regolare.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_matched.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="op_basic_string_lt_value_type_gt"></a>  sub_match::operator basic_string&lt;value_type&gt;  
 Esegue il cast di una sottocorrispondenza a una stringa.  
  
```  
operator basic_string<value_type>() const;
```  
  
### <a name="remarks"></a>Note  
 L'operatore membro restituisce `str()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_operator_str.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="str"></a>  sub_match::str  
 Converte una sottocorrispondenza in una stringa.  
  
```  
basic_string<value_type> str() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `basic_string<value_type>(first, second)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_str.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
##  <a name="value_type"></a>  sub_match::value_type  
 Tipo di un elemento.  
  
```  
typedef typename iterator_traits<BidIt>::value_type value_type;  
```  
  
### <a name="remarks"></a>Note  
 typedef è sinonimo di `iterator_traits<BidIt>::value_type`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__sub_match_value_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex rx("c(a*)|(b)");   
    std::cmatch mr;   
  
    std::regex_search("xcaaay", mr, rx);   
  
    std::csub_match sub = mr[1];   
    std::cout << "matched == " << std::boolalpha   
        << sub.matched << std::endl;   
    std::cout << "length == " << sub.length() << std::endl;   
  
    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);   
    std::cout << "difference == " << dif << std::endl;   
  
    std::csub_match::iterator first = sub.first;   
    std::csub_match::iterator last = sub.second;   
    std::cout << "range == " << std::string(first, last)   
        << std::endl;   
    std::cout << "string == " << sub << std::endl;   
  
    std::csub_match::value_type *ptr = "aab";   
    std::cout << "compare(\"aab\") == "   
        << sub.compare(ptr) << std::endl;   
    std::cout << "compare(string) == "   
        << sub.compare(std::string("AAA")) << std::endl;   
    std::cout << "compare(sub) == "   
        << sub.compare(sub) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
matched == true  
length == 3  
difference == 3  
range == aaa  
string == aaa  
compare("aab") == -1  
compare(string) == 1  
compare(sub) == 0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<regex>](../standard-library/regex.md)   
 [sub_match](../standard-library/sub-match-class.md)
