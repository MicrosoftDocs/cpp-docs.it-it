---
title: Classe ctype&lt;char&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ctype<char>
- locale/std::ctype<char>
dev_langs: C++
helpviewer_keywords: ctype<char> class
ms.assetid: ee30acb4-a743-405e-b3d4-13602092da84
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d7e1fdc3a37abec334cccfe5a62954210e6e4a30
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ctypeltchargt-class"></a>Classe ctype&lt;char&gt;
Classe che rappresenta una specializzazione esplicita della classe modello **ctype\<CharType**> per il tipo `char`, che descrive un oggetto che può essere usato come facet delle impostazioni locali per caratterizzare le varie proprietà di un carattere di tipo `char`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <>  
class ctype<char>  
: public ctype_base  
{  
public:  
    typedef char _Elem;  
    typedef _Elem char_type;  
    bool is(
    mask _Maskval,  
    _Elem _Ch) const;

 
    const _Elem* is(
    const _Elem* first,  
    const _Elem* last,  
    mask* dest) const;

 
    const _Elem* scan_is(
    mask _Maskval,  
    const _Elem* first,  
    const _Elem* last) const;

 
    const _Elem* scan_not(
    mask _Maskval,  
    const _Elem* first,  
    const _Elem* last) const;

 
    _Elem tolower(
    _Elem _Ch) const;

 
    const _Elem* tolower(
    _Elem* first,  
    const _Elem* last) const;

 
    _Elem toupper(
    _Elem _Ch) const;

 
    const _Elem* toupper(
    _Elem* first,  
    const _Elem* last) const;

 
    _Elem widen(
    char _Byte) const;

 
    const _Elem* widen(
    const char* first,  
    const char* last,  
    _Elem* dest) const;

 
    const _Elem* _Widen_s(
    const char* first,  
    const char* last,  
    _Elem* dest,  
    size_t dest_size) const;

 
    _Elem narrow(
    _Elem _Ch,  
    char _Dflt = '\0') const;

 
    const _Elem* narrow(
    const _Elem* first,  
    const _Elem* last,  
    char _Dflt,  
    char* dest) const;

 
    const _Elem* _Narrow_s(
    const _Elem* first,  
    const _Elem* last,  
    char _Dflt,  
    char* dest,  
    size_t dest_size) const;

 
    static locale::id& id;  
    explicit ctype(
    const mask* _Table = 0,  
    bool _Deletetable = false,  
    size_t _Refs = 0);

protected:  
    virtual ~ctype();
//other protected members  
};  
```  
  
## <a name="remarks"></a>Note  
 La specializzazione esplicita è diversa dalla classe di modello in vari modi:  
  
-   Un oggetto della classe ctype< `char`> archivia un puntatore al primo elemento di una tabella di maschera ctype, una matrice di elementi UCHAR_MAX + 1 di tipo **ctype_base::mask**. Archivia anche un oggetto booleano che indica se la matrice deve essere eliminata (tramite `operator delete[]`) quando l'oggetto di ctype\< **Elem**> viene eliminato.  
  
-   Il relativo costruttore pubblico unico consente di specificare **tab**, la tabella, maschera ctype e **del**, l'oggetto Boolean che è true se la matrice deve essere eliminata quando l'oggetto di ctype< `char`> viene eliminato definitivamente, nonché i riferimenti al parametro reference-count.  
  
-   La funzione membro protetto **table** restituisce la tabella della maschera ctype archiviata.  
  
-   L'oggetto membro statico **table_size** specifica il numero minimo di elementi in una tabella di maschera ctype.  
  
-   La funzione membro protetto statica **classic_table**( restituisce la tabella maschera ctype appropriata per le impostazioni locali "C".  
  
-   Non ci sono funzioni membro virtuale protetto [do_is](../standard-library/ctype-class.md#do_is), [do_scan_is](../standard-library/ctype-class.md#do_scan_is) o [do_scan_not](../standard-library/ctype-class.md#do_scan_not). Le funzioni membro pubblico corrispondenti eseguono direttamente le operazioni equivalenti.  
  
 Le funzioni membro [do_narrow](../standard-library/ctype-class.md#do_narrow) e [do_widen](../standard-library/ctype-class.md#do_widen) copiano elementi non modificati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [facet Class](http://msdn.microsoft.com/Library/dd4f12f5-cb1b-457f-af56-2fb204216ec1)   
 [ctype_base Class](../standard-library/ctype-base-class.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

