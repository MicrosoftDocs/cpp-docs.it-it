---
title: Classe ctype&lt;char&gt;
ms.date: 11/04/2016
f1_keywords:
- ctype<char>
- locale/std::ctype<char>
helpviewer_keywords:
- ctype<char> class
ms.assetid: ee30acb4-a743-405e-b3d4-13602092da84
ms.openlocfilehash: adaad8f76de5b712aea13794ef2d7b9a096fb8ef
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394156"
---
# <a name="ctypeltchargt-class"></a>Classe ctype&lt;char&gt;

La classe è una specializzazione esplicita della classe modello `ctype\<CharType>` al tipo **char**, che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per caratterizzare le varie proprietà di un carattere di tipo **char**.

## <a name="syntax"></a>Sintassi

```cpp
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

- Un oggetto della classe ctype < `char`> Archivia un puntatore al primo elemento di una tabella di maschera ctype, una matrice di UCHAR_MAX + 1 elementi di tipo `ctype_base::mask`. Archivia anche un oggetto booleano che indica se la matrice deve essere eliminata (tramite `operator delete[]`) quando l'oggetto di ctype\< **Elem**> viene eliminato.

- Il costruttore pubblico unico consente di specificare `tab`, la tabella di maschera ctype, e `del`, l'oggetto booleano che restituisce true se la matrice deve essere eliminato quando l'oggetto di ctype < `char`> oggetto viene eliminato definitivamente, nonché il conteggio dei riferimenti riferimenti al parametro.

- La funzione membro protetto `table` restituisce la tabella di maschera ctype archiviata.

- L'oggetto membro statico `table_size` specifica il numero minimo di elementi in una tabella di maschera ctype.

- La funzione membro protetto statica `classic_table`(restituisce la tabella maschera ctype appropriata per le impostazioni locali "C".

- Non ci sono funzioni membro virtuale protetto [do_is](../standard-library/ctype-class.md#do_is), [do_scan_is](../standard-library/ctype-class.md#do_scan_is) o [do_scan_not](../standard-library/ctype-class.md#do_scan_not). Le funzioni membro pubblico corrispondenti eseguono direttamente le operazioni equivalenti.

Le funzioni membro [do_narrow](../standard-library/ctype-class.md#do_narrow) e [do_widen](../standard-library/ctype-class.md#do_widen) copiano elementi non modificati.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe facet](locale-class.md#facet_class)<br/>
[Classe ctype_base](../standard-library/ctype-base-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
