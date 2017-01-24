---
title: "Direttiva #using (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "friend_as_cpp"
  - "#using"
  - "friend_as"
  - "#using_cpp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#using (direttiva)"
  - "LIBPATH (variabile di ambiente)"
  - "preprocessore, direttive"
  - "using (direttiva) (#using)"
ms.assetid: 870b15e5-f361-40a8-ba1c-c57d75c8809a
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttiva #using (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Importare i metadati in un programma compilato con [\/clr](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Sintassi  
  
```  
#using file [as_friend]  
```  
  
#### Parametri  
 `file`  
 Un MSIL .dll, .exe, .netmodule, o .obj.  Di seguito è riportato un esempio:  
  
 `#using <MyComponent.dll>`  
  
 as\_friend  
 Specifica che tutti i tipi in `file` siano accessibili.  Per ulteriori informazioni, vedere [Assembly Friend \(C\+\+\)](../dotnet/friend-assemblies-cpp.md).  
  
## Note  
 `file` può essere un file di Microsoft Intermediate Language \(MSIL\) che viene importato per i dati e costrutti gestiti.  Se un file .dll contiene un manifesto assembly, tutti i file .dll con riferimento nel manifesto vengono importati e l'assembly che si sta compilando elencherà i *file* nei metadati come riferimento assembly.  
  
 Se `file` non contiene un assembly \(se `file` è un modulo\) e se non si intende utilizzare le informazioni sul tipo tramite il modulo dell'applicazione corrente \(assembly\), è possibile semplicemente indicare che il modulo è parte dell'assembly; utilizzando [\/ASSEMBLYMODULE](../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md).  I tipi nel modulo sono quindi disponibili per qualsiasi applicazione con riferimento nell'assembly.  
  
 Un'alternativa all'utilizzo di `#using` è l'opzione del compilatore [\/FU](../build/reference/fu-name-forced-hash-using-file.md).  
  
 Gli assembly con estensione .exe passati a `#using` dovrebbero essere compilati con **\/clr:safe** o **\/clr:pure**, o con uno degli altri compilatori di Visual Studio \(come Visual Basic o Visual C\#, ad esempio\).  Provando ad importare i metadati di un assembly con estensione .exe compilato con **\/clr** si genererà un'eccezione di caricamento del file.  
  
> [!NOTE]
>  Un componente a cui si fa riferimento con `#using` può essere eseguito con una versione del file importato in fase di compilazione, comportando la produzione di risultati imprevisti da un'applicazione client.  
  
 Perché il compilatore sia in grado di riconoscere un tipo in un assembly \(non in un modulo\), è necessario imporre la risoluzione del tipo stesso. A tale scopo, è possibile definire un'istanza del tipo.  La risoluzione dei nomi dei tipi in un assembly da parte del compilatore può avvenire anche con altre modalità. Se, ad esempio, si eredita da un tipo in un assembly, il nome del tipo risulterà noto al compilatore.  
  
 Importando i metadati compilati dal codice sorgente che utilizza [\_\_declspec\(thread\)](../cpp/thread.md), la semantica del thread non è persistente nei metadati.  Ad esempio, una variabile dichiarata con **\_\_declspec\(thread\)**, compilata in un programma compilato per il Common Language Runtime di .NET Framework, e quindi importata con `#using`, non avrà la semantica **\_\_declspec\(thread\)** sulla variabile.  
  
 Tutti i tipi importati \(sia gestiti che nativi\) in un file a cui viene fatto riferimento con `#using` sono disponibili, ma il compilatore tratta i tipi nativi come dichiarazioni e non come definizioni.  
  
 mscorlib.dll viene automaticamente referenziato compilando con **\/clr**.  
  
 La variabile di ambiente LIBPATH specifica le cartelle in cui verranno cercati quando il compilatore tenta di risolvere i nomi dei file passati con `#using`.  
  
 Il compilatore eseguirà la ricerca dei riferimenti nel percorso seguente:  
  
-   Un percorso specificato in `#using`.  
  
-   La directory corrente.  
  
-   La cartella di sistema di .NET Framework.  
  
-   Cartelle aggiunte con l'opzione del compilatore [\/AI](../build/reference/ai-specify-metadata-directories.md).  
  
-   Cartelle nella variabile di ambiente LIBPATH.  
  
## Esempio  
 Se si compila un assembly \(C\) e si fa riferimento a un assembly \(B\) che fa riferimento a un altro assembly \(A\), non sarà necessario fare riferimento esplicitamente all'assembly A a meno che non vengano usati esplicitamente i tipi di A in C.  
  
```  
// using_assembly_A.cpp  
// compile with: /clr /LD  
public ref class A {};  
```  
  
## Esempio  
  
```  
// using_assembly_B.cpp  
// compile with: /clr /LD  
#using "using_assembly_A.dll"  
public ref class B {  
public:  
   void Test(A a) {}  
   void Test() {}  
};  
  
```  
  
## Esempio  
 Nell'esempio seguente, non esiste alcun errore del compilatore per non fare riferimento a using\_assembly\_A.dll perché il programma non utilizza nessuno dei tipi definiti in using\_assembly\_A.cpp.  
  
```  
// using_assembly_C.cpp  
// compile with: /clr  
#using "using_assembly_B.dll"  
int main() {  
   B b;  
   b.Test();  
}  
```  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)