---
title: Identificatori (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- decorated names
- decorated names, about decorated names
- identifiers, C++
- white space, in C++ identifiers
- identifiers [C++]
ms.assetid: 03a0dfb1-4530-4cdf-8295-5ea4dca4c1b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8bb25713ad4f4a8ab1821eac4f7bf05d671bb101
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32415407"
---
# <a name="identifiers-c"></a>Identificatori (C++)
Un identificatore è una sequenza di caratteri usata per indicare uno dei seguenti elementi:  
  
-   Oggetto o nome della variabile  
  
-   Nome della classe, della struttura o dell'unione  
  
-   Nome del tipo enumerato  
  
-   Membro di una classe, struttura, unione o enumerazione.  
  
-   Funzione o funzione membro di classe  
  
-   Nome typedef  
  
-   Nome etichetta  
  
-   Nome macro  
  
-   Parametro macro  
  
 I seguenti caratteri sono consentiti come qualsiasi carattere di un identificatore:  
  
```  
_ a b c d e f g h i j k l m  
n o p q r s t u v w x y z  
A B C D E F G H I J K L M  
N O P Q R S T U V W X Y Z  
```  
  
 Anche alcuni intervalli di nomi di caratteri universali sono consentiti in un identificatore.  Un nome di carattere universale in un identificatore non può definire un carattere di controllo o un carattere nel set di caratteri di origine di base. Per altre informazioni, vedere [set di caratteri](../cpp/character-sets.md). Questi intervalli di numeri punto di codice Unicode sono consentiti come nomi di caratteri universali per qualsiasi carattere in un identificatore:  
  
-   00A8, 00AA, 00AD, 00AF, 00B2-00B5, 00B7-00BA, 00BC-00BE, 00C0-00D6, 00D8-00F6, 00F8-00FF, 0100-02FF, 0370-167F, 1681-180D, 180F-1DBF, 1E00-1FFF, 200B-200D, 202A-202E, 203F-2040, 2054, 2060-206F, 2070-20CF, 2100-218F, 2460-24FF, 2776-2793, 2C00-2DFF, 2E80-2FFF, 3004-3007, 3021-302F, 3031-303F, 3040-D7FF, F900-FD3D, FD40-FDCF, FDF0-FE1F, FE30-FE44, FE47-FFFD, 10000-1FFFD, 20000-2FFFD, 30000-3FFFD, 40000-4FFFD, 50000-5FFFD, 60000-6FFFD, 70000-7FFFD, 80000-8FFFD, 90000-9FFFD, A0000-AFFFD, B0000-BFFFD, C0000-CFFFD, D0000-DFFFD, E0000-EFFFD  
  
 I seguenti caratteri sono consentiti come qualsiasi carattere in un identificatore eccetto il primo:  
  
```  
0 1 2 3 4 5 6 7 8 9  
```  
  
 Anche questi intervalli di numeri punto di codice Unicode sono consentiti come nomi di caratteri universali per qualsiasi carattere in un identificatore eccetto il primo:  
  
-   0300-036F, 1DC0-1DFF, 20D0-20FF, FE20-FE2F  
  
 **Sezione specifica Microsoft**  
  
 Solo i primi 2048 caratteri degli identificatori di Microsoft C++ sono significativi. I nomi dei tipi definiti dall'utente sono decorati dal compilatore per conservare le informazioni sul tipo. Il nome risultante, incluse le informazioni sul tipo, non può essere più lungo di 2048 caratteri. (Vedere [nomi decorati](../build/reference/decorated-names.md) per ulteriori informazioni.) I fattori che possono influenzare la lunghezza di un identificatore decorato sono i seguenti:  
  
-   Se l'identificatore indica un oggetto di tipo definito dall'utente o un tipo derivato da un tipo definito dall'utente.  
  
-   Se l'identificatore indica una funzione o un tipo derivato da una funzione.  
  
-   Numero di argomenti per una funzione.  
  
 Il simbolo del dollaro `$` è un carattere identificatore valido anche in Visual C++. Visual C++ consente inoltre di usare i caratteri effettivi rappresentati dagli intervalli consentiti di nomi di caratteri universali negli identificatori. Per usare questi caratteri, è necessario salvare il file usando una tabella codici di codifica file che li include.  Questo esempio mostra come sia i caratteri estesi sia i nomi di caratteri universali possano essere usati in modo intercambiabile nel codice.  
  
```  
// extended_identifier.cpp  
// In Visual Studio, use File, Advanced Save Options to set  
// the file encoding to Unicode codepage 1200  
struct テスト         // Japanese 'test'  
{  
    void トスト() {}  // Japanese 'toast'  
};  
  
int main() {  
    テスト \u30D1\u30F3;  // Japanese パン 'bread' in UCN form  
    パン.トスト();        // compiler recognizes UCN or literal form  
}  
```  
  
 L'intervallo di caratteri consentiti in un identificatore è meno restrittivo quando si compila codice C++/CLI. Gli identificatori nel codice compilato con /clr devono essere conformi allo  [standard ECMA-335: Common Language Infrastructure (CLI)](http://www.ecma-international.org/publications/standards/Ecma-335.htm).  
  
 **Fine sezione specifica Microsoft**  
  
 Il primo carattere di un identificatore deve essere un carattere alfabetico, maiuscolo o minuscolo, oppure un carattere di sottolineatura ( **_** ). Poiché gli identificatori di C++ rispettano la distinzione tra maiuscole e minuscole, `fileName` è diverso da `FileName`.  
  
 Gli identificatori non possono avere esattamente la stessa ortografia delle parole chiave. Gli identificatori contenenti parole chiave sono validi. Ad esempio, `Pint` è un identificatore valido, anche se contiene `int`, che è una parola chiave.  
  
 L'utilizzo di due caratteri di sottolineatura sequenziali ( **__** ) all'inizio di un identificatore o un singolo carattere di sottolineatura seguito da un carattere maiuscolo è riservato alle implementazioni C++ in tutti gli ambiti. Evitare di usare un carattere di sottolineatura iniziale seguito da una minuscola per i nomi con ambito file per non creare potenziali conflitti con gli identificatori riservati correnti o futuri.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)