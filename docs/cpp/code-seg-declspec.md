---
description: 'Altre informazioni su: code_seg (__declspec)'
title: code_seg (__declspec)
ms.date: 11/04/2016
f1_keywords:
- code_seg_cpp
helpviewer_keywords:
- code_seg __declspec keyword
ms.assetid: ad3c1105-15d3-4e08-b7b9-e4bd9d7b6aa0
ms.openlocfilehash: b382e0a758c28ffab297badda7670c1de3b08d32
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97171094"
---
# <a name="code_seg-__declspec"></a>code_seg (__declspec)

**Specifico di Microsoft**

L'attributo di Dichiarazione **code_seg** assegna un nome a un segmento di testo eseguibile nel file con estensione obj in cui verrà archiviato il codice oggetto per la funzione o le funzioni membro della classe.

## <a name="syntax"></a>Sintassi

```
__declspec(code_seg("segname")) declarator
```

## <a name="remarks"></a>Osservazioni

L'attributo `__declspec(code_seg(...))` consente il posizionamento del codice in segmenti denominati separati di cui è possibile eseguire singolarmente il paging o il blocco in memoria. È possibile usare questo attributo per controllare il posizionamento dei modelli di cui sono state create istanze e del codice generato dal compilatore.

Un *segmento* è un blocco di dati denominato in un file con estensione obj caricato in memoria come unità. Un *segmento di testo* è un segmento che contiene il codice eseguibile. Il termine *sezione* viene spesso usato in modo interscambiabile con il segmento.

Il codice oggetto generato quando viene definito `declarator` viene inserito nel segmento di testo specificato da `segname`, ovvero un valore letterale stringa "narrow". Il nome non `segname` deve essere specificato in una [sezione](../preprocessor/section.md) pragma prima di poter essere usato in una dichiarazione. Per impostazione predefinita, quando non viene specificato alcun `code_seg`, il codice oggetto viene inserito in un segmento denominato .text. Un attributo **code_seg** esegue l'override di qualsiasi direttiva [#pragma code_seg](../preprocessor/code-seg.md) esistente. Un attributo **code_seg** applicato a una funzione membro esegue l'override di qualsiasi attributo **code_seg** applicato alla classe che lo contiene.

Se un'entità dispone di un attributo **code_seg** , tutte le dichiarazioni e le definizioni della stessa entità devono avere attributi **code_seg** identici. Se una classe base dispone di un attributo **code_seg** , le classi derivate devono avere lo stesso attributo.

Quando un attributo **code_seg** viene applicato a una funzione di ambito dello spazio dei nomi o a una funzione membro, il codice dell'oggetto per tale funzione viene inserito nel segmento di testo specificato. Quando questo attributo viene applicato a una classe, tutte le funzioni membro della classe e delle classi annidate, incluse le funzioni membro speciali generate dal compilatore, vengono inserite nel segmento specificato. Le classi definite localmente, ad esempio le classi definite nel corpo di una funzione membro, non ereditano l'attributo **code_seg** dell'ambito che lo contiene.

Quando un attributo **code_seg** viene applicato a una classe modello o a una funzione di modello, tutte le specializzazioni implicite del modello vengono inserite nel segmento specificato. Le specializzazioni esplicite o parziali non ereditano l'attributo **code_seg** dal modello primario. Per la specializzazione è possibile specificare lo stesso attributo o un **code_seg** diverso. Non è possibile applicare un attributo **code_seg** a una creazione di istanza esplicita di un modello.

Per impostazione predefinita, il codice generato dal compilatore, ad esempio una funzione membro speciale, viene inserito nel segmento .text. La direttiva `#pragma code_seg` non esegue l'override di questa impostazione predefinita. Usare l'attributo **code_seg** sulla classe, sul modello di classe o sul modello di funzione per controllare la posizione in cui viene inserito il codice generato dal compilatore.

Le espressioni lambda ereditano gli attributi **code_seg** dall'ambito che lo contiene. Per specificare un segmento per un'espressione lambda, applicare un attributo **code_seg** dopo la clausola parameter-declaration e prima di qualsiasi specifica di eccezione o modificabile, qualsiasi specifica del tipo restituito finale e il corpo dell'espressione lambda. Per altre informazioni, vedere [sintassi delle espressioni lambda](../cpp/lambda-expression-syntax.md). In questo esempio viene definita un'espressione lambda in un segmento denominato PagedMem:

```cpp
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };
```

Prestare attenzione nell'inserire funzioni membro specifiche, in particolare funzioni membro virtuali, in segmenti diversi. Se si definisce una funzione virtuale in una classe derivata che risiede in un segmento di paging quando il metodo della classe base si trova in un segmento non di paging, gli altri metodi della classe base o il codice utente potrebbe presumere che l'azione di richiamare il metodo virtuale non comporta alcun errore di pagina.

## <a name="example"></a>Esempio

Questo esempio Mostra come un attributo **code_seg** controlla la posizione del segmento quando viene usata la specializzazione di modello implicita ed esplicita:

```cpp
// code_seg.cpp
// Compile: cl /EHsc /W4 code_seg.cpp

// Base template places object code in Segment_1 segment
template<class T>
class __declspec(code_seg("Segment_1")) Example
{
public:
   virtual void VirtualMemberFunction(T /*arg*/) {}
};

// bool specialization places code in default .text segment
template<>
class Example<bool>
{
public:
   virtual void VirtualMemberFunction(bool /*arg*/) {}
};

// int specialization places code in Segment_2 segment
template<>
class __declspec(code_seg("Segment_2")) Example<int>
{
public:
   virtual void VirtualMemberFunction(int /*arg*/) {}
};

// Compiler warns and ignores __declspec(code_seg("Segment_3"))
// in this explicit specialization
__declspec(code_seg("Segment_3")) Example<short>; // C4071

int main()
{
   // implicit double specialization uses base template's
   // __declspec(code_seg("Segment_1")) to place object code
   Example<double> doubleExample{};
   doubleExample.VirtualMemberFunction(3.14L);

   // bool specialization places object code in default .text segment
   Example<bool> boolExample{};
   boolExample.VirtualMemberFunction(true);

   // int specialization uses __declspec(code_seg("Segment_2"))
   // to place object code
   Example<int> intExample{};
   intExample.VirtualMemberFunction(42);
}
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
