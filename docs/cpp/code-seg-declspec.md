---
title: code_seg ( declspec) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- code_seg_cpp
dev_langs:
- C++
helpviewer_keywords:
- code_seg __declspec keyword
ms.assetid: ad3c1105-15d3-4e08-b7b9-e4bd9d7b6aa0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6dcf387283aa0d4cdb282760c4ee170a0205172d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068819"
---
# <a name="codeseg-declspec"></a>code_seg (__declspec)

**Sezione specifica Microsoft**

Il **code_seg** attributo di dichiarazione denomina un segmento di testo eseguibile nel file obj in cui verrà archiviato il codice oggetto per la funzione o funzioni membro della classe.

## <a name="syntax"></a>Sintassi

```
__declspec(code_seg("segname")) declarator
```

## <a name="remarks"></a>Note

L'attributo `__declspec(code_seg(...))` consente il posizionamento del codice in segmenti denominati separati di cui è possibile eseguire singolarmente il paging o il blocco in memoria. È possibile usare questo attributo per controllare il posizionamento dei modelli di cui sono state create istanze e del codice generato dal compilatore.

Oggetto *segmento* è un blocco denominato di dati in un file obj caricato in memoria come unità. Oggetto *segmento di testo* è un segmento contenente codice eseguibile. Il termine *sezione* viene spesso utilizzato intercambiabilmente con segmento.

Il codice oggetto generato quando viene definito `declarator` viene inserito nel segmento di testo specificato da `segname`, ovvero un valore letterale stringa "narrow". Il nome `segname` non deve essere specificato in un [sezione](../preprocessor/section.md) pragma prima di poter essere utilizzato in una dichiarazione. Per impostazione predefinita, quando non viene specificato alcun `code_seg`, il codice oggetto viene inserito in un segmento denominato .text. Oggetto **code_seg** esegue l'override di attributi esistenti [code_seg #pragma](../preprocessor/code-seg.md) direttiva. Oggetto **code_seg** attributo applicato a una funzione membro esegue l'override di qualsiasi **code_seg** attributo applicato alla classe che contiene.

Se un'entità dispone di un **code_seg** attributo tutte le dichiarazioni e definizioni della stessa entità devono avere identici **code_seg** attributi. Se una classe di base ha un **code_seg** attributo, che deriva le classi devono avere lo stesso attributo.

Quando un **code_seg** attributo viene applicato a una funzione con ambito spazio dei nomi o una funzione membro, il codice oggetto per tale funzione viene inserito nel segmento di testo specificato. Quando questo attributo viene applicato a una classe, tutte le funzioni membro della classe e delle classi annidate, incluse le funzioni membro speciali generate dal compilatore, vengono inserite nel segmento specificato. Classi definite localmente, ad esempio, le classi definite in un corpo della funzione membro, ovvero non ereditano il **code_seg** attributo dell'ambito di inclusione.

Quando un **code_seg** attributo viene applicato a una classe modello o una funzione di modello, tutte le specializzazioni implicite del modello vengono inserite nel segmento specificato. Le specializzazioni esplicite o parziali non ereditano il **code_seg** attributo dal modello principale. È possibile specificare lo stesso o un altro **code_seg** attributo nella specializzazione. Oggetto **code_seg** attributo non può essere applicato a un'istanza di modello espliciti.

Per impostazione predefinita, il codice generato dal compilatore, ad esempio una funzione membro speciale, viene inserito nel segmento .text. La direttiva `#pragma code_seg` non esegue l'override di questa impostazione predefinita. Usare la **code_seg** attributo di classe, un modello di classe o un modello di funzione per controllare il posizionamento di codice generato dal compilatore.

Le espressioni lambda ereditano **code_seg** gli attributi dall'ambito che contiene. Per specificare un segmento per un'espressione lambda, applicare un **code_seg** attributo dopo la clausola di dichiarazione parametro e prima di qualsiasi modificabile o specifica dell'eccezione, qualsiasi specifica del tipo restituito finale e il corpo dell'espressione lambda. Per altre informazioni, vedere [sintassi delle espressioni Lambda](../cpp/lambda-expression-syntax.md). In questo esempio viene definita un'espressione lambda in un segmento denominato PagedMem:

```cpp
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };
```

Prestare attenzione nell'inserire funzioni membro specifiche, in particolare funzioni membro virtuali, in segmenti diversi. Se si definisce una funzione virtuale in una classe derivata che risiede in un segmento di paging quando il metodo della classe base si trova in un segmento non di paging, gli altri metodi della classe base o il codice utente potrebbe presumere che l'azione di richiamare il metodo virtuale non comporta alcun errore di pagina.

## <a name="example"></a>Esempio

Questo esempio viene illustrato come un **code_seg** controlli attributo posizionamento quando implicita del segmento e viene usata la specializzazione di modello espliciti:

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)