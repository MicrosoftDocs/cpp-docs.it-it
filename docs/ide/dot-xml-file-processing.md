---
title: "Elaborazione del file .Xml | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "documentazione XML, elaborazione file XML"
ms.assetid: e70fdeae-80ac-4872-ab24-771c5635cfbf
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione del file .Xml
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore genera una stringa identificativa \(ID\) per ciascun costrutto del codice che contiene tag per la creazione della documentazione.  Per ulteriori informazioni, vedere [Commenti della documentazione dei tag consigliati](../ide/recommended-tags-for-documentation-comments-visual-cpp.md).  L'ID identifica in modo univoco il costrutto.  I programmi che elaborano il file xml possono utilizzare la stringa ID per identificare i metadati di .NET Framework o un elemento corrispondenti di reflection della documentazione si applica.  
  
 Il file xml non è una rappresentazione gerarchica del codice, è un semplice elenco con un ID generato per ogni elemento.  
  
 Per generare gli ID, il compilatore applica le regole descritte di seguito.  
  
-   La stringa non deve contenere spazi vuoti.  
  
-   La prima parte della stringa ID specifica il tipo di membro da identificare, con un singolo carattere seguito dai due punti.  Vengono utilizzati i tipi di membri descritti di seguito.  
  
    |Carattere|Descrizione|  
    |---------------|-----------------|  
    |N|Spazio dei nomi<br /><br /> Non è possibile aggiungere i commenti della documentazione a uno spazio dei nomi, riferimenti cref in uno spazio dei nomi è possibile.|  
    |T|tipo: classe, interfaccia, struct, enum, delegato|  
    |D|typedef|  
    |F|campo|  
    |P|proprietà \(compresi gli indicizzatori o altre proprietà indicizzate\)|  
    |M|metodo \(compresi i metodi speciali, ad esempio costruttori, operatori e così via\)|  
    |E|evento|  
    |\!|stringa di errore<br /><br /> Nella parte restante della stringa vengono fornite informazioni sull'errore.  Il compilatore di Visual C\+\+ genera informazioni sugli errori per i collegamenti che non possono essere risolti.|  
  
-   La seconda parte della stringa identifica il nome completo dell'elemento, a partire dalla radice dello spazio dei nomi.  Il nome dell'elemento, il tipo di inclusione o tipi e lo spazio dei nomi sono separati da punti.  Se il nome dell'elemento contiene dei punti, questi verranno sostituiti con il segno di cancelletto \('\#'\),  Si presume che nessun elemento ha un segno hash direttamente nel nome.  Ad esempio, il nome completo del costruttore di `String` sarebbe “System.String.\#ctor„.  
  
-   Per le proprietà e i metodi, se il metodo ha degli argomenti, verrà incluso di seguito l'elenco degli argomenti racchiuso tra parentesi.  Se non vi sono argomenti, non si utilizzeranno le parentesi.  Gli argomenti sono separati da virgole.  La codifica di ciascun argomento è del tutto simile alla modalità di codifica utilizzata in una firma .NET Framework.  
  
    -   Tipi base.  I tipi regolari \(ELEMENT\_TYPE\_CLASS o ELEMENT\_TYPE\_VALUETYPE\) vengono rappresentati con il nome completo del tipo.  
  
    -   Tipi intrinseci \(ad esempio, ELEMENT\_TYPE\_I4, ELEMENT\_TYPE\_OBJECT, ELEMENT\_TYPE\_STRING, ELEMENT\_TYPE\_TYPEDBYREF.  e ELEMENT\_TYPE\_VOID\) sono rappresentati come nome completo del tipo completo corrispondente, ad esempio, **System.Int32** o **System.TypedReference**.  
  
    -   ELEMENT\_TYPE\_PTR viene rappresentato con '\*' dopo il tipo modificato.  
  
    -   ELEMENT\_TYPE\_BYREF viene rappresentato con '@' dopo il tipo modificato.  
  
    -   ELEMENT\_TYPE\_PINNED viene rappresentato con '^' dopo il tipo modificato.  Il compilatore di Visual C\+\+ non viene mai questo.  
  
    -   ELEMENT\_TYPE\_CMOD\_REQ viene rappresentato con '&#124;' seguito dal nome completo della classe di modificatori dopo il tipo modificato.  Il compilatore di Visual C\+\+ non viene mai questo.  
  
    -   ELEMENT\_TYPE\_CMOD\_OPT viene rappresentato con '\!' seguito dal nome completo della classe di modificatori dopo il tipo modificato.  
  
    -   ELEMENT\_TYPE\_SZARRAY viene rappresentato con "\[\]" dopo il tipo di elemento della matrice.  
  
    -   ELEMENT\_TYPE\_GENERICARRAY viene rappresentato con "\[?\]" dopo il tipo di elemento della matrice.  Il compilatore di Visual C\+\+ non viene mai questo.  
  
    -   ELEMENT\_TYPE\_ARRAY viene rappresentato con \[*limite inferiore*:`size`,*limite inferiore*:`size`\], dove il numero di virgole indica il numero di dimensioni \- 1. I limiti inferiori e le dimensioni di ciascuna dimensione, qualora noti, vengono rappresentati con valori decimali.  Se non è specificato alcun valore, il limite o la dimensione inferiore viene omessa.  Se vengono omessi il limite inferiore e la dimensione per una dimensione specifica, anche ':' viene omesso.  Ad esempio, una matrice a due dimensioni con limiti inferiori pari a 1 e dimensioni non specificate viene rappresentata con \[1:,1:\].  
  
    -   ELEMENT\_TYPE\_FNPTR viene rappresentato con "\=FUNC:`type`\(*signature*\)", dove `type` rappresenta il tipo restituito e *signature* identifica gli argomenti del metodo.  Se non vi sono argomenti, le parentesi vengono omesse.  Il compilatore di Visual C\+\+ non viene mai questo.  
  
     I seguenti componenti della firma non vengono rappresentati in quanto non vengono mai utilizzati per differenziare i metodi di overload:  
  
    -   convenzione di chiamata;  
  
    -   tipo restituito;  
  
    -   ELEMENT\_TYPE\_SENTINEL.  
  
-   Per gli operatori di conversione solo, il valore restituito del metodo viene codificato come “~„ seguita dal tipo restituito, come in precedenza codificato.  
  
-   Nel caso di tipi generici il nome del tipo verrà seguito da un apice inverso e quindi da un numero che indica il numero di parametri di tipo generici.  Di seguito è riportato un esempio:  
  
    ```  
    <member name="T:MyClass`2">  
    ```  
  
     Per un tipo definito come `public class MyClass<T, U>`.  
  
     Nel caso di metodi che accettano tipi generici come parametri, i parametri di tipo generici sono caratterizzati da numeri preceduti da apici inversi, ad esempio \`0,\`1.  Ciascun numero rappresenta la notazione della matrice in base zero per i parametri generici del tipo.  
  
## Esempio  
 Negli esempi seguenti viene mostrato come le stringhe ID di classe e i relativi membri verranno generati.  
  
```  
// xml_id_strings.cpp  
// compile with: /clr /doc /LD  
///   
namespace N {    
// "N:N"  
  
   /// <see cref="System" />  
   //  <see cref="N:System"/>  
   ref class X {      
   // "T:N.X"  
  
   protected:  
      ///   
      !X(){}     
      // "M:N.X.Finalize", destructor's representation in metadata  
  
   public:  
      ///   
      X() {}     
      // "M:N.X.#ctor"  
  
      ///   
      static X() {}     
      // "M:N.X.#cctor"  
  
      ///   
      X(int i) {}     
      // "M:N.X.#ctor(System.Int32)"  
  
      ///   
      ~X() {}     
      // "M:N.X.Dispose", Dispose function representation in metadata  
  
      ///   
      System::String^ q;     
      // "F:N.X.q"  
  
      ///   
      double PI;     
      // "F:N.X.PI"  
  
      ///   
      int f() { return 1; }     
      // "M:N.X.f"  
  
      ///   
      int bb(System::String ^ s, int % y, void * z) { return 1; }  
      // "M:N.X.bb(System.String,System.Int32@,System.Void*)"  
  
      ///   
      int gg(array<short> ^ array1, array< int, 2 >^ IntArray) { return 0; }   
      // "M:N.X.gg(System.Int16[], System.Int32[0:,0:])"  
  
      ///   
      static X^ operator+(X^ x, X^ xx) { return x; }  
     // "M:N.X.op_Addition(N.X,N.X)"  
  
      ///   
      property int prop;     
      // "M:N.X.prop"  
  
      ///   
      property int prop2 {     
      // "P:N.X.prop2"  
  
         ///   
         int get() { return 0; }  
         // M:N.X.get_prop2  
  
         ///   
         void set(int i) {}  
         // M:N.X.set_prop2(System.Int32)  
      }  
  
      ///   
      delegate void D(int i);   
      // "T:N.X.D"  
  
      ///   
      event D ^ d;   
      // "E:N.X.d"  
  
      ///   
      ref class Nested {};   
      // "T:N.X.Nested"  
  
      ///   
      static explicit operator System::Int32 (X x) { return 1; }   
      // "M:N.X.op_Explicit(N.X!System.Runtime.CompilerServices.IsByValue)~System.Int32"  
   };  
}  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)