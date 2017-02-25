---
title: "CType &lt; char &gt; (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ctype<char>"
  - "locale/std::ctype<char>"
  - "std::ctype<char>"
  - "std.ctype<char>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classe CType < char >"
ms.assetid: ee30acb4-a743-405e-b3d4-13602092da84
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# CType &lt; char &gt; (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe è una specializzazione esplicita della classe modello **ctype \< CharType**> digitare `char`, che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per caratterizzare le varie proprietà di un carattere di tipo `char`.  
  
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
 La specializzazione esplicita è diversa dalla classe di modello in diversi modi:  
  
-   Un oggetto della classe ctype < `char`> Archivia un puntatore al primo elemento di una tabella di maschera ctype, una matrice di UCHAR_MAX + 1 elementi di tipo **ctype_base::mask**. Archivia inoltre un oggetto booleano che indica se la matrice deve essere eliminata (utilizzando `operator delete[]`) quando la funzione ctype \< **Elem**> oggetto viene eliminato.  
  
-   Il relativo costruttore pubblico unico consente di specificare **scheda**, la tabella, maschera ctype e **CANC**, l'oggetto Boolean che è true se la matrice deve essere eliminato quando la funzione ctype < `char`> oggetto viene distrutto, nonché refs il parametro-conteggio dei riferimenti.  
  
-   La funzione membro protetta **tabella** restituisce la tabella maschera ctype stored.  
  
-   L'oggetto membro statico **table_size** Specifica il numero minimo di elementi in una tabella di maschera ctype.  
  
-   La funzione membro statica protetto **classic_table**(restituisce la tabella maschera ctype appropriato per le impostazioni locali "C".  
  
-   Nessuna funzione membro virtuale protetta [do_is](../standard-library/ctype-class.md#ctype__do_is), [do_scan_is](../standard-library/ctype-class.md#ctype__do_scan_is), o [do_scan_not](../standard-library/ctype-class.md#ctype__do_scan_not). Le funzioni membro pubbliche corrispondenti eseguono le operazioni equivalenti se stessi.  
  
 Le funzioni membro [do_narrow](../standard-library/ctype-class.md#ctype__do_narrow) e [do_widen](../standard-library/ctype-class.md#ctype__do_widen) copiare elementi inalterati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Classe facet](../Topic/facet%20Class.md)   
 [Classe ctype_base](../standard-library/ctype-base-class.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

